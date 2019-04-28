//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/com/google/common/util/concurrent/ForwardingCondition.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingCondition")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentForwardingCondition
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingCondition 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingCondition 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentForwardingCondition

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentForwardingCondition_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingCondition || defined(INCLUDE_ComGoogleCommonUtilConcurrentForwardingCondition))
#define ComGoogleCommonUtilConcurrentForwardingCondition_

#define RESTRICT_JavaUtilConcurrentLocksCondition 1
#define INCLUDE_JavaUtilConcurrentLocksCondition 1
#include "java/util/concurrent/locks/Condition.h"

@class JavaUtilConcurrentTimeUnit;
@class JavaUtilDate;

/*!
 @brief Forwarding wrapper around a <code>Condition</code>.
 */
@interface ComGoogleCommonUtilConcurrentForwardingCondition : NSObject < JavaUtilConcurrentLocksCondition >

#pragma mark Public

- (void)await;

- (jboolean)awaitWithLong:(jlong)time
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (jlong)awaitNanosWithLong:(jlong)nanosTimeout;

- (void)awaitUninterruptibly;

- (jboolean)awaitUntilWithJavaUtilDate:(JavaUtilDate *)deadline;

- (void)signal;

- (void)signalAll;

#pragma mark Package-Private

- (instancetype __nonnull)init;

- (id<JavaUtilConcurrentLocksCondition>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentForwardingCondition)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentForwardingCondition_init(ComGoogleCommonUtilConcurrentForwardingCondition *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentForwardingCondition)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingCondition")
