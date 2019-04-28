//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/com/google/common/collect/HashBiMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectHashBiMap")
#ifdef RESTRICT_ComGoogleCommonCollectHashBiMap
#define INCLUDE_ALL_ComGoogleCommonCollectHashBiMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectHashBiMap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectHashBiMap
#ifdef INCLUDE_ComGoogleCommonCollectHashBiMap_InverseEntrySet
#define INCLUDE_ComGoogleCommonCollectHashBiMap_View 1
#endif
#ifdef INCLUDE_ComGoogleCommonCollectHashBiMap_EntrySet
#define INCLUDE_ComGoogleCommonCollectHashBiMap_View 1
#endif
#ifdef INCLUDE_ComGoogleCommonCollectHashBiMap_ValueSet
#define INCLUDE_ComGoogleCommonCollectHashBiMap_View 1
#endif
#ifdef INCLUDE_ComGoogleCommonCollectHashBiMap_KeySet
#define INCLUDE_ComGoogleCommonCollectHashBiMap_View 1
#endif

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectHashBiMap_) && (INCLUDE_ALL_ComGoogleCommonCollectHashBiMap || defined(INCLUDE_ComGoogleCommonCollectHashBiMap))
#define ComGoogleCommonCollectHashBiMap_

#define RESTRICT_JavaUtilAbstractMap 1
#define INCLUDE_JavaUtilAbstractMap 1
#include "java/util/AbstractMap.h"

#define RESTRICT_ComGoogleCommonCollectBiMap 1
#define INCLUDE_ComGoogleCommonCollectBiMap 1
#include "com/google/common/collect/BiMap.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSIntArray;
@class IOSObjectArray;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

/*!
 @brief A <code>BiMap</code> backed by two hash tables.This implementation allows null keys and values.
 A 
 <code>HashBiMap</code> and its inverse are both serializable. 
 <p>This implementation guarantees insertion-based iteration order of its keys. 
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/NewCollectionTypesExplained#bimap">
  <code>BiMap</code> </a>.
 @author Louis Wasserman
 @author Mike Bostock
 @since 2.0
 */
@interface ComGoogleCommonCollectHashBiMap : JavaUtilAbstractMap < ComGoogleCommonCollectBiMap, JavaIoSerializable > {
 @public
  /*!
   @brief Maps an "entry" to the key of that entry.
   */
  IOSObjectArray *keys_;
  /*!
   @brief Maps an "entry" to the value of that entry.
   */
  IOSObjectArray *values_HashBiMap_;
  jint size_;
  jint modCount_;
}

#pragma mark Public

- (void)clear;

- (jboolean)containsKeyWithId:(id)key;

- (jboolean)containsValueWithId:(id)value;

/*!
 @brief Returns a new, empty <code>HashBiMap</code> with the default initial capacity (16).
 */
+ (ComGoogleCommonCollectHashBiMap *)create;

/*!
 @brief Constructs a new, empty bimap with the specified expected size.
 @param expectedSize the expected number of entries
 @throw IllegalArgumentExceptionif the specified expected size is negative
 */
+ (ComGoogleCommonCollectHashBiMap *)createWithInt:(jint)expectedSize;

/*!
 @brief Constructs a new bimap containing initial values from <code>map</code>.The bimap is created with an
  initial capacity sufficient to hold the mappings in the specified map.
 */
+ (ComGoogleCommonCollectHashBiMap *)createWithJavaUtilMap:(id<JavaUtilMap>)map;

- (id<JavaUtilSet>)entrySet;

- (id)forcePutWithId:(id)key
              withId:(id)value;

- (id)getWithId:(id)key;

- (id<ComGoogleCommonCollectBiMap>)inverse;

- (id<JavaUtilSet>)keySet;

- (id)putWithId:(id)key
         withId:(id)value;

- (id)removeWithId:(id)key;

- (jint)size;

- (id<JavaUtilSet>)values;

#pragma mark Package-Private

- (jint)findEntryWithId:(id)o
                withInt:(jint)oHash
           withIntArray:(IOSIntArray *)hashTable
           withIntArray:(IOSIntArray *)nextInBucket
      withNSObjectArray:(IOSObjectArray *)array;

/*!
 @brief Given a key, returns the index of the entry in the tables, or ABSENT if not found.
 */
- (jint)findEntryByKeyWithId:(id)key;

