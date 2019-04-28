//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/util/ArraySet.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidUtilArraySet")
#ifdef RESTRICT_AndroidUtilArraySet
#define INCLUDE_ALL_AndroidUtilArraySet 0
#else
#define INCLUDE_ALL_AndroidUtilArraySet 1
#endif
#undef RESTRICT_AndroidUtilArraySet

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AndroidUtilArraySet_) && (INCLUDE_ALL_AndroidUtilArraySet || defined(INCLUDE_AndroidUtilArraySet))
#define AndroidUtilArraySet_

#define RESTRICT_JavaUtilCollection 1
#define INCLUDE_JavaUtilCollection 1
#include "java/util/Collection.h"

#define RESTRICT_JavaUtilSet 1
#define INCLUDE_JavaUtilSet 1
#include "java/util/Set.h"

@class AndroidUtilMapCollections;
@class IOSIntArray;
@class IOSObjectArray;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilFunctionPredicate;
@protocol JavaUtilIterator;
@protocol JavaUtilSpliterator;
@protocol JavaUtilStreamStream;

/*!
 @brief ArraySet is a generic set data structure that is designed to be more memory efficient than a
  traditional <code>java.util.HashSet</code>.The design is very similar to 
 <code>ArrayMap</code>, with all of the caveats described there.
 This implementation is
  separate from ArrayMap, however, so the Object array contains only one item for each
  entry in the set (instead of a pair for a mapping). 
 <p>Note that this implementation is not intended to be appropriate for data structures
  that may contain large numbers of items.  It is generally slower than a traditional
  HashSet, since lookups require a binary search and adds and removes require inserting
  and deleting entries in the array.  For containers holding up to hundreds of items,
  the performance difference is not significant, less than 50%.</p>
  
 <p>Because this container is intended to better balance memory use, unlike most other
  standard Java containers it will shrink its array as items are removed from it.  Currently
  you have no control over this shrinking -- if you set a capacity and then remove an
  item, it may reduce the capacity to better match the current size.  In the future an
  explicit call to set the capacity should turn off this aggressive shrinking behavior.</p>
 */
@interface AndroidUtilArraySet : NSObject < JavaUtilCollection, JavaUtilSet > {
 @public
  IOSIntArray *mHashes_;
  IOSObjectArray *mArray_;
  jint mSize_;
  AndroidUtilMapCollections *mCollections_;
}
@property (class, strong) IOSObjectArray *mBaseCache NS_SWIFT_NAME(mBaseCache);
@property (class) jint mBaseCacheSize NS_SWIFT_NAME(mBaseCacheSize);
@property (class, strong) IOSObjectArray *mTwiceBaseCache NS_SWIFT_NAME(mTwiceBaseCache);
@property (class) jint mTwiceBaseCacheSize NS_SWIFT_NAME(mTwiceBaseCacheSize);

+ (IOSObjectArray *)mBaseCache;

+ (void)setMBaseCache:(IOSObjectArray *)value;

+ (jint)mBaseCacheSize;

+ (void)setMBaseCacheSize:(jint)value;

+ (IOSObjectArray *)mTwiceBaseCache;

+ (void)setMTwiceBaseCache:(IOSObjectArray *)value;

+ (jint)mTwiceBaseCacheSize;

+ (void)setMTwiceBaseCacheSize:(jint)value;

#pragma mark Public

/*!
 @brief Create a new empty ArraySet.The default capacity of an array map is 0, and
  will grow once items are added to it.
 */
- (instancetype __nonnull)init;

/*!
 @brief Create a new ArraySet with the mappings from the given ArraySet.
 */
- (instancetype __nonnull)initWithAndroidUtilArraySet:(AndroidUtilArraySet *)set;

/*!
 @brief Create a new ArraySet with a given initial capacity.
 */
- (instancetype __nonnull)initWithInt:(jint)capacity;

/*!
 @brief Adds the specified object to this set.The set is not modified if it
  already contains the object.
 @param value the object to add.
 @return <code>true</code> if this set is modified, <code>false</code> otherwise.
 @throw ClassCastException
 when the class of the object is inappropriate for this set.
 */
- (jboolean)addWithId:(id)value;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Make the array map empty.All storage is released.
 */
- (void)clear;

/*!
 @brief Check whether a value exists in the set.
 @param key The value to search for.
 @return Returns true if the value exists, else false.
 */
- (jboolean)containsWithId:(id)key;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Ensure the array map can hold at least <var>minimumCapacity</var>
  items.
 */
- (void)ensureCapacityWithInt:(jint)minimumCapacity;

/*!
 @brief <p>This implementation returns false if the object is not a set, or
  if the sets have different sizes.
 Otherwise, for each value in this
  set, it checks to make sure the value also exists in the other set.
  If any value doesn't exist, the method returns false; otherwise, it
  returns true.
 */
- (jboolean)isEqual:(id)object;

/*!
 */
- (NSUInteger)hash;

/*!
 @brief Return true if the array map contains no items.
 */
- (jboolean)isEmpty;

- (id<JavaUtilIterator>)iterator;

/*!
 @brief Perform a <code>add(Object)</code> of all values in <var>array</var>
 @param array The array whose contents are to be retrieved.
 */
- (void)putAllWithAndroidUtilArraySet:(AndroidUtilArraySet *)array;

/*!
 @brief Removes the specified object from this set.
 @param object the object to remove.
 @return <code>true</code> if this set was modified, <code>false</code> otherwise.
 */
- (jboolean)removeWithId:(id)object;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Remove the key/value mapping at the given index.
 @param index The desired index, must be between 0 and <code>size()</code> -1.
 @return Returns the value that was stored at this index.
 */
- (id)removeAtWithInt:(jint)index;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Return the number of items in this array map.
 */
- (jint)size;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)array;

/*!
 @brief <p>This implementation composes a string by iterating over its values.
 If
  this set contains itself as a value, the string "(this Set)"
  will appear in its place.
 */
- (NSString *)description;

/*!
 @brief Return the value at the given index in the array.
 @param index The desired index, must be between 0 and <code>size()</code> -1.
 @return Returns the value stored at the given index.
 */
- (id)valueAtWithInt:(jint)index;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidUtilArraySet)

J2OBJC_FIELD_SETTER(AndroidUtilArraySet, mHashes_, IOSIntArray *)
J2OBJC_FIELD_SETTER(AndroidUtilArraySet, mArray_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(AndroidUtilArraySet, mCollections_, AndroidUtilMapCollections *)

/*!
 @brief Caches of small array objects to avoid spamming garbage.The cache
  Object[] variable is a pointer to a linked list of array objects.
 The first entry in the array is a pointer to the next array in the
  list; the second entry is a pointer to the int[] hash code array for it.
 */
inline IOSObjectArray *AndroidUtilArraySet_get_mBaseCache(void);
inline IOSObjectArray *AndroidUtilArraySet_set_mBaseCache(IOSObjectArray *value);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSObjectArray *AndroidUtilArraySet_mBaseCache;
J2OBJC_STATIC_FIELD_OBJ(AndroidUtilArraySet, mBaseCache, IOSObjectArray *)

inline jint AndroidUtilArraySet_get_mBaseCacheSize(void);
inline jint AndroidUtilArraySet_set_mBaseCacheSize(jint value);
inline jint *AndroidUtilArraySet_getRef_mBaseCacheSize(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT jint AndroidUtilArraySet_mBaseCacheSize;
J2OBJC_STATIC_FIELD_PRIMITIVE(AndroidUtilArraySet, mBaseCacheSize, jint)

inline IOSObjectArray *AndroidUtilArraySet_get_mTwiceBaseCache(void);
inline IOSObjectArray *AndroidUtilArraySet_set_mTwiceBaseCache(IOSObjectArray *value);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSObjectArray *AndroidUtilArraySet_mTwiceBaseCache;
J2OBJC_STATIC_FIELD_OBJ(AndroidUtilArraySet, mTwiceBaseCache, IOSObjectArray *)

inline jint AndroidUtilArraySet_get_mTwiceBaseCacheSize(void);
inline jint AndroidUtilArraySet_set_mTwiceBaseCacheSize(jint value);
inline jint *AndroidUtilArraySet_getRef_mTwiceBaseCacheSize(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT jint AndroidUtilArraySet_mTwiceBaseCacheSize;
J2OBJC_STATIC_FIELD_PRIMITIVE(AndroidUtilArraySet, mTwiceBaseCacheSize, jint)

FOUNDATION_EXPORT void AndroidUtilArraySet_init(AndroidUtilArraySet *self);

FOUNDATION_EXPORT AndroidUtilArraySet *new_AndroidUtilArraySet_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidUtilArraySet *create_AndroidUtilArraySet_init(void);

FOUNDATION_EXPORT void AndroidUtilArraySet_initWithInt_(AndroidUtilArraySet *self, jint capacity);

FOUNDATION_EXPORT AndroidUtilArraySet *new_AndroidUtilArraySet_initWithInt_(jint capacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidUtilArraySet *create_AndroidUtilArraySet_initWithInt_(jint capacity);

FOUNDATION_EXPORT void AndroidUtilArraySet_initWithAndroidUtilArraySet_(AndroidUtilArraySet *self, AndroidUtilArraySet *set);

FOUNDATION_EXPORT AndroidUtilArraySet *new_AndroidUtilArraySet_initWithAndroidUtilArraySet_(AndroidUtilArraySet *set) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidUtilArraySet *create_AndroidUtilArraySet_initWithAndroidUtilArraySet_(AndroidUtilArraySet *set);

J2OBJC_TYPE_LITERAL_HEADER(AndroidUtilArraySet)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_AndroidUtilArraySet")
