//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/FilteredEntryMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectFilteredEntryMultimap")
#ifdef RESTRICT_ComGoogleCommonCollectFilteredEntryMultimap
#define INCLUDE_ALL_ComGoogleCommonCollectFilteredEntryMultimap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectFilteredEntryMultimap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectFilteredEntryMultimap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectFilteredEntryMultimap_) && (INCLUDE_ALL_ComGoogleCommonCollectFilteredEntryMultimap || defined(INCLUDE_ComGoogleCommonCollectFilteredEntryMultimap))
#define ComGoogleCommonCollectFilteredEntryMultimap_

#define RESTRICT_ComGoogleCommonCollectAbstractMultimap 1
#define INCLUDE_ComGoogleCommonCollectAbstractMultimap 1
#include "com/google/common/collect/AbstractMultimap.h"

#define RESTRICT_ComGoogleCommonCollectFilteredMultimap 1
#define INCLUDE_ComGoogleCommonCollectFilteredMultimap 1
#include "com/google/common/collect/FilteredMultimap.h"

@protocol ComGoogleCommonBasePredicate;
@protocol ComGoogleCommonCollectMultimap;
@protocol ComGoogleCommonCollectMultiset;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

/*!
 @brief Implementation of <code>Multimaps.filterEntries(Multimap, Predicate)</code>.
 @author Jared Levy
 @author Louis Wasserman
 */
@interface ComGoogleCommonCollectFilteredEntryMultimap : ComGoogleCommonCollectAbstractMultimap < ComGoogleCommonCollectFilteredMultimap > {
 @public
  id<ComGoogleCommonCollectMultimap> unfiltered_;
  id<ComGoogleCommonBasePredicate> predicate_;
}

#pragma mark Public

- (void)clear;

- (jboolean)containsKeyWithId:(id __nullable)key;

- (id<ComGoogleCommonBasePredicate>)entryPredicate;

- (id<JavaUtilCollection>)getWithId:(id)key;

- (id<JavaUtilCollection>)removeAllWithId:(id __nullable)key;

- (jint)size;

- (id<ComGoogleCommonCollectMultimap>)unfiltered;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)unfiltered
                                withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

- (id<JavaUtilMap>)createAsMap;

- (id<JavaUtilCollection>)createEntries;

- (id<ComGoogleCommonCollectMultiset>)createKeys;

- (id<JavaUtilSet>)createKeySet;

- (id<JavaUtilCollection>)createValues;

- (id<JavaUtilIterator>)entryIterator;

+ (id<JavaUtilCollection>)filterCollectionWithJavaUtilCollection:(id<JavaUtilCollection>)collection
                                withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

- (jboolean)removeEntriesIfWithComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

- (id<JavaUtilCollection>)unmodifiableEmptyCollection;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectFilteredEntryMultimap)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectFilteredEntryMultimap, unfiltered_, id<ComGoogleCommonCollectMultimap>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectFilteredEntryMultimap, predicate_, id<ComGoogleCommonBasePredicate>)

FOUNDATION_EXPORT void ComGoogleCommonCollectFilteredEntryMultimap_initWithComGoogleCommonCollectMultimap_withComGoogleCommonBasePredicate_(ComGoogleCommonCollectFilteredEntryMultimap *self, id<ComGoogleCommonCollectMultimap> unfiltered, id<ComGoogleCommonBasePredicate> predicate);

FOUNDATION_EXPORT ComGoogleCommonCollectFilteredEntryMultimap *new_ComGoogleCommonCollectFilteredEntryMultimap_initWithComGoogleCommonCollectMultimap_withComGoogleCommonBasePredicate_(id<ComGoogleCommonCollectMultimap> unfiltered, id<ComGoogleCommonBasePredicate> predicate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectFilteredEntryMultimap *create_ComGoogleCommonCollectFilteredEntryMultimap_initWithComGoogleCommonCollectMultimap_withComGoogleCommonBasePredicate_(id<ComGoogleCommonCollectMultimap> unfiltered, id<ComGoogleCommonBasePredicate> predicate);

FOUNDATION_EXPORT id<JavaUtilCollection> ComGoogleCommonCollectFilteredEntryMultimap_filterCollectionWithJavaUtilCollection_withComGoogleCommonBasePredicate_(id<JavaUtilCollection> collection, id<ComGoogleCommonBasePredicate> predicate);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectFilteredEntryMultimap)

