//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/util/concurrent/AbstractListeningExecutorService.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractListeningExecutorService")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentAbstractListeningExecutorService
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractListeningExecutorService 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractListeningExecutorService 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentAbstractListeningExecutorService

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentAbstractListeningExecutorService_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractListeningExecutorService || defined(INCLUDE_ComGoogleCommonUtilConcurrentAbstractListeningExecutorService))
#define ComGoogleCommonUtilConcurrentAbstractListeningExecutorService_

#define RESTRICT_JavaUtilConcurrentAbstractExecutorService 1
#define INCLUDE_JavaUtilConcurrentAbstractExecutorService 1
#include "java/util/concurrent/AbstractExecutorService.h"

#define RESTRICT_ComGoogleCommonUtilConcurrentListeningExecutorService 1
#define INCLUDE_ComGoogleCommonUtilConcurrentListeningExecutorService 1
#include "com/google/common/util/concurrent/ListeningExecutorService.h"

@protocol ComGoogleCommonUtilConcurrentListenableFuture;
@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentCallable;
@protocol JavaUtilConcurrentRunnableFuture;

/*!
 @brief Abstract <code>ListeningExecutorService</code> implementation that creates <code>ListenableFuture</code>
  instances for each <code>Runnable</code> and <code>Callable</code> submitted to it.These tasks are run
  with the abstract <code>execute(Runnable)</code> method.
 <p>In addition to <code>execute</code>, subclasses must implement all methods related to shutdown and
  termination.
 @author Chris Povirk
 @since 14.0
 */
@interface ComGoogleCommonUtilConcurrentAbstractListeningExecutorService : JavaUtilConcurrentAbstractExecutorService < ComGoogleCommonUtilConcurrentListeningExecutorService >

#pragma mark Public

- (instancetype __nonnull)init;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)submitWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)task;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task
                                                                         withId:(id)result;

#pragma mark Protected

/*!
 @since 19.0 (present with return type <code>ListenableFutureTask</code> since 14.0)
 */
- (id<JavaUtilConcurrentRunnableFuture>)newTaskForWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)callable OBJC_METHOD_FAMILY_NONE;

/*!
 @since 19.0 (present with return type <code>ListenableFutureTask</code> since 14.0)
 */
- (id<JavaUtilConcurrentRunnableFuture>)newTaskForWithJavaLangRunnable:(id<JavaLangRunnable>)runnable
                                                                withId:(id)value OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentAbstractListeningExecutorService)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentAbstractListeningExecutorService_init(ComGoogleCommonUtilConcurrentAbstractListeningExecutorService *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAbstractListeningExecutorService)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractListeningExecutorService")