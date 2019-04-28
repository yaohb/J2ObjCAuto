//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/com/google/common/util/concurrent/AggregateFuture.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAggregateFuture")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentAggregateFuture
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAggregateFuture 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAggregateFuture 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentAggregateFuture

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentAggregateFuture_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentAggregateFuture || defined(INCLUDE_ComGoogleCommonUtilConcurrentAggregateFuture))
#define ComGoogleCommonUtilConcurrentAggregateFuture_

#define RESTRICT_ComGoogleCommonUtilConcurrentAbstractFuture 1
#define INCLUDE_ComGoogleCommonUtilConcurrentAbstractFuture_TrustedFuture 1
#include "com/google/common/util/concurrent/AbstractFuture.h"

@class ComGoogleCommonUtilConcurrentAggregateFuture_RunningState;

/*!
 @brief A future made up of a collection of sub-futures.
 */
@interface ComGoogleCommonUtilConcurrentAggregateFuture : ComGoogleCommonUtilConcurrentAbstractFuture_TrustedFuture

#pragma mark Protected

- (void)afterDone;

- (NSString *)pendingToString;

#pragma mark Package-Private

- (instancetype __nonnull)init;

/*!
 @brief Must be called at the end of each sub-class's constructor.
 */
- (void)init__WithComGoogleCommonUtilConcurrentAggregateFuture_RunningState:(ComGoogleCommonUtilConcurrentAggregateFuture_RunningState *)runningState OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentAggregateFuture)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentAggregateFuture_init(ComGoogleCommonUtilConcurrentAggregateFuture *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAggregateFuture)

#endif

#if !defined (ComGoogleCommonUtilConcurrentAggregateFuture_RunningState_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentAggregateFuture || defined(INCLUDE_ComGoogleCommonUtilConcurrentAggregateFuture_RunningState))
#define ComGoogleCommonUtilConcurrentAggregateFuture_RunningState_

#define RESTRICT_ComGoogleCommonUtilConcurrentAggregateFutureState 1
#define INCLUDE_ComGoogleCommonUtilConcurrentAggregateFutureState 1
#include "com/google/common/util/concurrent/AggregateFutureState.h"

#define RESTRICT_JavaLangRunnable 1
#define INCLUDE_JavaLangRunnable 1
#include "java/lang/Runnable.h"

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonUtilConcurrentAggregateFuture;
@protocol JavaUtilSet;

@interface ComGoogleCommonUtilConcurrentAggregateFuture_RunningState : ComGoogleCommonUtilConcurrentAggregateFutureState < JavaLangRunnable >

#pragma mark Public

- (void)run;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonUtilConcurrentAggregateFuture:(ComGoogleCommonUtilConcurrentAggregateFuture *)outer$
                                 withComGoogleCommonCollectImmutableCollection:(ComGoogleCommonCollectImmutableCollection *)futures
                                                                   withBoolean:(jboolean)allMustSucceed
                                                                   withBoolean:(jboolean)collectsValues;

- (void)addInitialExceptionWithJavaUtilSet:(id<JavaUtilSet>)seen;

/*!
 @brief Called only if <code>collectsValues</code> is true.
 <p>If <code>allMustSucceed</code> is true, called as each future completes; otherwise, called for
  each future when all futures complete.
 */
- (void)collectOneValueWithBoolean:(jboolean)allMustSucceed
                           withInt:(jint)index
                            withId:(id)returnValue;

- (void)handleAllCompleted;

- (void)interruptTask;

/*!
 @brief Listeners implicitly keep a reference to <code>RunningState</code> as they're inner classes, so we
  free resources here as well for the allMustSucceed=true case (i.e.when a future fails, we
  immediately release resources we no longer need); additionally, the future will release its
  reference to <code>RunningState</code>, which should free all associated memory when all the
  futures complete and the listeners are released.
 <p>TODO(user): Write tests for memory retention
 */
- (void)releaseResourcesAfterFailure;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentAggregateFuture_RunningState)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentAggregateFuture_RunningState_initWithComGoogleCommonUtilConcurrentAggregateFuture_withComGoogleCommonCollectImmutableCollection_withBoolean_withBoolean_(ComGoogleCommonUtilConcurrentAggregateFuture_RunningState *self, ComGoogleCommonUtilConcurrentAggregateFuture *outer$, ComGoogleCommonCollectImmutableCollection *futures, jboolean allMustSucceed, jboolean collectsValues);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAggregateFuture_RunningState)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAggregateFuture")
