//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/com/google/common/collect/ForwardingConcurrentMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingConcurrentMap")
#ifdef RESTRICT_ComGoogleCommonCollectForwardingConcurrentMap
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingConcurrentMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingConcurrentMap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectForwardingConcurrentMap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectForwardingConcurrentMap_) && (INCLUDE_ALL_ComGoogleCommonCollectForwardingConcurrentMap || defined(INCLUDE_ComGoogleCommonCollectForwardingConcurrentMap))
#define ComGoogleCommonCollectForwardingConcurrentMap_

#define RESTRICT_ComGoogleCommonCollectForwardingMap 1
#define INCLUDE_ComGoogleCommonCollectForwardingMap 1
#include "com/google/common/collect/ForwardingMap.h"

#define RESTRICT_JavaUtilConcurrentConcurrentMap 1
#define INCLUDE_JavaUtilConcurrentConcurrentMap 1
#include "java/util/concurrent/ConcurrentMap.h"

@protocol JavaUtilFunctionBiConsumer;
@protocol JavaUtilFunctionBiFunction;
@protocol JavaUtilFunctionFunction;

/*!
 @brief A concurrent map which forwards all its method calls to another concurrent map.Subclasses should
  override one or more methods to modify the behavior of the backing map as desired per the <a href="http://en.wikipedia.org/wiki/Decorator_pattern">
 decorator pattern</a>.
 <p><b><code>default</code> method warning:</b> This class forwards calls to <i>only some</i> <code>default</code>
  methods. Specifically, it forwards calls only for methods that existed <a href="https://docs.oracle.com/javase/7/docs/api/java/util/concurrent/ConcurrentMap.html">
 before
  <code>default</code> methods were introduced</a>. For newer methods, like <code>forEach</code>, it inherits
  their default implementations. When those implementations invoke methods, they invoke methods on
  the <code>ForwardingConcurrentMap</code>.
 @author Charles Fry
 @since 2.0
 */
@interface ComGoogleCommonCollectForwardingConcurrentMap : ComGoogleCommonCollectForwardingMap < JavaUtilConcurrentConcurrentMap >

#pragma mark Public

- (id)putIfAbsentWithId:(id)key
                 withId:(id)value;

- (jboolean)removeWithId:(id)key
                  withId:(id)value;

- (id)replaceWithId:(id)key
             withId:(id)value;

- (jboolean)replaceWithId:(id)key
                   withId:(id)oldValue
                   withId:(id)newValue;

#pragma mark Protected

/*!
 @brief Constructor for use by subclasses.
 */
- (instancetype __nonnull)init;

- (id<JavaUtilConcurrentConcurrentMap>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingConcurrentMap)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingConcurrentMap_init(ComGoogleCommonCollectForwardingConcurrentMap *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingConcurrentMap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingConcurrentMap")