/*!
 @brief Given a key and its hash, returns the index of the entry in the tables, or ABSENT if not found.
 */
- (jint)findEntryByKeyWithId:(id)key
                     withInt:(jint)keyHash;

/*!
 @brief Given a value, returns the index of the entry in the tables, or ABSENT if not found.
 */
- (jint)findEntryByValueWithId:(id)value;

/*!
 @brief Given a value and its hash, returns the index of the entry in the tables, or ABSENT if not
  found.
 */
- (jint)findEntryByValueWithId:(id)value
                       withInt:(jint)valueHash;

- (id)getInverseWithId:(id)value;

- (void)init__WithInt:(jint)expectedSize OBJC_METHOD_FAMILY_NONE;

- (id)putWithId:(id)key
         withId:(id)value
    withBoolean:(jboolean)force;

- (id)putInverseWithId:(id)value
                withId:(id)key
           withBoolean:(jboolean)force;

/*!
 @brief Removes the entry at the specified index with no additional data.
 */
- (void)removeEntryWithInt:(jint)entry_;

/*!
 @brief Removes the entry at the specified index, given the hash of its key.
 */
- (void)removeEntryKeyHashKnownWithInt:(jint)entry_
                               withInt:(jint)keyHash;

/*!
 @brief Removes the entry at the specified index, given the hash of its value.
 */
- (void)removeEntryValueHashKnownWithInt:(jint)entry_
                                 withInt:(jint)valueHash;

- (id)removeInverseWithId:(id)value;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectHashBiMap)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectHashBiMap, keys_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectHashBiMap, values_HashBiMap_, IOSObjectArray *)

FOUNDATION_EXPORT ComGoogleCommonCollectHashBiMap *ComGoogleCommonCollectHashBiMap_create(void);

FOUNDATION_EXPORT ComGoogleCommonCollectHashBiMap *ComGoogleCommonCollectHashBiMap_createWithInt_(jint expectedSize);

FOUNDATION_EXPORT ComGoogleCommonCollectHashBiMap *ComGoogleCommonCollectHashBiMap_createWithJavaUtilMap_(id<JavaUtilMap> map);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectHashBiMap)

#endif

#if !defined (ComGoogleCommonCollectHashBiMap_View_) && (INCLUDE_ALL_ComGoogleCommonCollectHashBiMap || defined(INCLUDE_ComGoogleCommonCollectHashBiMap_View))
#define ComGoogleCommonCollectHashBiMap_View_

#define RESTRICT_JavaUtilAbstractSet 1
#define INCLUDE_JavaUtilAbstractSet 1
#include "java/util/AbstractSet.h"

@class ComGoogleCommonCollectHashBiMap;
@protocol JavaUtilIterator;

/*!
 @brief Shared supertype of keySet, values, entrySet, and inverse.entrySet.
 */
@interface ComGoogleCommonCollectHashBiMap_View : JavaUtilAbstractSet {
 @public
  ComGoogleCommonCollectHashBiMap *biMap_;
}

#pragma mark Public

- (void)clear;

- (id<JavaUtilIterator>)iterator;

- (jint)size;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonCollectHashBiMap:(ComGoogleCommonCollectHashBiMap *)biMap;

- (id)forEntryWithInt:(jint)entry_;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectHashBiMap_View)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectHashBiMap_View, biMap_, ComGoogleCommonCollectHashBiMap *)

FOUNDATION_EXPORT void ComGoogleCommonCollectHashBiMap_View_initWithComGoogleCommonCollectHashBiMap_(ComGoogleCommonCollectHashBiMap_View *self, ComGoogleCommonCollectHashBiMap *biMap);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectHashBiMap_View)

#endif

#if !defined (ComGoogleCommonCollectHashBiMap_KeySet_) && (INCLUDE_ALL_ComGoogleCommonCollectHashBiMap || defined(INCLUDE_ComGoogleCommonCollectHashBiMap_KeySet))
#define ComGoogleCommonCollectHashBiMap_KeySet_

@class ComGoogleCommonCollectHashBiMap;

@interface ComGoogleCommonCollectHashBiMap_KeySet : ComGoogleCommonCollectHashBiMap_View

#pragma mark Public

- (jboolean)containsWithId:(id)o;

- (jboolean)removeWithId:(id)o;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonCollectHashBiMap:(ComGoogleCommonCollectHashBiMap *)outer$;

