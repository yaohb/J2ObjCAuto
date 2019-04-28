//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/com/google/common/collect/ForwardingListIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingListIterator")
#ifdef RESTRICT_ComGoogleCommonCollectForwardingListIterator
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingListIterator 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingListIterator 1
#endif
#undef RESTRICT_ComGoogleCommonCollectForwardingListIterator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectForwardingListIterator_) && (INCLUDE_ALL_ComGoogleCommonCollectForwardingListIterator || defined(INCLUDE_ComGoogleCommonCollectForwardingListIterator))
#define ComGoogleCommonCollectForwardingListIterator_

#define RESTRICT_ComGoogleCommonCollectForwardingIterator 1
#define INCLUDE_ComGoogleCommonCollectForwardingIterator 1
#include "com/google/common/collect/ForwardingIterator.h"

#define RESTRICT_JavaUtilListIterator 1
#define INCLUDE_JavaUtilListIterator 1
#include "java/util/ListIterator.h"

/*!
 @brief A list iterator which forwards all its method calls to another list iterator.Subclasses should
  override one or more methods to modify the behavior of the backing iterator as desired per the <a href="http://en.wikipedia.org/wiki/Decorator_pattern">
 decorator pattern</a>.
 <p><b><code>default</code> method warning:</b> This class forwards calls to <i>only some</i> <code>default</code>
  methods. Specifically, it forwards calls only for methods that existed <a href="https://docs.oracle.com/javase/7/docs/api/java/util/ListIterator.html">
 before <code>default</code>
  methods were introduced</a>. For newer methods, like <code>forEachRemaining</code>, it
  inherits their default implementations. When those implementations invoke methods, they invoke
  methods on the <code>ForwardingListIterator</code>.
 @author Mike Bostock
 @since 2.0
 */
@interface ComGoogleCommonCollectForwardingListIterator : ComGoogleCommonCollectForwardingIterator < JavaUtilListIterator >

#pragma mark Public

- (void)addWithId:(id)element;

- (jboolean)hasPrevious;

- (jint)nextIndex;

- (id)previous;

- (jint)previousIndex;

- (void)setWithId:(id)element;

#pragma mark Protected

/*!
 @brief Constructor for use by subclasses.
 */
- (instancetype __nonnull)init;

- (id<JavaUtilListIterator>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingListIterator)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingListIterator_init(ComGoogleCommonCollectForwardingListIterator *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingListIterator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingListIterator")
