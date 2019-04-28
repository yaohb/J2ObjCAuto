//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/util/concurrent/SmoothRateLimiter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentSmoothRateLimiter")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentSmoothRateLimiter
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentSmoothRateLimiter 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentSmoothRateLimiter 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentSmoothRateLimiter
#ifdef INCLUDE_ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty
#define INCLUDE_ComGoogleCommonUtilConcurrentSmoothRateLimiter 1
#endif
#ifdef INCLUDE_ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp
#define INCLUDE_ComGoogleCommonUtilConcurrentSmoothRateLimiter 1
#endif

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentSmoothRateLimiter_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentSmoothRateLimiter || defined(INCLUDE_ComGoogleCommonUtilConcurrentSmoothRateLimiter))
#define ComGoogleCommonUtilConcurrentSmoothRateLimiter_

#define RESTRICT_ComGoogleCommonUtilConcurrentRateLimiter 1
#define INCLUDE_ComGoogleCommonUtilConcurrentRateLimiter 1
#include "com/google/common/util/concurrent/RateLimiter.h"

@interface ComGoogleCommonUtilConcurrentSmoothRateLimiter : ComGoogleCommonUtilConcurrentRateLimiter {
 @public
  /*!
   @brief The currently stored permits.
   */
  jdouble storedPermits_;
  /*!
   @brief The maximum number of stored permits.
   */
  jdouble maxPermits_;
  /*!
   @brief The interval between two unit requests, at our stable rate.E.g., a stable rate of 5 permits
  per second has a stable interval of 200ms.
   */
  jdouble stableIntervalMicros_;
}

#pragma mark Package-Private

/*!
 @brief Returns the number of microseconds during cool down that we have to wait to get a new permit.
 */
- (jdouble)coolDownIntervalMicros;

- (jdouble)doGetRate;

- (void)doSetRateWithDouble:(jdouble)permitsPerSecond
                 withDouble:(jdouble)stableIntervalMicros;

- (void)doSetRateWithDouble:(jdouble)permitsPerSecond
                   withLong:(jlong)nowMicros;

- (jlong)queryEarliestAvailableWithLong:(jlong)nowMicros;

- (jlong)reserveEarliestAvailableWithInt:(jint)requiredPermits
                                withLong:(jlong)nowMicros;

/*!
 @brief Updates <code>storedPermits</code> and <code>nextFreeTicketMicros</code> based on the current time.
 */
- (void)resyncWithLong:(jlong)nowMicros;

/*!
 @brief Translates a specified portion of our currently stored permits which we want to spend/acquire,
  into a throttling time.Conceptually, this evaluates the integral of the underlying function we
  use, for the range of [(storedPermits - permitsToTake), storedPermits].
 <p>This always holds: <code>0 <= permitsToTake <= storedPermits</code>
 */
- (jlong)storedPermitsToWaitTimeWithDouble:(jdouble)storedPermits
                                withDouble:(jdouble)permitsToTake;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentSmoothRateLimiter)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentSmoothRateLimiter)

#endif

#if !defined (ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentSmoothRateLimiter || defined(INCLUDE_ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp))
#define ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp_

@class ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch;
@class JavaUtilConcurrentTimeUnit;