- (id)forEntryWithInt:(jint)entry_;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectHashBiMap_KeySet)

FOUNDATION_EXPORT void ComGoogleCommonCollectHashBiMap_KeySet_initWithComGoogleCommonCollectHashBiMap_(ComGoogleCommonCollectHashBiMap_KeySet *self, ComGoogleCommonCollectHashBiMap *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectHashBiMap_KeySet *new_ComGoogleCommonCollectHashBiMap_KeySet_initWithComGoogleCommonCollectHashBiMap_(ComGoogleCommonCollectHashBiMap *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectHashBiMap_KeySet *create_ComGoogleCommonCollectHashBiMap_KeySet_initWithComGoogleCommonCollectHashBiMap_(ComGoogleCommonCollectHashBiMap *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectHashBiMap_KeySet)

#endif

#if !defined (ComGoogleCommonCollectHashBiMap_ValueSet_) && (INCLUDE_ALL_ComGoogleCommonCollectHashBiMap || defined(INCLUDE_ComGoogleCommonCollectHashBiMap_ValueSet))
#define ComGoogleCommonCollectHashBiMap_ValueSet_

@class ComGoogleCommonCollectHashBiMap;

@interface ComGoogleCommonCollectHashBiMap_ValueSet : ComGoogleCommonCollectHashBiMap_View

#pragma mark Public

- (jboolean)containsWithId:(id)o;

- (jboolean)removeWithId:(id)o;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonCollectHashBiMap:(ComGoogleCommonCollectHashBiMap *)outer$;

- (id)forEntryWithInt:(jint)entry_;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectHashBiMap_ValueSet)

FOUNDATION_EXPORT void ComGoogleCommonCollectHashBiMap_ValueSet_initWithComGoogleCommonCollectHashBiMap_(ComGoogleCommonCollectHashBiMap_ValueSet *self, ComGoogleCommonCollectHashBiMap *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectHashBiMap_ValueSet *new_ComGoogleCommonCollectHashBiMap_ValueSet_initWithComGoogleCommonCollectHashBiMap_(ComGoogleCommonCollectHashBiMap *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectHashBiMap_ValueSet *create_ComGoogleCommonCollectHashBiMap_ValueSet_initWithComGoogleCommonCollectHashBiMap_(ComGoogleCommonCollectHashBiMap *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectHashBiMap_ValueSet)

#endif

#if !defined (ComGoogleCommonCollectHashBiMap_EntrySet_) && (INCLUDE_ALL_ComGoogleCommonCollectHashBiMap || defined(INCLUDE_ComGoogleCommonCollectHashBiMap_EntrySet))
#define ComGoogleCommonCollectHashBiMap_EntrySet_

@class ComGoogleCommonCollectHashBiMap;
@protocol JavaUtilMap_Entry;

@interface ComGoogleCommonCollectHashBiMap_EntrySet : ComGoogleCommonCollectHashBiMap_View

#pragma mark Public

- (jboolean)containsWithId:(id)o;

- (jboolean)removeWithId:(id)o;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonCollectHashBiMap:(ComGoogleCommonCollectHashBiMap *)outer$;

- (id<JavaUtilMap_Entry>)forEntryWithInt:(jint)entry_;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectHashBiMap_EntrySet)

FOUNDATION_EXPORT void ComGoogleCommonCollectHashBiMap_EntrySet_initWithComGoogleCommonCollectHashBiMap_(ComGoogleCommonCollectHashBiMap_EntrySet *self, ComGoogleCommonCollectHashBiMap *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectHashBiMap_EntrySet *new_ComGoogleCommonCollectHashBiMap_EntrySet_initWithComGoogleCommonCollectHashBiMap_(ComGoogleCommonCollectHashBiMap *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectHashBiMap_EntrySet *create_ComGoogleCommonCollectHashBiMap_EntrySet_initWithComGoogleCommonCollectHashBiMap_(ComGoogleCommonCollectHashBiMap *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectHashBiMap_EntrySet)

#endif

#if !defined (ComGoogleCommonCollectHashBiMap_EntryForKey_) && (INCLUDE_ALL_ComGoogleCommonCollectHashBiMap || defined(INCLUDE_ComGoogleCommonCollectHashBiMap_EntryForKey))
#define ComGoogleCommonCollectHashBiMap_EntryForKey_

#define RESTRICT_ComGoogleCommonCollectAbstractMapEntry 1
#define INCLUDE_ComGoogleCommonCollectAbstractMapEntry 1
#include "com/google/common/collect/AbstractMapEntry.h"

@class ComGoogleCommonCollectHashBiMap;

/*!
 @brief An <code>Entry</code> implementation that attempts to follow its key around the map -- that is, if
  the key is moved, deleted, or reinserted, it will account for that -- while not doing any extra
  work if the key has not moved.
 */
@interface ComGoogleCommonCollectHashBiMap_EntryForKey : ComGoogleCommonCollectAbstractMapEntry {
 @public
  id key_;
  jint index_;
}

#pragma mark Public

- (id)getKey;

- (id)getValue;

- (id)setValueWithId:(id)value;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonCollectHashBiMap:(ComGoogleCommonCollectHashBiMap *)outer$
                                                          withInt:(jint)index;

- (void)updateIndex;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectHashBiMap_EntryForKey)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectHashBiMap_EntryForKey, key_, id)

FOUNDATION_EXPORT void ComGoogleCommonCollectHashBiMap_EntryForKey_initWithComGoogleCommonCollectHashBiMap_withInt_(ComGoogleCommonCollectHashBiMap_EntryForKey *self, ComGoogleCommonCollectHashBiMap *outer$, jint index);

FOUNDATION_EXPORT ComGoogleCommonCollectHashBiMap_EntryForKey *new_ComGoogleCommonCollectHashBiMap_EntryForKey_initWithComGoogleCommonCollectHashBiMap_withInt_(ComGoogleCommonCollectHashBiMap *outer$, jint index) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectHashBiMap_EntryForKey *create_ComGoogleCommonCollectHashBiMap_EntryForKey_initWithComGoogleCommonCollectHashBiMap_withInt_(ComGoogleCommonCollectHashBiMap *outer$, jint index);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectHashBiMap_EntryForKey)

#endif

#if !defined (ComGoogleCommonCollectHashBiMap_Inverse_) && (INCLUDE_ALL_ComGoogleCommonCollectHashBiMap || defined(INCLUDE_ComGoogleCommonCollectHashBiMap_Inverse))
#define ComGoogleCommonCollectHashBiMap_Inverse_

#define RESTRICT_JavaUtilAbstractMap 1
#define INCLUDE_JavaUtilAbstractMap 1
#include "java/util/AbstractMap.h"

#define RESTRICT_ComGoogleCommonCollectBiMap 1
#define INCLUDE_ComGoogleCommonCollectBiMap 1
#include "com/google/common/collect/BiMap.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class ComGoogleCommonCollectHashBiMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectHashBiMap_Inverse : JavaUtilAbstractMap < ComGoogleCommonCollectBiMap, JavaIoSerializable >

#pragma mark Public

- (void)clear;

- (jboolean)containsKeyWithId:(id)key;

- (jboolean)containsValueWithId:(id)value;

- (id<JavaUtilSet>)entrySet;

- (id)forcePutWithId:(id)value
              withId:(id)key;

- (id)getWithId:(id)key;

- (id<ComGoogleCommonCollectBiMap>)inverse;

- (id<JavaUtilSet>)keySet;

- (id)putWithId:(id)value
         withId:(id)key;

- (id)removeWithId:(id)value;

- (jint)size;

- (id<JavaUtilSet>)values;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonCollectHashBiMap:(ComGoogleCommonCollectHashBiMap *)forward;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectHashBiMap_Inverse)

