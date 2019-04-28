//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/com/google/common/collect/ConsumingQueueIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectConsumingQueueIterator")
#ifdef RESTRICT_ComGoogleCommonCollectConsumingQueueIterator
#define INCLUDE_ALL_ComGoogleCommonCollectConsumingQueueIterator 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectConsumingQueueIterator 1
#endif
#undef RESTRICT_ComGoogleCommonCollectConsumingQueueIterator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectConsumingQueueIterator_) && (INCLUDE_ALL_ComGoogleCommonCollectConsumingQueueIterator || defined(INCLUDE_ComGoogleCommonCollectConsumingQueueIterator))
#define ComGoogleCommonCollectConsumingQueueIterator_

#define RESTRICT_ComGoogleCommonCollectAbstractIterator 1
#define INCLUDE_ComGoogleCommonCollectAbstractIterator 1
#include "com/google/common/collect/AbstractIterator.h"

@class IOSObjectArray;
@protocol JavaUtilQueue;

/*!
 @brief An Iterator implementation which draws elements from a queue, removing them from the queue as it
  iterates.
 */
@interface ComGoogleCommonCollectConsumingQueueIterator : ComGoogleCommonCollectAbstractIterator

#pragma mark Public

- (id)computeNext;

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaUtilQueue:(id<JavaUtilQueue>)queue;

- (instancetype __nonnull)initWithNSObjectArray:(IOSObjectArray *)elements;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectConsumingQueueIterator)

FOUNDATION_EXPORT void ComGoogleCommonCollectConsumingQueueIterator_initWithNSObjectArray_(ComGoogleCommonCollectConsumingQueueIterator *self, IOSObjectArray *elements);

FOUNDATION_EXPORT ComGoogleCommonCollectConsumingQueueIterator *new_ComGoogleCommonCollectConsumingQueueIterator_initWithNSObjectArray_(IOSObjectArray *elements) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectConsumingQueueIterator *create_ComGoogleCommonCollectConsumingQueueIterator_initWithNSObjectArray_(IOSObjectArray *elements);

FOUNDATION_EXPORT void ComGoogleCommonCollectConsumingQueueIterator_initWithJavaUtilQueue_(ComGoogleCommonCollectConsumingQueueIterator *self, id<JavaUtilQueue> queue);

FOUNDATION_EXPORT ComGoogleCommonCollectConsumingQueueIterator *new_ComGoogleCommonCollectConsumingQueueIterator_initWithJavaUtilQueue_(id<JavaUtilQueue> queue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectConsumingQueueIterator *create_ComGoogleCommonCollectConsumingQueueIterator_initWithJavaUtilQueue_(id<JavaUtilQueue> queue);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectConsumingQueueIterator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectConsumingQueueIterator")
