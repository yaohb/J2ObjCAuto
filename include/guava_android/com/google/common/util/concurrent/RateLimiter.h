//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/com/google/common/util/concurrent/RateLimiter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentRateLimiter")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentRateLimiter
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentRateLimiter 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentRateLimiter 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentRateLimiter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentRateLimiter_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentRateLimiter || defined(INCLUDE_ComGoogleCommonUtilConcurrentRateLimiter))
#define ComGoogleCommonUtilConcurrentRateLimiter_

@class ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch;
@class JavaUtilConcurrentTimeUnit;

/*!
 @brief A rate limiter.Conceptually, a rate limiter distributes permits at a configurable rate.
 Each 
 <code>acquire()</code> blocks if necessary until a permit is available, and then takes it. Once
  acquired, permits need not be released. 
 <p><code>RateLimiter</code> is safe for concurrent use: It will restrict the total rate of calls from
  all threads. Note, however, that it does not guarantee fairness. 
 <p>Rate limiters are often used to restrict the rate at which some physical or logical resource
  is accessed. This is in contrast to <code>java.util.concurrent.Semaphore</code> which restricts the
  number of concurrent accesses instead of the rate (note though that concurrency and rate are
  closely related, e.g. see <a href="http://en.wikipedia.org/wiki/Little%27s_law">Little's
  Law</a>).
  
 <p>A <code>RateLimiter</code> is defined primarily by the rate at which permits are issued. Absent
  additional configuration, permits will be distributed at a fixed rate, defined in terms of
  permits per second. Permits will be distributed smoothly, with the delay between individual
  permits being adjusted to ensure that the configured rate is maintained. 
 <p>It is possible to configure a <code>RateLimiter</code> to have a warmup period during which time
  the permits issued each second steadily increases until it hits the stable rate. 
 <p>As an example, imagine that we have a list of tasks to execute, but we don't want to submit
  more than 2 per second: 
 @code
 final RateLimiter rateLimiter = RateLimiter.create(2.0); // rate is "2 permits per second"
  void submitTasks(List<Runnable> tasks, Executor executor) {
    for (Runnable task : tasks) {
      rateLimiter.acquire(); // may wait
      executor.execute(task);
    }  }  
 
@endcode
  
 <p>As another example, imagine that we produce a stream of data, and we want to cap it at 5kb per
  second. This could be accomplished by requiring a permit per byte, and specifying a rate of 5000
  permits per second: 
 @code
 final RateLimiter rateLimiter = RateLimiter.create(5000.0); // rate = 5000 permits per second
  void submitPacket(byte[] packet) {
    rateLimiter.acquire(packet.length);
    networkService.send(packet);
  } 
 
@endcode
  
 <p>It is important to note that the number of permits requested <i>never</i> affects the
  throttling of the request itself (an invocation to <code>acquire(1)</code> and an invocation to <code>acquire(1000)</code>
  will result in exactly the same throttling, if any), but it affects the throttling
  of the <i>next</i> request. I.e., if an expensive task arrives at an idle RateLimiter, it will be
  granted immediately, but it is the <i>next</i> request that will experience extra throttling,
  thus paying for the cost of the expensive task.
 @author Dimitris Andreou
 @since 13.0
 */
@interface ComGoogleCommonUtilConcurrentRateLimiter : NSObject

#pragma mark Public

/*!
 @brief Acquires a single permit from this <code>RateLimiter</code>, blocking until the request can be
  granted.Tells the amount of time slept, if any.
 <p>This method is equivalent to <code>acquire(1)</code>.
 @return time spent sleeping to enforce rate, in seconds; 0.0 if not rate-limited
 @since 16.0 (present in 13.0 with <code>void</code> return type})
 */
- (jdouble)acquire;

/*!
 @brief Acquires the given number of permits from this <code>RateLimiter</code>, blocking until the request
  can be granted.Tells the amount of time slept, if any.
 @param permits the number of permits to acquire
 @return time spent sleeping to enforce rate, in seconds; 0.0 if not rate-limited
 @throw IllegalArgumentExceptionif the requested number of permits is negative or zero
 @since 16.0 (present in 13.0 with <code>void</code> return type})
 */
- (jdouble)acquireWithInt:(jint)permits;