FOUNDATION_EXPORT void ComGoogleCommonCollectHashBiMap_Inverse_initWithComGoogleCommonCollectHashBiMap_(ComGoogleCommonCollectHashBiMap_Inverse *self, ComGoogleCommonCollectHashBiMap *forward);

FOUNDATION_EXPORT ComGoogleCommonCollectHashBiMap_Inverse *new_ComGoogleCommonCollectHashBiMap_Inverse_initWithComGoogleCommonCollectHashBiMap_(ComGoogleCommonCollectHashBiMap *forward) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectHashBiMap_Inverse *create_ComGoogleCommonCollectHashBiMap_Inverse_initWithComGoogleCommonCollectHashBiMap_(ComGoogleCommonCollectHashBiMap *forward);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectHashBiMap_Inverse)

#endif

#if !defined (ComGoogleCommonCollectHashBiMap_InverseEntrySet_) && (INCLUDE_ALL_ComGoogleCommonCollectHashBiMap || defined(INCLUDE_ComGoogleCommonCollectHashBiMap_InverseEntrySet))
#define ComGoogleCommonCollectHashBiMap_InverseEntrySet_

@class ComGoogleCommonCollectHashBiMap;
@protocol JavaUtilMap_Entry;

@interface ComGoogleCommonCollectHashBiMap_InverseEntrySet : ComGoogleCommonCollectHashBiMap_View

#pragma mark Public

- (jboolean)containsWithId:(id)o;

- (jboolean)removeWithId:(id)o;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonCollectHashBiMap:(ComGoogleCommonCollectHashBiMap *)biMap;

- (id<JavaUtilMap_Entry>)forEntryWithInt:(jint)entry_;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectHashBiMap_InverseEntrySet)

FOUNDATION_EXPORT void ComGoogleCommonCollectHashBiMap_InverseEntrySet_initWithComGoogleCommonCollectHashBiMap_(ComGoogleCommonCollectHashBiMap_InverseEntrySet *self, ComGoogleCommonCollectHashBiMap *biMap);

FOUNDATION_EXPORT ComGoogleCommonCollectHashBiMap_InverseEntrySet *new_ComGoogleCommonCollectHashBiMap_InverseEntrySet_initWithComGoogleCommonCollectHashBiMap_(ComGoogleCommonCollectHashBiMap *biMap) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectHashBiMap_InverseEntrySet *create_ComGoogleCommonCollectHashBiMap_InverseEntrySet_initWithComGoogleCommonCollectHashBiMap_(ComGoogleCommonCollectHashBiMap *biMap);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectHashBiMap_InverseEntrySet)

#endif

#if !defined (ComGoogleCommonCollectHashBiMap_EntryForValue_) && (INCLUDE_ALL_ComGoogleCommonCollectHashBiMap || defined(INCLUDE_ComGoogleCommonCollectHashBiMap_EntryForValue))
#define ComGoogleCommonCollectHashBiMap_EntryForValue_

#define RESTRICT_ComGoogleCommonCollectAbstractMapEntry 1
#define INCLUDE_ComGoogleCommonCollectAbstractMapEntry 1
#include "com/google/common/collect/AbstractMapEntry.h"

@class ComGoogleCommonCollectHashBiMap;

/*!
 @brief An <code>Entry</code> implementation that attempts to follow its value around the map -- that is, if
  the value is moved, deleted, or reinserted, it will account for that -- while not doing any
  extra work if the value has not moved.
 */
@interface ComGoogleCommonCollectHashBiMap_EntryForValue : ComGoogleCommonCollectAbstractMapEntry {
 @public
  ComGoogleCommonCollectHashBiMap *biMap_;
  id value_;
  jint index_;
}

#pragma mark Public

- (id)getKey;

- (id)getValue;

- (id)setValueWithId:(id)key;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonCollectHashBiMap:(ComGoogleCommonCollectHashBiMap *)biMap
                                                          withInt:(jint)index;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectHashBiMap_EntryForValue)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectHashBiMap_EntryForValue, biMap_, ComGoogleCommonCollectHashBiMap *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectHashBiMap_EntryForValue, value_, id)

FOUNDATION_EXPORT void ComGoogleCommonCollectHashBiMap_EntryForValue_initWithComGoogleCommonCollectHashBiMap_withInt_(ComGoogleCommonCollectHashBiMap_EntryForValue *self, ComGoogleCommonCollectHashBiMap *biMap, jint index);

FOUNDATION_EXPORT ComGoogleCommonCollectHashBiMap_EntryForValue *new_ComGoogleCommonCollectHashBiMap_EntryForValue_initWithComGoogleCommonCollectHashBiMap_withInt_(ComGoogleCommonCollectHashBiMap *biMap, jint index) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectHashBiMap_EntryForValue *create_ComGoogleCommonCollectHashBiMap_EntryForValue_initWithComGoogleCommonCollectHashBiMap_withInt_(ComGoogleCommonCollectHashBiMap *biMap, jint index);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectHashBiMap_EntryForValue)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectHashBiMap")
