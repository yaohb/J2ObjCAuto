//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/DoubleSummaryStatistics.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilDoubleSummaryStatistics")
#ifdef RESTRICT_JavaUtilDoubleSummaryStatistics
#define INCLUDE_ALL_JavaUtilDoubleSummaryStatistics 0
#else
#define INCLUDE_ALL_JavaUtilDoubleSummaryStatistics 1
#endif
#undef RESTRICT_JavaUtilDoubleSummaryStatistics

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilDoubleSummaryStatistics_) && (INCLUDE_ALL_JavaUtilDoubleSummaryStatistics || defined(INCLUDE_JavaUtilDoubleSummaryStatistics))
#define JavaUtilDoubleSummaryStatistics_

#define RESTRICT_JavaUtilFunctionDoubleConsumer 1
#define INCLUDE_JavaUtilFunctionDoubleConsumer 1
#include "java/util/function/DoubleConsumer.h"

/*!
 @brief A state object for collecting statistics such as count, min, max, sum, and
  average.
 <p>This class is designed to work with (though does not require) 
 streams. For example, you can compute
  summary statistics on a stream of doubles with: 
 @code
  DoubleSummaryStatistics stats = doubleStream.collect(DoubleSummaryStatistics::new,
                                                       DoubleSummaryStatistics::accept,
                                                       DoubleSummaryStatistics::combine); 
 
@endcode
  
 <p><code>DoubleSummaryStatistics</code> can be used as a 
 reduction
  target for a stream. For example: 
 @code
  DoubleSummaryStatistics stats = people.stream()
      .collect(Collectors.summarizingDouble(Person::getWeight));
 
@endcode
  This computes, in a single pass, the count of people, as well as the minimum,
  maximum, sum, and average of their weights.
 @since 1.8
 */
@interface JavaUtilDoubleSummaryStatistics : NSObject < JavaUtilFunctionDoubleConsumer >

#pragma mark Public

/*!
 @brief Construct an empty instance with zero count, zero sum, 
 <code>Double.POSITIVE_INFINITY</code> min, <code>Double.NEGATIVE_INFINITY</code>
  max and zero average.
 */
- (instancetype __nonnull)init;

/*!
 @brief Records another value into the summary information.
 @param value the input value
 */
- (void)acceptWithDouble:(jdouble)value;

/*!
 @brief Combines the state of another <code>DoubleSummaryStatistics</code> into this
  one.
 @param other another <code>DoubleSummaryStatistics</code>
 @throw NullPointerExceptionif <code>other</code> is null
 */
- (void)combineWithJavaUtilDoubleSummaryStatistics:(JavaUtilDoubleSummaryStatistics *)other;

/*!
 @brief Returns the arithmetic mean of values recorded, or zero if no
  values have been recorded.
 If any recorded value is a NaN or the sum is at any point a NaN
  then the average will be code NaN. 
 <p>The average returned can vary depending upon the order in
  which values are recorded.
  This method may be implemented using compensated summation or
  other technique to reduce the error bound in the <code>numerical sum</code>
  used to compute the average.
 @return the arithmetic mean of values, or zero if none
 */
- (jdouble)getAverage;

/*!
 @brief Return the count of values recorded.
 @return the count of values
 */
- (jlong)getCount;

/*!
 @brief Returns the maximum recorded value, <code>Double.NaN</code> if any recorded
  value was NaN or <code>Double.NEGATIVE_INFINITY</code> if no values were
  recorded.Unlike the numerical comparison operators, this method
  considers negative zero to be strictly smaller than positive zero.
 @return the maximum recorded value, <code>Double.NaN</code> if any recorded
  value was NaN or <code>Double.NEGATIVE_INFINITY</code> if no values were
  recorded
 */
- (jdouble)getMax;

/*!
 @brief Returns the minimum recorded value, <code>Double.NaN</code> if any recorded
  value was NaN or <code>Double.POSITIVE_INFINITY</code> if no values were
  recorded.Unlike the numerical comparison operators, this method
  considers negative zero to be strictly smaller than positive zero.
 @return the minimum recorded value, <code>Double.NaN</code> if any recorded
  value was NaN or <code>Double.POSITIVE_INFINITY</code> if no values were
  recorded
 */
- (jdouble)getMin;

/*!
 @brief Returns the sum of values recorded, or zero if no values have been
  recorded.
 If any recorded value is a NaN or the sum is at any point a NaN
  then the sum will be NaN. 
 <p> The value of a floating-point sum is a function both of the
  input values as well as the order of addition operations. The
  order of addition operations of this method is intentionally
  not defined to allow for implementation flexibility to improve
  the speed and accuracy of the computed result.
  In particular, this method may be implemented using compensated
  summation or other technique to reduce the error bound in the
  numerical sum compared to a simple summation of <code>double</code>
  values.
 @return the sum of values, or zero if none
 */
- (jdouble)getSum;

/*!
 @brief  Returns a non-empty string representation of this object suitable for
  debugging.The exact presentation format is unspecified and may vary
  between implementations and versions.
 */
- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilDoubleSummaryStatistics)

FOUNDATION_EXPORT void JavaUtilDoubleSummaryStatistics_init(JavaUtilDoubleSummaryStatistics *self);

FOUNDATION_EXPORT JavaUtilDoubleSummaryStatistics *new_JavaUtilDoubleSummaryStatistics_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilDoubleSummaryStatistics *create_JavaUtilDoubleSummaryStatistics_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilDoubleSummaryStatistics)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilDoubleSummaryStatistics")
