//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/com/google/common/hash/LongAdder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonHashLongAdder")
#ifdef RESTRICT_ComGoogleCommonHashLongAdder
#define INCLUDE_ALL_ComGoogleCommonHashLongAdder 0
#else
#define INCLUDE_ALL_ComGoogleCommonHashLongAdder 1
#endif
#undef RESTRICT_ComGoogleCommonHashLongAdder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonHashLongAdder_) && (INCLUDE_ALL_ComGoogleCommonHashLongAdder || defined(INCLUDE_ComGoogleCommonHashLongAdder))
#define ComGoogleCommonHashLongAdder_

#define RESTRICT_ComGoogleCommonHashStriped64 1
#define INCLUDE_ComGoogleCommonHashStriped64 1
#include "com/google/common/hash/Striped64.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

#define RESTRICT_ComGoogleCommonHashLongAddable 1
#define INCLUDE_ComGoogleCommonHashLongAddable 1
#include "com/google/common/hash/LongAddable.h"

/*!
 @brief One or more variables that together maintain an initially zero <code>long</code> sum.When updates
  (method <code>add</code>) are contended across threads, the set of variables may grow dynamically to
  reduce contention.
 Method <code>sum</code> (or, equivalently, <code>longValue</code>) returns the current
  total combined across the variables maintaining the sum. 
 <p>This class is usually preferable to <code>AtomicLong</code> when multiple threads update a common
  sum that is used for purposes such as collecting statistics, not for fine-grained synchronization
  control. Under low update contention, the two classes have similar characteristics. But under
  high contention, expected throughput of this class is significantly higher, at the expense of
  higher space consumption. 
 <p>This class extends <code>Number</code>, but does <em>not</em> define methods such as <code>equals</code>
 , <code>hashCode</code> and <code>compareTo</code> because instances are expected to be mutated, and
  so are not useful as collection keys. 
 <p><em>jsr166e note: This class is targeted to be placed in java.util.concurrent.atomic.</em>
 @since 1.8
 @author Doug Lea
 */
@interface ComGoogleCommonHashLongAdder : ComGoogleCommonHashStriped64 < JavaIoSerializable, ComGoogleCommonHashLongAddable >

#pragma mark Public

/*!
 @brief Creates a new adder with initial sum of zero.
 */
- (instancetype __nonnull)init;

/*!
 @brief Adds the given value.
 @param x the value to add
 */
- (void)addWithLong:(jlong)x;

/*!
 @brief Equivalent to <code>add(-1)</code>.
 */
- (void)decrement;

/*!
 @brief Returns the <code>sum</code> as a <code>double</code> after a widening primitive conversion.
 */
- (jdouble)doubleValue;

/*!
 @brief Returns the <code>sum</code> as a <code>float</code> after a widening primitive conversion.
 */
- (jfloat)floatValue;

- (NSUInteger)hash;

/*!
 @brief Equivalent to <code>add(1)</code>.
 */
- (void)increment;

/*!
 @brief Returns the <code>sum</code> as an <code>int</code> after a narrowing primitive conversion.
 */
- (jint)intValue;

- (jboolean)isEqual:(id)obj;

/*!
 @brief Equivalent to <code>sum</code>.
 @return the sum
 */
- (jlong)longLongValue;

/*!
 @brief Resets variables maintaining the sum to zero.This method may be a useful alternative to
  creating a new adder, but is only effective if there are no concurrent updates.
 Because this
  method is intrinsically racy, it should only be used when it is known that no threads are
  concurrently updating.
 */
- (void)reset;

/*!
 @brief Returns the current sum.The returned value is <em>NOT</em> an atomic snapshot; invocation in
  the absence of concurrent updates returns an accurate result, but concurrent updates that occur
  while the sum is being calculated might not be incorporated.
 @return the sum
 */
- (jlong)sum;

/*!
 @brief Equivalent in effect to <code>sum</code> followed by <code>reset</code>.This method may apply for
  example during quiescent points between multithreaded computations.
 If there are updates
  concurrent with this method, the returned value is <em>not</em> guaranteed to be the final
  value occurring before the reset.
 @return the sum
 */
- (jlong)sumThenReset;

/*!
 @brief Returns the String representation of the <code>sum</code>.
 @return the String representation of the <code>sum</code>
 */
- (NSString *)description;

#pragma mark Package-Private

/*!
 @brief Version of plus for use in retryUpdate
 */
- (jlong)fnWithLong:(jlong)v
           withLong:(jlong)x;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashLongAdder)

FOUNDATION_EXPORT void ComGoogleCommonHashLongAdder_init(ComGoogleCommonHashLongAdder *self);

FOUNDATION_EXPORT ComGoogleCommonHashLongAdder *new_ComGoogleCommonHashLongAdder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonHashLongAdder *create_ComGoogleCommonHashLongAdder_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashLongAdder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonHashLongAdder")