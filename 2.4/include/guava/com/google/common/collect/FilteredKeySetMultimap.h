//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/FilteredKeySetMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectFilteredKeySetMultimap")
#ifdef RESTRICT_ComGoogleCommonCollectFilteredKeySetMultimap
#define INCLUDE_ALL_ComGoogleCommonCollectFilteredKeySetMultimap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectFilteredKeySetMultimap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectFilteredKeySetMultimap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectFilteredKeySetMultimap_) && (INCLUDE_ALL_ComGoogleCommonCollectFilteredKeySetMultimap || defined(INCLUDE_ComGoogleCommonCollectFilteredKeySetMultimap))
#define ComGoogleCommonCollectFilteredKeySetMultimap_

#define RESTRICT_ComGoogleCommonCollectFilteredKeyMultimap 1
#define INCLUDE_ComGoogleCommonCollectFilteredKeyMultimap 1
#include "com/google/common/collect/FilteredKeyMultimap.h"

#define RESTRICT_ComGoogleCommonCollectFilteredSetMultimap 1
#define INCLUDE_ComGoogleCommonCollectFilteredSetMultimap 1
#include "com/google/common/collect/FilteredSetMultimap.h"

@protocol ComGoogleCommonBasePredicate;
@protocol ComGoogleCommonCollectMultimap;
@protocol ComGoogleCommonCollectSetMultimap;
@protocol JavaLangIterable;
@protocol JavaUtilSet;

/*!
 @brief Implementation of <code>Multimaps.filterKeys(SetMultimap, Predicate)</code>.
 @author Louis Wasserman
 */
@interface ComGoogleCommonCollectFilteredKeySetMultimap : ComGoogleCommonCollectFilteredKeyMultimap < ComGoogleCommonCollectFilteredSetMultimap >

#pragma mark Public

- (id<JavaUtilSet>)entries;

- (id<JavaUtilSet>)getWithId:(id)key;

- (id<JavaUtilSet>)removeAllWithId:(id)key;

- (id<JavaUtilSet>)replaceValuesWithId:(id)key
                  withJavaLangIterable:(id<JavaLangIterable>)values;

- (id<ComGoogleCommonCollectSetMultimap>)unfiltered;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonCollectSetMultimap:(id<ComGoogleCommonCollectSetMultimap>)unfiltered
                                   withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)keyPredicate;

- (id<JavaUtilSet>)createEntries;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)arg0
                                withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectFilteredKeySetMultimap)

FOUNDATION_EXPORT void ComGoogleCommonCollectFilteredKeySetMultimap_initWithComGoogleCommonCollectSetMultimap_withComGoogleCommonBasePredicate_(ComGoogleCommonCollectFilteredKeySetMultimap *self, id<ComGoogleCommonCollectSetMultimap> unfiltered, id<ComGoogleCommonBasePredicate> keyPredicate);

FOUNDATION_EXPORT ComGoogleCommonCollectFilteredKeySetMultimap *new_ComGoogleCommonCollectFilteredKeySetMultimap_initWithComGoogleCommonCollectSetMultimap_withComGoogleCommonBasePredicate_(id<ComGoogleCommonCollectSetMultimap> unfiltered, id<ComGoogleCommonBasePredicate> keyPredicate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectFilteredKeySetMultimap *create_ComGoogleCommonCollectFilteredKeySetMultimap_initWithComGoogleCommonCollectSetMultimap_withComGoogleCommonBasePredicate_(id<ComGoogleCommonCollectSetMultimap> unfiltered, id<ComGoogleCommonBasePredicate> keyPredicate);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectFilteredKeySetMultimap)

#endif

#if !defined (ComGoogleCommonCollectFilteredKeySetMultimap_EntrySet_) && (INCLUDE_ALL_ComGoogleCommonCollectFilteredKeySetMultimap || defined(INCLUDE_ComGoogleCommonCollectFilteredKeySetMultimap_EntrySet))
#define ComGoogleCommonCollectFilteredKeySetMultimap_EntrySet_

#define RESTRICT_ComGoogleCommonCollectFilteredKeyMultimap 1
#define INCLUDE_ComGoogleCommonCollectFilteredKeyMultimap_Entries 1
#include "com/google/common/collect/FilteredKeyMultimap.h"

#define RESTRICT_JavaUtilSet 1
#define INCLUDE_JavaUtilSet 1
#include "java/util/Set.h"

@class ComGoogleCommonCollectFilteredKeySetMultimap;
@protocol JavaUtilSpliterator;

@interface ComGoogleCommonCollectFilteredKeySetMultimap_EntrySet : ComGoogleCommonCollectFilteredKeyMultimap_Entries < JavaUtilSet >

#pragma mark Public

- (jboolean)isEqual:(id __nullable)o;

- (NSUInteger)hash;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonCollectFilteredKeySetMultimap:(ComGoogleCommonCollectFilteredKeySetMultimap *)outer$;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithComGoogleCommonCollectFilteredKeyMultimap:(ComGoogleCommonCollectFilteredKeyMultimap *)outer$ NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectFilteredKeySetMultimap_EntrySet)

FOUNDATION_EXPORT void ComGoogleCommonCollectFilteredKeySetMultimap_EntrySet_initWithComGoogleCommonCollectFilteredKeySetMultimap_(ComGoogleCommonCollectFilteredKeySetMultimap_EntrySet *self, ComGoogleCommonCollectFilteredKeySetMultimap *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectFilteredKeySetMultimap_EntrySet *new_ComGoogleCommonCollectFilteredKeySetMultimap_EntrySet_initWithComGoogleCommonCollectFilteredKeySetMultimap_(ComGoogleCommonCollectFilteredKeySetMultimap *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectFilteredKeySetMultimap_EntrySet *create_ComGoogleCommonCollectFilteredKeySetMultimap_EntrySet_initWithComGoogleCommonCollectFilteredKeySetMultimap_(ComGoogleCommonCollectFilteredKeySetMultimap *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectFilteredKeySetMultimap_EntrySet)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectFilteredKeySetMultimap")
