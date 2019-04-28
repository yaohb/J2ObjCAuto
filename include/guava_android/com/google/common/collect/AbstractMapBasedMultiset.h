//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/com/google/common/collect/AbstractMapBasedMultiset.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractMapBasedMultiset")
#ifdef RESTRICT_ComGoogleCommonCollectAbstractMapBasedMultiset
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractMapBasedMultiset 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractMapBasedMultiset 1
#endif
#undef RESTRICT_ComGoogleCommonCollectAbstractMapBasedMultiset

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectAbstractMapBasedMultiset_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractMapBasedMultiset || defined(INCLUDE_ComGoogleCommonCollectAbstractMapBasedMultiset))
#define ComGoogleCommonCollectAbstractMapBasedMultiset_

#define RESTRICT_ComGoogleCommonCollectAbstractMultiset 1
#define INCLUDE_ComGoogleCommonCollectAbstractMultiset 1
#include "com/google/common/collect/AbstractMultiset.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class ComGoogleCommonCollectObjectCountHashMap;
@protocol ComGoogleCommonCollectMultiset;
@protocol JavaUtilIterator;

/*!
 @brief Basic implementation of <code>Multiset<E></code> backed by an instance of <code>AbstractObjectCountMap<E></code>
 .
 <p>For serialization to work, the subclass must specify explicit <code>readObject</code> and <code>writeObject</code>
  methods.
 @author Kevin Bourrillion
 */
@interface ComGoogleCommonCollectAbstractMapBasedMultiset : ComGoogleCommonCollectAbstractMultiset < JavaIoSerializable > {
 @public
  ComGoogleCommonCollectObjectCountHashMap *backingMap_;
  jlong size_;
}

#pragma mark Public

/*!
 @throw IllegalArgumentExceptionif the call would result in more than <code>Integer.MAX_VALUE</code>
  occurrences of <code>element</code> in this multiset.
 */
- (jint)addWithId:(id)element
          withInt:(jint)occurrences;

- (void)clear;

- (jint)countWithId:(id)element;

- (id<JavaUtilIterator>)iterator;

- (jint)removeWithId:(id)element
             withInt:(jint)occurrences;

- (jint)setCountWithId:(id)element
               withInt:(jint)count;

- (jboolean)setCountWithId:(id)element
                   withInt:(jint)oldCount
                   withInt:(jint)newCount;

- (jint)size;

#pragma mark Package-Private

- (instancetype __nonnull)initWithInt:(jint)distinctElements;

/*!
 @brief Allocation-free implementation of <code>target.addAll(this)</code>.
 */
- (void)addToWithComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)target;

- (jint)distinctElements;

- (id<JavaUtilIterator>)elementIterator;

- (id<JavaUtilIterator>)entryIterator;

- (void)init__WithInt:(jint)distinctElements OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMapBasedMultiset)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectAbstractMapBasedMultiset, backingMap_, ComGoogleCommonCollectObjectCountHashMap *)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMapBasedMultiset_initWithInt_(ComGoogleCommonCollectAbstractMapBasedMultiset *self, jint distinctElements);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMapBasedMultiset)

#endif

#if !defined (ComGoogleCommonCollectAbstractMapBasedMultiset_Itr_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractMapBasedMultiset || defined(INCLUDE_ComGoogleCommonCollectAbstractMapBasedMultiset_Itr))
#define ComGoogleCommonCollectAbstractMapBasedMultiset_Itr_

#define RESTRICT_JavaUtilIterator 1
#define INCLUDE_JavaUtilIterator 1
#include "java/util/Iterator.h"

@class ComGoogleCommonCollectAbstractMapBasedMultiset;
@protocol JavaUtilFunctionConsumer;

/*!
 @brief Skeleton of per-entry iterators.We could push this down and win a few bytes, but it's complex
  enough it's not especially worth it.
 */
@interface ComGoogleCommonCollectAbstractMapBasedMultiset_Itr : NSObject < JavaUtilIterator > {
 @public
  jint entryIndex_;
  jint toRemove_;
  jint expectedModCount_;
}

#pragma mark Public

- (jboolean)hasNext;

- (id)next;

- (void)remove;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonCollectAbstractMapBasedMultiset:(ComGoogleCommonCollectAbstractMapBasedMultiset *)outer$;

- (id)resultWithInt:(jint)entryIndex;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMapBasedMultiset_Itr)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMapBasedMultiset_Itr_initWithComGoogleCommonCollectAbstractMapBasedMultiset_(ComGoogleCommonCollectAbstractMapBasedMultiset_Itr *self, ComGoogleCommonCollectAbstractMapBasedMultiset *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMapBasedMultiset_Itr)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractMapBasedMultiset")
