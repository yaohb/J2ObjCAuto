//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/util/concurrent/FluentFuture.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentFluentFuture")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentFluentFuture
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentFluentFuture 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentFluentFuture 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentFluentFuture

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentFluentFuture_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentFluentFuture || defined(INCLUDE_ComGoogleCommonUtilConcurrentFluentFuture))
#define ComGoogleCommonUtilConcurrentFluentFuture_

#define RESTRICT_ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization 1
#define INCLUDE_ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization 1
#include "com/google/common/util/concurrent/GwtFluentFutureCatchingSpecialization.h"

@class IOSClass;
@class JavaUtilConcurrentTimeUnit;
@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonUtilConcurrentAsyncFunction;
@protocol ComGoogleCommonUtilConcurrentFutureCallback;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;
@protocol JavaUtilConcurrentExecutor;
@protocol JavaUtilConcurrentScheduledExecutorService;

/*!
 @brief A <code>ListenableFuture</code> that supports fluent chains of operations.For example: 
 @code
 ListenableFuture<Boolean> adminIsLoggedIn =
      FluentFuture.from(usersDatabase.getAdminUser())
          .transform(User::getId, directExecutor())
          .transform(ActivityService::isLoggedIn, threadPool)
          .catching(RpcException.class, e -> false, directExecutor()); 
 
@endcode
  
 <h3>Alternatives</h3>
  
 <h4>Frameworks</h4>
  
 <p>When chaining together a graph of asynchronous operations, you will often find it easier to
  use a framework.
 Frameworks automate the process, often adding features like monitoring,
  debugging, and cancellation. Examples of frameworks include: 
 <ul>
    <li><a href="http://google.github.io/dagger/producers.html">Dagger Producers</a>
  </ul>
  
 <h4><code>java.util.concurrent.CompletableFuture</code> / <code>java.util.concurrent.CompletionStage</code>
  </h4>
  
 <p>Users of <code>CompletableFuture</code> will likely want to continue using <code>CompletableFuture</code>
 . <code>FluentFuture</code> is targeted at people who use <code>ListenableFuture</code>,
  who can't use Java 8, or who want an API more focused than <code>CompletableFuture</code>. (If you
  need to adapt between <code>CompletableFuture</code> and <code>ListenableFuture</code>, consider <a href="https://github.com/lukas-krecan/future-converter">
 Future Converter</a>.)
  
 <h3>Extension</h3>
  If you want a class like <code>FluentFuture</code> but with extra methods, we recommend declaring your
  own subclass of <code>ListenableFuture</code>, complete with a method like <code>from</code> to adapt an
  existing <code>ListenableFuture</code>, implemented atop a <code>ForwardingListenableFuture</code> that
  forwards to that future and adds the desired methods.
 @since 23.0
 */
@interface ComGoogleCommonUtilConcurrentFluentFuture : ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization

#pragma mark Public

/*!
 @brief Registers separate success and failure callbacks to be run when this <code>Future</code>'s
  computation is complete or, if the
  computation is already complete, immediately.
 <p>The callback is run on <code>executor</code>. There is no guaranteed ordering of execution of
  callbacks, but any callback added through this method is guaranteed to be called once the
  computation is complete. 
 <p>Example:
  
 @code
 future.addCallback(
      new FutureCallback<QueryResult>() {
        public void onSuccess(QueryResult result) {
          storeInCache(result);
        }
        public void onFailure(Throwable t) {
          reportError(t);
        }
      }, executor); 
 
@endcode
  
 <p>When selecting an executor, note that <code>directExecutor</code> is dangerous in some cases. See
  the discussion in the <code>addListener</code> documentation. All its warnings about heavyweight
  listeners are also applicable to heavyweight callbacks passed to this method. 
 <p>For a more general interface to attach a completion listener, see <code>addListener</code>.
  
 <p>This method is similar to <code>java.util.concurrent.CompletableFuture.whenComplete</code> and 
 <code>java.util.concurrent.CompletableFuture.whenCompleteAsync</code>. It also serves the use case
  of <code>java.util.concurrent.CompletableFuture.thenAccept</code> and <code>java.util.concurrent.CompletableFuture.thenAcceptAsync</code>
 .
 @param callback The callback to invoke when this <code>Future</code>  is completed.
 @param executor The executor to run <code>callback</code>  when the future completes.
 */