/*!
 @brief This implements the following function where coldInterval = coldFactor * stableInterval.
 @code

           ^ throttling
           |
     cold  +                  /
  interval |                 /.
           |                / .
           |               /  .   ← "warmup period" is the area of the trapezoid between
           |              /   .     thresholdPermits and maxPermits
           |             /    .
           |            /     .
           |           /      .
    stable +----------/  WARM .
  interval |          .   UP  .
           |          . PERIOD.
           |          .       .
         0 +----------+-------+--------------→ storedPermits
           0 thresholdPermits maxPermits 
  
@endcode
  Before going into the details of this particular function, let's keep in mind the basics: 
 <ol>
    <li>The state of the RateLimiter (storedPermits) is a vertical line in this figure.
    <li>When the RateLimiter is not used, this goes right (up to maxPermits)
    <li>When the RateLimiter is used, this goes left (down to zero), since if we have
        storedPermits, we serve from those first   
 <li>When _unused_, we go right at a constant rate! The rate at which we move to the right is
        chosen as maxPermits / warmupPeriod. This ensures that the time it takes to go from 0 to
        maxPermits is equal to warmupPeriod.   
 <li>When _used_, the time it takes, as explained in the introductory class note, is equal to
        the integral of our function, between X permits and X-K permits, assuming we want to
        spend K saved permits. 
 </ol>
  
 <p>In summary, the time it takes to move to the left (spend K permits), is equal to the area of
  the function of width == K. 
 <p>Assuming we have saturated demand, the time to go from maxPermits to thresholdPermits is
  equal to warmupPeriod. And the time to go from thresholdPermits to 0 is warmupPeriod/2. (The
  reason that this is warmupPeriod/2 is to maintain the behavior of the original implementation
  where coldFactor was hard coded as 3.) 
 <p>It remains to calculate thresholdsPermits and maxPermits. 
 <ul>
    <li>The time to go from thresholdPermits to 0 is equal to the integral of the function
        between 0 and thresholdPermits. This is thresholdPermits * stableIntervals. By (5) it is
        also equal to warmupPeriod/2. Therefore       
 <blockquote>
        thresholdPermits = 0.5 * warmupPeriod / stableInterval       
 </blockquote>
    <li>The time to go from maxPermits to thresholdPermits is equal to the integral of the
        function between thresholdPermits and maxPermits. This is the area of the pictured
        trapezoid, and it is equal to 0.5 * (stableInterval + coldInterval) * (maxPermits -
        thresholdPermits). It is also equal to warmupPeriod, so       
 <blockquote>
        maxPermits = thresholdPermits + 2 * warmupPeriod / (stableInterval + coldInterval)       
 </blockquote>
  </ul>
 */
@interface ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp : ComGoogleCommonUtilConcurrentSmoothRateLimiter

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch:(ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *)stopwatch
                                                                                    withLong:(jlong)warmupPeriod
                                                              withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)timeUnit
                                                                                  withDouble:(jdouble)coldFactor;

- (jdouble)coolDownIntervalMicros;

- (void)doSetRateWithDouble:(jdouble)permitsPerSecond
                 withDouble:(jdouble)stableIntervalMicros;

- (jlong)storedPermitsToWaitTimeWithDouble:(jdouble)storedPermits
                                withDouble:(jdouble)permitsToTake;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp_initWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch_withLong_withJavaUtilConcurrentTimeUnit_withDouble_(ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp *self, ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *stopwatch, jlong warmupPeriod, JavaUtilConcurrentTimeUnit *timeUnit, jdouble coldFactor);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp *new_ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp_initWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch_withLong_withJavaUtilConcurrentTimeUnit_withDouble_(ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *stopwatch, jlong warmupPeriod, JavaUtilConcurrentTimeUnit *timeUnit, jdouble coldFactor) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp *create_ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp_initWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch_withLong_withJavaUtilConcurrentTimeUnit_withDouble_(ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *stopwatch, jlong warmupPeriod, JavaUtilConcurrentTimeUnit *timeUnit, jdouble coldFactor);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp)

#endif

#if !defined (ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentSmoothRateLimiter || defined(INCLUDE_ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty))
#define ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty_

@class ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch;

/*!
 @brief This implements a "bursty" RateLimiter, where storedPermits are translated to zero throttling.
 The maximum number of permits that can be saved (when the RateLimiter is unused) is defined in
  terms of time, in this sense: if a RateLimiter is 2qps, and this time is specified as 10
  seconds, we can save up to 2 * 10 = 20 permits.
 */
@interface ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty : ComGoogleCommonUtilConcurrentSmoothRateLimiter {
 @public
  /*!
   @brief The work (permits) of how many seconds can be saved up if this RateLimiter is unused?
   */
  jdouble maxBurstSeconds_;
}

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch:(ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *)stopwatch
                                                                                  withDouble:(jdouble)maxBurstSeconds;

- (jdouble)coolDownIntervalMicros;

- (void)doSetRateWithDouble:(jdouble)permitsPerSecond
                 withDouble:(jdouble)stableIntervalMicros;

- (jlong)storedPermitsToWaitTimeWithDouble:(jdouble)storedPermits
                                withDouble:(jdouble)permitsToTake;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty_initWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch_withDouble_(ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty *self, ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *stopwatch, jdouble maxBurstSeconds);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty *new_ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty_initWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch_withDouble_(ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *stopwatch, jdouble maxBurstSeconds) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty *create_ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty_initWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch_withDouble_(ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *stopwatch, jdouble maxBurstSeconds);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentSmoothRateLimiter")