//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/com/google/common/collect/IndexedImmutableSet.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectIndexedImmutableSet")
#ifdef RESTRICT_ComGoogleCommonCollectIndexedImmutableSet
#define INCLUDE_ALL_ComGoogleCommonCollectIndexedImmutableSet 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectIndexedImmutableSet 1
#endif
#undef RESTRICT_ComGoogleCommonCollectIndexedImmutableSet

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectIndexedImmutableSet_) && (INCLUDE_ALL_ComGoogleCommonCollectIndexedImmutableSet || defined(INCLUDE_ComGoogleCommonCollectIndexedImmutableSet))
#define ComGoogleCommonCollectIndexedImmutableSet_

#define RESTRICT_ComGoogleCommonCollectImmutableSet 1
#define INCLUDE_ComGoogleCommonCollectImmutableSet 1
#include "com/google/common/collect/ImmutableSet.h"

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectUnmodifiableIterator;
@class IOSObjectArray;

@interface ComGoogleCommonCollectIndexedImmutableSet : ComGoogleCommonCollectImmutableSet

#pragma mark Public

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

#pragma mark Package-Private

- (instancetype __nonnull)init;

- (jint)copyIntoArrayWithNSObjectArray:(IOSObjectArray *)dst
                               withInt:(jint)offset OBJC_METHOD_FAMILY_NONE;

- (ComGoogleCommonCollectImmutableList *)createAsList;

- (id)getWithInt:(jint)index;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectIndexedImmutableSet)

FOUNDATION_EXPORT void ComGoogleCommonCollectIndexedImmutableSet_init(ComGoogleCommonCollectIndexedImmutableSet *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectIndexedImmutableSet)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectIndexedImmutableSet")