- (void)addCallbackWithComGoogleCommonUtilConcurrentFutureCallback:(id<ComGoogleCommonUtilConcurrentFutureCallback>)callback
                                    withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

/*!
 @brief Returns a <code>Future</code> whose result is taken from this <code>Future</code> or, if this <code>Future</code>
  fails with the given <code>exceptionType</code>, from the result provided by the <code>fallback</code>
 .
 <code>Function.apply</code> is not invoked until the primary input has failed, so if the
  primary input succeeds, it is never invoked. If, during the invocation of <code>fallback</code>, an
  exception is thrown, this exception is used as the result of the output <code>Future</code>.
  
 <p>Usage example: 
 @code
 // Falling back to a zero counter in case an exception happens when processing the RPC to fetch
  // counters.
  ListenableFuture<Integer> faultTolerantFuture =
      fetchCounters().catching(FetchException.class, x -> 0, directExecutor()); 
 
@endcode
  
 <p>When selecting an executor, note that <code>directExecutor</code> is dangerous in some cases. See
  the discussion in the <code>addListener</code> documentation. All its warnings about heavyweight
  listeners are also applicable to heavyweight functions passed to this method. 
 <p>This method is similar to <code>java.util.concurrent.CompletableFuture.exceptionally</code>. It
  can also serve some of the use cases of <code>java.util.concurrent.CompletableFuture.handle</code>
  and <code>java.util.concurrent.CompletableFuture.handleAsync</code> when used along with <code>transform</code>
 .
 @param exceptionType the exception type that triggers use of <code>fallback</code> . The exception
       type is matched against the input's exception. "The input's exception" means the cause of      the 
 <code>ExecutionException</code>  thrown by <code>input.get()</code>  or, if <code>get()</code>  throws a      different kind of exception, that exception itself. To avoid hiding bugs and other
       unrecoverable errors, callers should prefer more specific types, avoiding 
 <code>Throwable.class</code>
   in particular.
 @param fallback the <code>Function</code>  to be called if the input fails with the expected
       exception type. The function's argument is the input's exception. "The input's exception"      means the cause of the 
 <code>ExecutionException</code>  thrown by <code>this.get()</code>  or, if      
 <code>get()</code>  throws a different kind of exception, that exception itself.
 @param executor the executor that runs <code>fallback</code>  if the input fails
 */
- (ComGoogleCommonUtilConcurrentFluentFuture *)catchingWithIOSClass:(IOSClass *)exceptionType
                                    withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)fallback
                                     withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

