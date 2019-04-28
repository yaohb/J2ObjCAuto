//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/SortedIterable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectSortedIterable")
#ifdef RESTRICT_ComGoogleCommonCollectSortedIterable
#define INCLUDE_ALL_ComGoogleCommonCollectSortedIterable 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectSortedIterable 1
#endif
#undef RESTRICT_ComGoogleCommonCollectSortedIterable

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectSortedIterable_) && (INCLUDE_ALL_ComGoogleCommonCollectSortedIterable || defined(INCLUDE_ComGoogleCommonCollectSortedIterable))
#define ComGoogleCommonCollectSortedIterable_

#define RESTRICT_JavaLangIterable 1
#define INCLUDE_JavaLangIterable 1
#include "java/lang/Iterable.h"

@protocol JavaUtilComparator;
@protocol JavaUtilIterator;

/*!
 @brief An <code>Iterable</code> whose elements are sorted relative to a <code>Comparator</code>, typically
  provided at creation time.
 @author Louis Wasserman
 */
@protocol ComGoogleCommonCollectSortedIterable < JavaLangIterable, JavaObject >

/*!
 @brief Returns the <code>Comparator</code> by which the elements of this iterable are ordered, or <code>Ordering.natural()</code>
  if the elements are ordered by their natural ordering.
 */
- (id<JavaUtilComparator>)comparator;

/*!
 @brief Returns an iterator over elements of type <code>T</code>.The elements are returned in nondecreasing
  order according to the associated <code>comparator</code>.
 */
- (id<JavaUtilIterator>)iterator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSortedIterable)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSortedIterable)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectSortedIterable")
