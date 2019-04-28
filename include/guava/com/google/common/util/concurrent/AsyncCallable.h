//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/util/concurrent/AsyncCallable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAsyncCallable")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentAsyncCallable
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAsyncCallable 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAsyncCallable 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentAsyncCallable

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentAsyncCallable_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentAsyncCallable || defined(INCLUDE_ComGoogleCommonUtilConcurrentAsyncCallable))
#define ComGoogleCommonUtilConcurrentAsyncCallable_

@protocol ComGoogleCommonUtilConcurrentListenableFuture;

/*!
 @brief Computes a value, possibly asynchronously.For an example usage and more information, see <code>Futures.FutureCombiner.callAsync(AsyncCallable, java.util.concurrent.Executor)</code>
 .
 <p>Much like <code>java.util.concurrent.Callable</code>, but returning a <code>ListenableFuture</code>
  result.
 @since 20.0
 */
@protocol ComGoogleCommonUtilConcurrentAsyncCallable < JavaObject >

/*!
 @brief Computes a result <code>Future</code>.The output <code>Future</code> need not be done
 , making <code>AsyncCallable</code> suitable for asynchronous derivations.
 <p>Throwing an exception from this method is equivalent to returning a failing <code>ListenableFuture</code>
 .
 */
- (id<ComGoogleCommonUtilConcurrentListenableFuture>)call;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentAsyncCallable)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAsyncCallable)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAsyncCallable")
