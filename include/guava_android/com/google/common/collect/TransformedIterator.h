//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/com/google/common/collect/TransformedIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectTransformedIterator")
#ifdef RESTRICT_ComGoogleCommonCollectTransformedIterator
#define INCLUDE_ALL_ComGoogleCommonCollectTransformedIterator 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectTransformedIterator 1
#endif
#undef RESTRICT_ComGoogleCommonCollectTransformedIterator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectTransformedIterator_) && (INCLUDE_ALL_ComGoogleCommonCollectTransformedIterator || defined(INCLUDE_ComGoogleCommonCollectTransformedIterator))
#define ComGoogleCommonCollectTransformedIterator_

#define RESTRICT_JavaUtilIterator 1
#define INCLUDE_JavaUtilIterator 1
#include "java/util/Iterator.h"

@protocol JavaUtilFunctionConsumer;

/*!
 @brief An iterator that transforms a backing iterator; for internal use.This avoids the object overhead
  of constructing a <code>Function</code> for internal methods.
 @author Louis Wasserman
 */
@interface ComGoogleCommonCollectTransformedIterator : NSObject < JavaUtilIterator > {
 @public
  id<JavaUtilIterator> backingIterator_;
}

#pragma mark Public

- (jboolean)hasNext;

- (id)next;

- (void)remove;

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaUtilIterator:(id<JavaUtilIterator>)backingIterator;

- (id)transformWithId:(id)from;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTransformedIterator)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectTransformedIterator, backingIterator_, id<JavaUtilIterator>)

FOUNDATION_EXPORT void ComGoogleCommonCollectTransformedIterator_initWithJavaUtilIterator_(ComGoogleCommonCollectTransformedIterator *self, id<JavaUtilIterator> backingIterator);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTransformedIterator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectTransformedIterator")
