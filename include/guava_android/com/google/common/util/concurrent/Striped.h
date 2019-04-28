//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/com/google/common/util/concurrent/Striped.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentStriped")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentStriped
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentStriped 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentStriped 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentStriped
#ifdef INCLUDE_ComGoogleCommonUtilConcurrentStriped_LargeLazyStriped
#define INCLUDE_ComGoogleCommonUtilConcurrentStriped_PowerOfTwoStriped 1
#endif
#ifdef INCLUDE_ComGoogleCommonUtilConcurrentStriped_SmallLazyStriped
#define INCLUDE_ComGoogleCommonUtilConcurrentStriped_PowerOfTwoStriped 1
#endif
#ifdef INCLUDE_ComGoogleCommonUtilConcurrentStriped_PowerOfTwoStriped
#define INCLUDE_ComGoogleCommonUtilConcurrentStriped 1
#endif

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentStriped_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentStriped || defined(INCLUDE_ComGoogleCommonUtilConcurrentStriped))
#define ComGoogleCommonUtilConcurrentStriped_

@protocol ComGoogleCommonBaseSupplier;
@protocol JavaLangIterable;

/*!
 @brief A striped <code>Lock/Semaphore/ReadWriteLock</code>.This offers the underlying lock striping similar
  to that of <code>ConcurrentHashMap</code> in a reusable form, and extends it for semaphores and
  read-write locks.
 Conceptually, lock striping is the technique of dividing a lock into many 
 <i>stripes</i>, increasing the granularity of a single lock and allowing independent operations
  to lock different stripes and proceed concurrently, instead of creating contention for a single
  lock. 
 <p>The guarantee provided by this class is that equal keys lead to the same lock (or semaphore),
  i.e. <code>if (key1.equals(key2))</code> then <code>striped.get(key1) == striped.get(key2)</code> (assuming 
 <code>Object.hashCode()</code> is correctly implemented for the keys). Note that if <code>key1</code> is 
 <strong>not</strong> equal to <code>key2</code>, it is <strong>not</strong> guaranteed that <code>striped.get(key1) != striped.get(key2)</code>
 ; the elements might nevertheless be mapped to the same
  lock. The lower the number of stripes, the higher the probability of this happening. 
 <p>There are three flavors of this class: <code>Striped<Lock></code>, <code>Striped<Semaphore></code>, and 
 <code>Striped<ReadWriteLock></code>. For each type, two implementations are offered: strong
  and weak <code>Striped<Lock></code>, strong
  and weak <code>Striped<Semaphore></code>
 , and strong and weak
  <code>Striped<ReadWriteLock></code>. <i>Strong</i> means that all
  stripes (locks/semaphores) are initialized eagerly, and are not reclaimed unless <code>Striped</code>
  itself is reclaimable. <i>Weak</i> means that locks/semaphores are created lazily, and they are
  allowed to be reclaimed if nobody is holding on to them. This is useful, for example, if one
  wants to create a <code>Striped<Lock></code> of many locks, but worries that in most cases only a
  small portion of these would be in use. 
 <p>Prior to this class, one might be tempted to use <code>Map<K, Lock></code>, where <code>K</code>
  represents the task. This maximizes concurrency by having each unique key mapped to a unique
  lock, but also maximizes memory footprint. On the other extreme, one could use a single lock for
  all tasks, which minimizes memory footprint but also minimizes concurrency. Instead of choosing
  either of these extremes, <code>Striped</code> allows the user to trade between required concurrency
  and memory footprint. For example, if a set of tasks are CPU-bound, one could easily create a
  very compact <code>Striped<Lock></code> of <code>availableProcessors() * 4</code> stripes, instead of
  possibly thousands of locks which could be created in a <code>Map<K, Lock></code> structure.
 @author Dimitris Andreou
 @since 13.0
 */
@interface ComGoogleCommonUtilConcurrentStriped : NSObject

#pragma mark Public

/*!
 @brief Returns the stripes that correspond to the passed objects, in ascending (as per <code>getAt(int)</code>
 ) order.Thus, threads that use the stripes in the order returned by this method
  are guaranteed to not deadlock each other.
 <p>It should be noted that using a <code>Striped<L></code> with relatively few stripes, and <code>bulkGet(keys)</code>
  with a relative large number of keys can cause an excessive number of shared
  stripes (much like the birthday paradox, where much fewer than anticipated birthdays are needed
  for a pair of them to match). Please consider carefully the implications of the number of
  stripes, the intended concurrency level, and the typical number of keys used in a <code>bulkGet(keys)</code>
  operation. See <a href="http://www.mathpages.com/home/kmath199.htm">Balls in
  Bins model</a> for mathematical formulas that can be used to estimate the probability of
  collisions.
 @param keys arbitrary non-null keys
 @return the stripes corresponding to the objects (one per each object, derived by delegating to
      <code>get(Object)</code>; may contain duplicates), in an increasing index order.
 */
- (id<JavaLangIterable>)bulkGetWithJavaLangIterable:(id<JavaLangIterable>)keys;

/*!
 @brief Returns the stripe that corresponds to the passed key.It is always guaranteed that if <code>key1.equals(key2)</code>
 , then <code>get(key1) == get(key2)</code>.
 @param key an arbitrary, non-null key
 @return the stripe that the passed key corresponds to
 */
- (id)getWithId:(id)key;

/*!
 @brief Returns the stripe at the specified index.Valid indexes are 0, inclusively, to <code>size()</code>,
  exclusively.
 @param index the index of the stripe to return; must be in <code>[0...size())</code>
 @return the stripe at the specified index
 */
- (id)getAtWithInt:(jint)index;

/*!
 @brief Creates a <code>Striped<Lock></code> with lazily initialized, weakly referenced locks.Every lock is
  reentrant.
 @param stripes the minimum number of stripes (locks) required
 @return a new <code>Striped<Lock></code>
 */
+ (ComGoogleCommonUtilConcurrentStriped *)lazyWeakLockWithInt:(jint)stripes;

/*!
 @brief Creates a <code>Striped<ReadWriteLock></code> with lazily initialized, weakly referenced read-write
  locks.Every lock is reentrant.
 @param stripes the minimum number of stripes (locks) required
 @return a new <code>Striped<ReadWriteLock></code>
 */
+ (ComGoogleCommonUtilConcurrentStriped *)lazyWeakReadWriteLockWithInt:(jint)stripes;

/*!
 @brief Creates a <code>Striped<Semaphore></code> with lazily initialized, weakly referenced semaphores,
  with the specified number of permits.
 @param stripes the minimum number of stripes (semaphores) required
 @param permits the number of permits in each semaphore
 @return a new <code>Striped<Semaphore></code>
 */
+ (ComGoogleCommonUtilConcurrentStriped *)lazyWeakSemaphoreWithInt:(jint)stripes
                                                           withInt:(jint)permits;

/*!
 @brief Creates a <code>Striped<Lock></code> with eagerly initialized, strongly referenced locks.Every lock
  is reentrant.
 @param stripes the minimum number of stripes (locks) required
 @return a new <code>Striped<Lock></code>
 */
+ (ComGoogleCommonUtilConcurrentStriped *)lockWithInt:(jint)stripes;

/*!
 @brief Creates a <code>Striped<ReadWriteLock></code> with eagerly initialized, strongly referenced
  read-write locks.Every lock is reentrant.
 @param stripes the minimum number of stripes (locks) required
 @return a new <code>Striped<ReadWriteLock></code>
 */
+ (ComGoogleCommonUtilConcurrentStriped *)readWriteLockWithInt:(jint)stripes;

/*!
 @brief Creates a <code>Striped<Semaphore></code> with eagerly initialized, strongly referenced semaphores,
  with the specified number of permits.
 @param stripes the minimum number of stripes (semaphores) required
 @param permits the number of permits in each semaphore
 @return a new <code>Striped<Semaphore></code>
 */