/*!
 @brief Returns a <code>Future</code> whose result is taken from this <code>Future</code> or, if this <code>Future</code>
  fails with the given <code>exceptionType</code>, from the result provided by the <code>fallback</code>
 .
 <code>AsyncFunction.apply</code> is not invoked until the primary input has failed, so if
  the primary input succeeds, it is never invoked. If, during the invocation of <code>fallback</code>,
  an exception is thrown, this exception is used as the result of the output <code>Future</code>.
  
 <p>Usage examples: 
 @code
 // Falling back to a zero counter in case an exception happens when processing the RPC to fetch
  // counters.
  ListenableFuture<Integer> faultTolerantFuture =
      fetchCounters().catchingAsync(
          FetchException.class, x -> immediateFuture(0), directExecutor()); 
 
@endcode
  
 <p>The fallback can also choose to propagate the original exception when desired: 
 @code
 // Falling back to a zero counter only in case the exception was a
  // TimeoutException.
  ListenableFuture<Integer> faultTolerantFuture =
      fetchCounters().catchingAsync(
          FetchException.class,
          e -> {
            if (omitDataOnFetchFailure) {
              return immediateFuture(0);
            }
            throw e;
          },
          directExecutor()); 
 
@endcode
  
 <p>When selecting an executor, note that <code>directExecutor</code> is dangerous in some cases. See
  the discussion in the <code>addListener</code> documentation. All its warnings about heavyweight
  listeners are also applicable to heavyweight functions passed to this method. (Specifically, 
 <code>directExecutor</code> functions should avoid heavyweight operations inside <code>AsyncFunction.apply</code>
 . Any heavyweight operations should occur in other threads responsible for
  completing the returned <code>Future</code>.)
  
 <p>This method is similar to <code>java.util.concurrent.CompletableFuture.exceptionally</code>. It
  can also serve some of the use cases of <code>java.util.concurrent.CompletableFuture.handle</code>
  and <code>java.util.concurrent.CompletableFuture.handleAsync</code> when used along with <code>transform</code>
 .
 @param exceptionType the exception type that triggers use of <code>fallback</code> . The exception
       type is matched against the input's exception. "The input's exception" means the cause of      the 
 <code>ExecutionException</code>  thrown by <code>this.get()</code>  or, if <code>get()</code>  throws a      different kind of exception, that exception itself. To avoid hiding bugs and other
       unrecoverable errors, callers should prefer more specific types, avoiding 
 <code>Throwable.class</code>
   in particular.
 @param fallback the <code>AsyncFunction</code>  to be called if the input fails with the expected
       exception type. The function's argument is the input's exception. "The input's exception"      means the cause of the 
 <code>ExecutionException</code>  thrown by <code>input.get()</code>  or, if      
 <code>get()</code>  throws a different kind of exception, that exception itself.
 @param executor the executor that runs <code>fallback</code>  if the input fails
 */
- (ComGoogleCommonUtilConcurrentFluentFuture *)catchingAsyncWithIOSClass:(IOSClass *)exceptionType
                          withComGoogleCommonUtilConcurrentAsyncFunction:(id<ComGoogleCommonUtilConcurrentAsyncFunction>)fallback
                                          withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

/*!
 @brief Converts the given <code>ListenableFuture</code> to an equivalent <code>FluentFuture</code>.
 <p>If the given <code>ListenableFuture</code> is already a <code>FluentFuture</code>, it is returned
  directly. If not, it is wrapped in a <code>FluentFuture</code> that delegates all calls to the
  original <code>ListenableFuture</code>.
 */
+ (ComGoogleCommonUtilConcurrentFluentFuture *)fromWithComGoogleCommonUtilConcurrentListenableFuture:(id<ComGoogleCommonUtilConcurrentListenableFuture>)future;

/*!
 @brief Returns a new <code>Future</code> whose result is derived from the result of this <code>Future</code>.If
  this input <code>Future</code> fails, the returned <code>Future</code> fails with the same exception (and
  the function is not invoked).
 Example usage: 
 @code
 ListenableFuture<List<Row>> rowsFuture =
      queryFuture.transform(QueryResult::getRows, executor); 
 
@endcode
  
 <p>When selecting an executor, note that <code>directExecutor</code> is dangerous in some cases. See
  the discussion in the <code>addListener</code> documentation. All its warnings about heavyweight
  listeners are also applicable to heavyweight functions passed to this method. 
 <p>The returned <code>Future</code> attempts to keep its cancellation state in sync with that of the
  input future. That is, if the returned <code>Future</code> is cancelled, it will attempt to cancel
  the input, and if the input is cancelled, the returned <code>Future</code> will receive a callback
  in which it will attempt to cancel itself. 
 <p>An example use of this method is to convert a serializable object returned from an RPC into
  a POJO. 
 <p>This method is similar to <code>java.util.concurrent.CompletableFuture.thenApply</code> and 
 <code>java.util.concurrent.CompletableFuture.thenApplyAsync</code>. It can also serve some of the
  use cases of <code>java.util.concurrent.CompletableFuture.handle</code> and <code>java.util.concurrent.CompletableFuture.handleAsync</code>
  when used along with <code>catching</code>.
 @param function A Function to transform the results of this future to the results of the      returned future.
 @param executor Executor to run the function in.
 @return A future that holds result of the transformation.
 */