/*!
 @brief Creates a <code>RateLimiter</code> with the specified stable throughput, given as "permits per
  second" (commonly referred to as <i>QPS</i>, queries per second).
 <p>The returned <code>RateLimiter</code> ensures that on average no more than <code>permitsPerSecond</code>
  are issued during any given second, with sustained requests being smoothly
  spread over each second. When the incoming request rate exceeds <code>permitsPerSecond</code> the
  rate limiter will release one permit every <code>(1.0 / permitsPerSecond)</code> seconds. When the
  rate limiter is unused, bursts of up to <code>permitsPerSecond</code> permits will be allowed, with
  subsequent requests being smoothly limited at the stable rate of <code>permitsPerSecond</code>.
 @param permitsPerSecond the rate of the returned <code>RateLimiter</code> , measured in how many
       permits become available per second
 @throw IllegalArgumentExceptionif <code>permitsPerSecond</code> is negative or zero
 */
+ (ComGoogleCommonUtilConcurrentRateLimiter *)createWithDouble:(jdouble)permitsPerSecond;

/*!
 @brief Creates a <code>RateLimiter</code> with the specified stable throughput, given as "permits per
  second" (commonly referred to as <i>QPS</i>, queries per second), and a <i>warmup period</i>,
  during which the <code>RateLimiter</code> smoothly ramps up its rate, until it reaches its maximum
  rate at the end of the period (as long as there are enough requests to saturate it).Similarly,
  if the <code>RateLimiter</code> is left <i>unused</i> for a duration of <code>warmupPeriod</code>, it
  will gradually return to its "cold" state, i.e. it will go through the same warming up process
  as when it was first created.
 <p>The returned <code>RateLimiter</code> is intended for cases where the resource that actually
  fulfills the requests (e.g., a remote server) needs "warmup" time, rather than being
  immediately accessed at the stable (maximum) rate. 
 <p>The returned <code>RateLimiter</code> starts in a "cold" state (i.e. the warmup period will
  follow), and if it is left unused for long enough, it will return to that state.
 @param permitsPerSecond the rate of the returned <code>RateLimiter</code> , measured in how many
       permits become available per second
 @param warmupPeriod the duration of the period where the <code>RateLimiter</code>  ramps up its rate,
       before reaching its stable (maximum) rate
 @param unit the time unit of the warmupPeriod argument
 @throw IllegalArgumentExceptionif <code>permitsPerSecond</code> is negative or zero or <code>warmupPeriod</code>
  is negative
 */
+ (ComGoogleCommonUtilConcurrentRateLimiter *)createWithDouble:(jdouble)permitsPerSecond
                                                      withLong:(jlong)warmupPeriod
                                withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @brief Returns the stable rate (as <code>permits per seconds</code>) with which this <code>RateLimiter</code> is
  configured with.The initial value of this is the same as the <code>permitsPerSecond</code> argument
  passed in the factory method that produced this <code>RateLimiter</code>, and it is only updated
  after invocations to setRate.
 */
- (jdouble)getRate;

/*!
 @brief Updates the stable rate of this <code>RateLimiter</code>, that is, the <code>permitsPerSecond</code>
  argument provided in the factory method that constructed the <code>RateLimiter</code>.Currently
  throttled threads will <b>not</b> be awakened as a result of this invocation, thus they do not
  observe the new rate; only subsequent requests will.
 <p>Note though that, since each request repays (by waiting, if necessary) the cost of the 
 <i>previous</i> request, this means that the very next request after an invocation to <code>setRate</code>
  will not be affected by the new rate; it will pay the cost of the previous request,
  which is in terms of the previous rate. 
 <p>The behavior of the <code>RateLimiter</code> is not modified in any other way, e.g. if the <code>RateLimiter</code>
  was configured with a warmup period of 20 seconds, it still has a warmup period of
  20 seconds after this method invocation.
 @param permitsPerSecond the new stable rate of this <code>RateLimiter</code>
 @throw IllegalArgumentExceptionif <code>permitsPerSecond</code> is negative or zero
 */
- (void)setRateWithDouble:(jdouble)permitsPerSecond;

- (NSString *)description;

/*!
 @brief Acquires a permit from this <code>RateLimiter</code> if it can be acquired immediately without
  delay.
 <p>This method is equivalent to <code>tryAcquire(1)</code>.
 @return <code>true</code> if the permit was acquired, <code>false</code> otherwise
 @since 14.0
 */
- (jboolean)tryAcquire;

/*!
 @brief Acquires permits from this <code>RateLimiter</code> if it can be acquired immediately without delay.
 <p>This method is equivalent to <code>tryAcquire(permits, 0, anyUnit)</code>.
 @param permits the number of permits to acquire
 @return <code>true</code> if the permits were acquired, <code>false</code> otherwise
 @throw IllegalArgumentExceptionif the requested number of permits is negative or zero
 @since 14.0
 */
- (jboolean)tryAcquireWithInt:(jint)permits;