#endif

#if !defined (ComGoogleCommonCollectFilteredEntryMultimap_ValuePredicate_) && (INCLUDE_ALL_ComGoogleCommonCollectFilteredEntryMultimap || defined(INCLUDE_ComGoogleCommonCollectFilteredEntryMultimap_ValuePredicate))
#define ComGoogleCommonCollectFilteredEntryMultimap_ValuePredicate_

#define RESTRICT_ComGoogleCommonBasePredicate 1
#define INCLUDE_ComGoogleCommonBasePredicate 1
#include "com/google/common/base/Predicate.h"

@class ComGoogleCommonCollectFilteredEntryMultimap;
@protocol JavaUtilFunctionPredicate;

@interface ComGoogleCommonCollectFilteredEntryMultimap_ValuePredicate : NSObject < ComGoogleCommonBasePredicate >

#pragma mark Public

- (jboolean)applyWithId:(id)value;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonCollectFilteredEntryMultimap:(ComGoogleCommonCollectFilteredEntryMultimap *)outer$
                                                                       withId:(id)key;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectFilteredEntryMultimap_ValuePredicate)

FOUNDATION_EXPORT void ComGoogleCommonCollectFilteredEntryMultimap_ValuePredicate_initWithComGoogleCommonCollectFilteredEntryMultimap_withId_(ComGoogleCommonCollectFilteredEntryMultimap_ValuePredicate *self, ComGoogleCommonCollectFilteredEntryMultimap *outer$, id key);

FOUNDATION_EXPORT ComGoogleCommonCollectFilteredEntryMultimap_ValuePredicate *new_ComGoogleCommonCollectFilteredEntryMultimap_ValuePredicate_initWithComGoogleCommonCollectFilteredEntryMultimap_withId_(ComGoogleCommonCollectFilteredEntryMultimap *outer$, id key) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectFilteredEntryMultimap_ValuePredicate *create_ComGoogleCommonCollectFilteredEntryMultimap_ValuePredicate_initWithComGoogleCommonCollectFilteredEntryMultimap_withId_(ComGoogleCommonCollectFilteredEntryMultimap *outer$, id key);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectFilteredEntryMultimap_ValuePredicate)

#endif

#if !defined (ComGoogleCommonCollectFilteredEntryMultimap_AsMap_) && (INCLUDE_ALL_ComGoogleCommonCollectFilteredEntryMultimap || defined(INCLUDE_ComGoogleCommonCollectFilteredEntryMultimap_AsMap))
#define ComGoogleCommonCollectFilteredEntryMultimap_AsMap_

#define RESTRICT_ComGoogleCommonCollectMaps 1
#define INCLUDE_ComGoogleCommonCollectMaps_ViewCachingAbstractMap 1
#include "com/google/common/collect/Maps.h"

@class ComGoogleCommonCollectFilteredEntryMultimap;
@protocol JavaUtilCollection;
@protocol JavaUtilFunctionBiFunction;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectFilteredEntryMultimap_AsMap : ComGoogleCommonCollectMaps_ViewCachingAbstractMap

#pragma mark Public

- (void)clear;

- (id<JavaUtilCollection>)computeIfAbsentWithId:(id)arg0
                   withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)arg1;

- (id<JavaUtilCollection>)computeIfPresentWithId:(id)arg0
                  withJavaUtilFunctionBiFunction:(id<JavaUtilFunctionBiFunction>)arg1;

- (id<JavaUtilCollection>)computeWithId:(id)arg0
         withJavaUtilFunctionBiFunction:(id<JavaUtilFunctionBiFunction>)arg1;

- (jboolean)containsKeyWithId:(id __nullable)key;

- (id<JavaUtilCollection>)getWithId:(id __nullable)key;