+ (ComGoogleCommonUtilConcurrentStriped *)semaphoreWithInt:(jint)stripes
                                                   withInt:(jint)permits;

/*!
 @brief Returns the total number of stripes in this instance.
 */
- (jint)size;

#pragma mark Package-Private

/*!
 @brief Creates a <code>Striped<L></code> with eagerly initialized, strongly referenced locks.Every lock
  is obtained from the passed supplier.
 @param stripes the minimum number of stripes (locks) required
 @param supplier a <code>Supplier<L></code>  object to obtain locks from
 @return a new <code>Striped<L></code>
 */
+ (ComGoogleCommonUtilConcurrentStriped *)customWithInt:(jint)stripes
                        withComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)supplier;

/*!
 @brief Returns the index to which the given key is mapped, so that getAt(indexFor(key)) == get(key).
 */
- (jint)indexForWithId:(id)key;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentStriped)

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentStriped *ComGoogleCommonUtilConcurrentStriped_customWithInt_withComGoogleCommonBaseSupplier_(jint stripes, id<ComGoogleCommonBaseSupplier> supplier);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentStriped *ComGoogleCommonUtilConcurrentStriped_lockWithInt_(jint stripes);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentStriped *ComGoogleCommonUtilConcurrentStriped_lazyWeakLockWithInt_(jint stripes);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentStriped *ComGoogleCommonUtilConcurrentStriped_semaphoreWithInt_withInt_(jint stripes, jint permits);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentStriped *ComGoogleCommonUtilConcurrentStriped_lazyWeakSemaphoreWithInt_withInt_(jint stripes, jint permits);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentStriped *ComGoogleCommonUtilConcurrentStriped_readWriteLockWithInt_(jint stripes);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentStriped *ComGoogleCommonUtilConcurrentStriped_lazyWeakReadWriteLockWithInt_(jint stripes);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentStriped)

#endif

#if !defined (ComGoogleCommonUtilConcurrentStriped_PowerOfTwoStriped_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentStriped || defined(INCLUDE_ComGoogleCommonUtilConcurrentStriped_PowerOfTwoStriped))
#define ComGoogleCommonUtilConcurrentStriped_PowerOfTwoStriped_

@interface ComGoogleCommonUtilConcurrentStriped_PowerOfTwoStriped : ComGoogleCommonUtilConcurrentStriped {
 @public
  /*!
   @brief Capacity (power of two) minus one, for fast mod evaluation
   */
  jint mask_;
}

#pragma mark Public

- (id)getWithId:(id)key;

#pragma mark Package-Private

- (instancetype __nonnull)initWithInt:(jint)stripes;

- (jint)indexForWithId:(id)key;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentStriped_PowerOfTwoStriped)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentStriped_PowerOfTwoStriped_initWithInt_(ComGoogleCommonUtilConcurrentStriped_PowerOfTwoStriped *self, jint stripes);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentStriped_PowerOfTwoStriped)

#endif

#if !defined (ComGoogleCommonUtilConcurrentStriped_SmallLazyStriped_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentStriped || defined(INCLUDE_ComGoogleCommonUtilConcurrentStriped_SmallLazyStriped))
#define ComGoogleCommonUtilConcurrentStriped_SmallLazyStriped_

@class JavaLangRefReferenceQueue;
@class JavaUtilConcurrentAtomicAtomicReferenceArray;
@protocol ComGoogleCommonBaseSupplier;

/*!
 @brief Implementation of Striped where up to 2^k stripes can be represented, using an
  AtomicReferenceArray of size 2^k.To map a user key into a stripe, we take a k-bit slice of the
  user key's (smeared) hashCode().
 The stripes are lazily initialized and are weakly referenced.
 */
@interface ComGoogleCommonUtilConcurrentStriped_SmallLazyStriped : ComGoogleCommonUtilConcurrentStriped_PowerOfTwoStriped {
 @public
  JavaUtilConcurrentAtomicAtomicReferenceArray *locks_;
  id<ComGoogleCommonBaseSupplier> supplier_;
  jint size_;
  JavaLangRefReferenceQueue *queue_;
}