/*!
 @brief Acquires the given number of permits from this <code>RateLimiter</code> if it can be obtained
  without exceeding the specified <code>timeout</code>, or returns <code>false</code> immediately (without
  waiting) if the permits would not have been granted before the timeout expired.
 @param permits the number of permits to acquire
 @param timeout the maximum time to wait for the permits. Negative values are treated as zero.
 @param unit the time unit of the timeout argument
 @return <code>true</code> if the permits were acquired, <code>false</code> otherwise
 @throw IllegalArgumentExceptionif the requested number of permits is negative or zero
 */
- (jboolean)tryAcquireWithInt:(jint)permits
                     withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @brief Acquires a permit from this <code>RateLimiter</code> if it can be obtained without exceeding the
  specified <code>timeout</code>, or returns <code>false</code> immediately (without waiting) if the permit
  would not have been granted before the timeout expired.
 <p>This method is equivalent to <code>tryAcquire(1, timeout, unit)</code>.
 @param timeout the maximum time to wait for the permit. Negative values are treated as zero.
 @param unit the time unit of the timeout argument
 @return <code>true</code> if the permit was acquired, <code>false</code> otherwise
 @throw IllegalArgumentExceptionif the requested number of permits is negative or zero
 */
- (jboolean)tryAcquireWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch:(ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *)stopwatch;

+ (ComGoogleCommonUtilConcurrentRateLimiter *)createWithDouble:(jdouble)permitsPerSecond
                                                      withLong:(jlong)warmupPeriod
                                withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit
                                                    withDouble:(jdouble)coldFactor
withComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch:(ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *)stopwatch;

+ (ComGoogleCommonUtilConcurrentRateLimiter *)createWithDouble:(jdouble)permitsPerSecond
withComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch:(ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *)stopwatch;

- (jdouble)doGetRate;

- (void)doSetRateWithDouble:(jdouble)permitsPerSecond
                   withLong:(jlong)nowMicros;

/*!
 @brief Returns the earliest time that permits are available (with one caveat).
 @return the time that permits are available, or, if permits are available immediately, an
      arbitrary past or present time
 */
- (jlong)queryEarliestAvailableWithLong:(jlong)nowMicros;

/*!
 @brief Reserves the given number of permits from this <code>RateLimiter</code> for future use, returning
  the number of microseconds until the reservation can be consumed.
 @return time in microseconds to wait until the resource can be acquired, never negative
 */
- (jlong)reserveWithInt:(jint)permits;

/*!
 @brief Reserves next ticket and returns the wait time that the caller must wait for.
 @return the required wait time, never negative
 */
- (jlong)reserveAndGetWaitLengthWithInt:(jint)permits
                               withLong:(jlong)nowMicros;

/*!
 @brief Reserves the requested number of permits and returns the time that those permits can be used
  (with one caveat).
 @return the time that the permits may be used, or, if the permits may be used immediately, an
      arbitrary past or present time
 */
- (jlong)reserveEarliestAvailableWithInt:(jint)permits
                                withLong:(jlong)nowMicros;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentRateLimiter)

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentRateLimiter *ComGoogleCommonUtilConcurrentRateLimiter_createWithDouble_(jdouble permitsPerSecond);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentRateLimiter *ComGoogleCommonUtilConcurrentRateLimiter_createWithDouble_withComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch_(jdouble permitsPerSecond, ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *stopwatch);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentRateLimiter *ComGoogleCommonUtilConcurrentRateLimiter_createWithDouble_withLong_withJavaUtilConcurrentTimeUnit_(jdouble permitsPerSecond, jlong warmupPeriod, JavaUtilConcurrentTimeUnit *unit);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentRateLimiter *ComGoogleCommonUtilConcurrentRateLimiter_createWithDouble_withLong_withJavaUtilConcurrentTimeUnit_withDouble_withComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch_(jdouble permitsPerSecond, jlong warmupPeriod, JavaUtilConcurrentTimeUnit *unit, jdouble coldFactor, ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *stopwatch);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentRateLimiter_initWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch_(ComGoogleCommonUtilConcurrentRateLimiter *self, ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *stopwatch);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentRateLimiter)

#endif

#if !defined (ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentRateLimiter || defined(INCLUDE_ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch))
#define ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch_

@interface ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch : NSObject

#pragma mark Public

+ (ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *)createFromSystemTimer;

#pragma mark Protected

/*!
 @brief Constructor for use by subclasses.
 */
- (instancetype __nonnull)init;

- (jlong)readMicros;

- (void)sleepMicrosUninterruptiblyWithLong:(jlong)micros;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch_init(ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *self);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch_createFromSystemTimer(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentRateLimiter")