- (ComGoogleCommonUtilConcurrentFluentFuture *)transformWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function
                                                         withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

/*!
 @brief Returns a new <code>Future</code> whose result is asynchronously derived from the result of this 
 <code>Future</code>.If the input <code>Future</code> fails, the returned <code>Future</code> fails with the
  same exception (and the function is not invoked).
 <p>More precisely, the returned <code>Future</code> takes its result from a <code>Future</code> produced
  by applying the given <code>AsyncFunction</code> to the result of the original <code>Future</code>.
  Example usage: 
 @code
 FluentFuture<RowKey> rowKeyFuture = FluentFuture.from(indexService.lookUp(query));
  ListenableFuture<QueryResult> queryFuture =
      rowKeyFuture.transformAsync(dataService::readFuture, executor); 
 
@endcode
  
 <p>When selecting an executor, note that <code>directExecutor</code> is dangerous in some cases. See
  the discussion in the <code>addListener</code> documentation. All its warnings about heavyweight
  listeners are also applicable to heavyweight functions passed to this method. (Specifically, 
 <code>directExecutor</code> functions should avoid heavyweight operations inside <code>AsyncFunction.apply</code>
 . Any heavyweight operations should occur in other threads responsible for
  completing the returned <code>Future</code>.)
  
 <p>The returned <code>Future</code> attempts to keep its cancellation state in sync with that of the
  input future and that of the future returned by the chain function. That is, if the returned 
 <code>Future</code> is cancelled, it will attempt to cancel the other two, and if either of the
  other two is cancelled, the returned <code>Future</code> will receive a callback in which it will
  attempt to cancel itself. 
 <p>This method is similar to <code>java.util.concurrent.CompletableFuture.thenCompose</code> and 
 <code>java.util.concurrent.CompletableFuture.thenComposeAsync</code>. It can also serve some of the
  use cases of <code>java.util.concurrent.CompletableFuture.handle</code> and <code>java.util.concurrent.CompletableFuture.handleAsync</code>
  when used along with <code>catching</code>.
 @param function A function to transform the result of this future to the result of the output      future
 @param executor Executor to run the function in.
 @return A future that holds result of the function (if the input succeeded) or the original
      input's failure (if not)
 */
- (ComGoogleCommonUtilConcurrentFluentFuture *)transformAsyncWithComGoogleCommonUtilConcurrentAsyncFunction:(id<ComGoogleCommonUtilConcurrentAsyncFunction>)function
                                                                             withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

/*!
 @brief Returns a future that delegates to this future but will finish early (via a <code>TimeoutException</code>
  wrapped in an <code>ExecutionException</code>) if the specified timeout expires.
 If the timeout expires, not only will the output future finish, but also the input future
  (<code>this</code>) will be cancelled and interrupted.
 @param timeout when to time out the future
 @param unit the time unit of the time parameter
 @param scheduledExecutor The executor service to enforce the timeout.
 */
- (ComGoogleCommonUtilConcurrentFluentFuture *)withTimeoutWithLong:(jlong)timeout
                                    withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit
                    withJavaUtilConcurrentScheduledExecutorService:(id<JavaUtilConcurrentScheduledExecutorService>)scheduledExecutor;

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentFluentFuture)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentFluentFuture_init(ComGoogleCommonUtilConcurrentFluentFuture *self);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentFluentFuture *ComGoogleCommonUtilConcurrentFluentFuture_fromWithComGoogleCommonUtilConcurrentListenableFuture_(id<ComGoogleCommonUtilConcurrentListenableFuture> future);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentFluentFuture)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentFluentFuture")