#pragma mark Public

- (id)getAtWithInt:(jint)index;

- (jint)size;

#pragma mark Package-Private

- (instancetype __nonnull)initWithInt:(jint)stripes
      withComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)supplier;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithInt:(jint)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentStriped_SmallLazyStriped)

J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentStriped_SmallLazyStriped, locks_, JavaUtilConcurrentAtomicAtomicReferenceArray *)
J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentStriped_SmallLazyStriped, supplier_, id<ComGoogleCommonBaseSupplier>)
J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentStriped_SmallLazyStriped, queue_, JavaLangRefReferenceQueue *)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentStriped_SmallLazyStriped_initWithInt_withComGoogleCommonBaseSupplier_(ComGoogleCommonUtilConcurrentStriped_SmallLazyStriped *self, jint stripes, id<ComGoogleCommonBaseSupplier> supplier);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentStriped_SmallLazyStriped *new_ComGoogleCommonUtilConcurrentStriped_SmallLazyStriped_initWithInt_withComGoogleCommonBaseSupplier_(jint stripes, id<ComGoogleCommonBaseSupplier> supplier) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentStriped_SmallLazyStriped *create_ComGoogleCommonUtilConcurrentStriped_SmallLazyStriped_initWithInt_withComGoogleCommonBaseSupplier_(jint stripes, id<ComGoogleCommonBaseSupplier> supplier);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentStriped_SmallLazyStriped)

#endif

#if !defined (ComGoogleCommonUtilConcurrentStriped_LargeLazyStriped_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentStriped || defined(INCLUDE_ComGoogleCommonUtilConcurrentStriped_LargeLazyStriped))
#define ComGoogleCommonUtilConcurrentStriped_LargeLazyStriped_

@protocol ComGoogleCommonBaseSupplier;
@protocol JavaUtilConcurrentConcurrentMap;

/*!
 @brief Implementation of Striped where up to 2^k stripes can be represented, using a ConcurrentMap
  where the key domain is [0..2^k).To map a user key into a stripe, we take a k-bit slice of the
  user key's (smeared) hashCode().
 The stripes are lazily initialized and are weakly referenced.
 */
@interface ComGoogleCommonUtilConcurrentStriped_LargeLazyStriped : ComGoogleCommonUtilConcurrentStriped_PowerOfTwoStriped {
 @public
  id<JavaUtilConcurrentConcurrentMap> locks_;
  id<ComGoogleCommonBaseSupplier> supplier_;
  jint size_;
}

#pragma mark Public

- (id)getAtWithInt:(jint)index;

- (jint)size;

#pragma mark Package-Private

- (instancetype __nonnull)initWithInt:(jint)stripes
      withComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)supplier;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithInt:(jint)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentStriped_LargeLazyStriped)

J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentStriped_LargeLazyStriped, locks_, id<JavaUtilConcurrentConcurrentMap>)
J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentStriped_LargeLazyStriped, supplier_, id<ComGoogleCommonBaseSupplier>)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentStriped_LargeLazyStriped_initWithInt_withComGoogleCommonBaseSupplier_(ComGoogleCommonUtilConcurrentStriped_LargeLazyStriped *self, jint stripes, id<ComGoogleCommonBaseSupplier> supplier);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentStriped_LargeLazyStriped *new_ComGoogleCommonUtilConcurrentStriped_LargeLazyStriped_initWithInt_withComGoogleCommonBaseSupplier_(jint stripes, id<ComGoogleCommonBaseSupplier> supplier) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentStriped_LargeLazyStriped *create_ComGoogleCommonUtilConcurrentStriped_LargeLazyStriped_initWithInt_withComGoogleCommonBaseSupplier_(jint stripes, id<ComGoogleCommonBaseSupplier> supplier);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentStriped_LargeLazyStriped)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentStriped")