- (id<JavaUtilCollection>)getOrDefaultWithId:(id)arg0
                                      withId:(id<JavaUtilCollection>)arg1;

- (id<JavaUtilCollection>)mergeWithId:(id)arg0
                               withId:(id<JavaUtilCollection>)arg1
       withJavaUtilFunctionBiFunction:(id<JavaUtilFunctionBiFunction>)arg2;

- (id<JavaUtilCollection>)putIfAbsentWithId:(id)arg0
                                     withId:(id<JavaUtilCollection>)arg1;

- (id<JavaUtilCollection>)putWithId:(id)arg0
                             withId:(id<JavaUtilCollection>)arg1;

- (id<JavaUtilCollection>)removeWithId:(id __nullable)key;

- (id<JavaUtilCollection>)replaceWithId:(id)arg0
                                 withId:(id<JavaUtilCollection>)arg1;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonCollectFilteredEntryMultimap:(ComGoogleCommonCollectFilteredEntryMultimap *)outer$;

- (id<JavaUtilSet>)createEntrySet;

- (id<JavaUtilSet>)createKeySet;

- (id<JavaUtilCollection>)createValues;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectFilteredEntryMultimap_AsMap)

FOUNDATION_EXPORT void ComGoogleCommonCollectFilteredEntryMultimap_AsMap_initWithComGoogleCommonCollectFilteredEntryMultimap_(ComGoogleCommonCollectFilteredEntryMultimap_AsMap *self, ComGoogleCommonCollectFilteredEntryMultimap *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectFilteredEntryMultimap_AsMap *new_ComGoogleCommonCollectFilteredEntryMultimap_AsMap_initWithComGoogleCommonCollectFilteredEntryMultimap_(ComGoogleCommonCollectFilteredEntryMultimap *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectFilteredEntryMultimap_AsMap *create_ComGoogleCommonCollectFilteredEntryMultimap_AsMap_initWithComGoogleCommonCollectFilteredEntryMultimap_(ComGoogleCommonCollectFilteredEntryMultimap *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectFilteredEntryMultimap_AsMap)

#endif

#if !defined (ComGoogleCommonCollectFilteredEntryMultimap_Keys_) && (INCLUDE_ALL_ComGoogleCommonCollectFilteredEntryMultimap || defined(INCLUDE_ComGoogleCommonCollectFilteredEntryMultimap_Keys))
#define ComGoogleCommonCollectFilteredEntryMultimap_Keys_

#define RESTRICT_ComGoogleCommonCollectMultimaps 1
#define INCLUDE_ComGoogleCommonCollectMultimaps_Keys 1
#include "com/google/common/collect/Multimaps.h"

@class ComGoogleCommonCollectFilteredEntryMultimap;
@protocol ComGoogleCommonCollectMultimap;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectFilteredEntryMultimap_Keys : ComGoogleCommonCollectMultimaps_Keys

#pragma mark Public

- (id<JavaUtilSet>)entrySet;

- (jint)removeWithId:(id __nullable)key
             withInt:(jint)occurrences;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonCollectFilteredEntryMultimap:(ComGoogleCommonCollectFilteredEntryMultimap *)outer$;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectFilteredEntryMultimap_Keys)

FOUNDATION_EXPORT void ComGoogleCommonCollectFilteredEntryMultimap_Keys_initWithComGoogleCommonCollectFilteredEntryMultimap_(ComGoogleCommonCollectFilteredEntryMultimap_Keys *self, ComGoogleCommonCollectFilteredEntryMultimap *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectFilteredEntryMultimap_Keys *new_ComGoogleCommonCollectFilteredEntryMultimap_Keys_initWithComGoogleCommonCollectFilteredEntryMultimap_(ComGoogleCommonCollectFilteredEntryMultimap *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectFilteredEntryMultimap_Keys *create_ComGoogleCommonCollectFilteredEntryMultimap_Keys_initWithComGoogleCommonCollectFilteredEntryMultimap_(ComGoogleCommonCollectFilteredEntryMultimap *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectFilteredEntryMultimap_Keys)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectFilteredEntryMultimap")
