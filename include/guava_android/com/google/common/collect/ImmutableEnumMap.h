//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/com/google/common/collect/ImmutableEnumMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableEnumMap")
#ifdef RESTRICT_ComGoogleCommonCollectImmutableEnumMap
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableEnumMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableEnumMap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectImmutableEnumMap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectImmutableEnumMap_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableEnumMap || defined(INCLUDE_ComGoogleCommonCollectImmutableEnumMap))
#define ComGoogleCommonCollectImmutableEnumMap_

#define RESTRICT_ComGoogleCommonCollectImmutableMap 1
#define INCLUDE_ComGoogleCommonCollectImmutableMap_IteratorBasedImmutableMap 1
#include "com/google/common/collect/ImmutableMap.h"

@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectUnmodifiableIterator;
@class JavaUtilEnumMap;

/*!
 @brief Implementation of <code>ImmutableMap</code> backed by a non-empty <code>java.util.EnumMap</code>.
 @author Louis Wasserman
 */
@interface ComGoogleCommonCollectImmutableEnumMap : ComGoogleCommonCollectImmutableMap_IteratorBasedImmutableMap

#pragma mark Public

- (jboolean)containsKeyWithId:(id)key;

- (jboolean)isEqual:(id)object;

- (id)getWithId:(id)key;

- (jint)size;

#pragma mark Package-Private

+ (ComGoogleCommonCollectImmutableMap *)asImmutableWithJavaUtilEnumMap:(JavaUtilEnumMap *)map;

- (ComGoogleCommonCollectUnmodifiableIterator *)entryIterator;

- (jboolean)isPartialView;

- (ComGoogleCommonCollectUnmodifiableIterator *)keyIterator;

- (id)writeReplace;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableEnumMap)

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCollectImmutableEnumMap_asImmutableWithJavaUtilEnumMap_(JavaUtilEnumMap *map);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableEnumMap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableEnumMap")
