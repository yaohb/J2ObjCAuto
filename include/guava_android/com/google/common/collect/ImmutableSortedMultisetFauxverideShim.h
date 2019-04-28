//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/com/google/common/collect/ImmutableSortedMultisetFauxverideShim.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim")
#ifdef RESTRICT_ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim 1
#endif
#undef RESTRICT_ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim || defined(INCLUDE_ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim))
#define ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_

#define RESTRICT_ComGoogleCommonCollectImmutableMultiset 1
#define INCLUDE_ComGoogleCommonCollectImmutableMultiset 1
#include "com/google/common/collect/ImmutableMultiset.h"

@class ComGoogleCommonCollectImmutableSortedMultiset;
@class ComGoogleCommonCollectImmutableSortedMultiset_Builder;
@class IOSObjectArray;

/*!
 @brief "Overrides" the <code>ImmutableMultiset</code> static methods that lack <code>ImmutableSortedMultiset</code>
  equivalents with deprecated, exception-throwing versions.This prevents
  accidents like the following: 
 @code
 List<Object> objects = ...;
  // Sort them:
  Set<Object> sorted = ImmutableSortedMultiset.copyOf(objects);
  // BAD CODE!
 The returned multiset is actually an unsorted ImmutableMultiset! 
 
@endcode
  
 <p>While we could put the overrides in <code>ImmutableSortedMultiset</code> itself, it seems clearer
  to separate these "do not call" methods from those intended for normal use.
 @author Louis Wasserman
 */
@interface ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim : ComGoogleCommonCollectImmutableMultiset

#pragma mark Public

/*!
 @brief Not supported.Use <code>ImmutableSortedMultiset.naturalOrder</code>, which offers better
  type-safety, instead.
 This method exists only to hide <code>ImmutableMultiset.builder</code> from
  consumers of <code>ImmutableSortedMultiset</code>.
 @throw UnsupportedOperationExceptionalways
 */
+ (ComGoogleCommonCollectImmutableSortedMultiset_Builder *)builder __attribute__((deprecated));

/*!
 @brief Not supported.
 <b>You are attempting to create a multiset that may contain non-<code>Comparable</code>
  elements.</b> Proper calls will resolve to the version in <code>ImmutableSortedMultiset</code>
 , not this dummy version.
 @throw UnsupportedOperationExceptionalways
 */
+ (ComGoogleCommonCollectImmutableSortedMultiset *)copyOfWithNSObjectArray:(IOSObjectArray *)elements OBJC_METHOD_FAMILY_NONE __attribute__((deprecated));

/*!
 @brief Not supported.
 <b>You are attempting to create a multiset that may contain a non-<code>Comparable</code>
  element.</b> Proper calls will resolve to the version in <code>ImmutableSortedMultiset</code>
 , not this dummy version.
 @throw UnsupportedOperationExceptionalways
 */
+ (ComGoogleCommonCollectImmutableSortedMultiset *)ofWithId:(id)element __attribute__((deprecated));

/*!
 @brief Not supported.
 <b>You are attempting to create a multiset that may contain a non-<code>Comparable</code>
  element.</b> Proper calls will resolve to the version in <code>ImmutableSortedMultiset</code>
 , not this dummy version.
 @throw UnsupportedOperationExceptionalways
 */
+ (ComGoogleCommonCollectImmutableSortedMultiset *)ofWithId:(id)e1
                                                     withId:(id)e2 __attribute__((deprecated));

/*!
 @brief Not supported.
 <b>You are attempting to create a multiset that may contain a non-<code>Comparable</code>
  element.</b> Proper calls will resolve to the version in <code>ImmutableSortedMultiset</code>
 , not this dummy version.
 @throw UnsupportedOperationExceptionalways
 */
+ (ComGoogleCommonCollectImmutableSortedMultiset *)ofWithId:(id)e1
                                                     withId:(id)e2
                                                     withId:(id)e3 __attribute__((deprecated));

/*!
 @brief Not supported.
 <b>You are attempting to create a multiset that may contain a non-<code>Comparable</code>
  element.</b> Proper calls will resolve to the version in <code>ImmutableSortedMultiset</code>
 , not this dummy version.
 @throw UnsupportedOperationExceptionalways
 */
+ (ComGoogleCommonCollectImmutableSortedMultiset *)ofWithId:(id)e1
                                                     withId:(id)e2
                                                     withId:(id)e3
                                                     withId:(id)e4 __attribute__((deprecated));

/*!
 @brief Not supported.
 <b>You are attempting to create a multiset that may contain a non-<code>Comparable</code>
  element.</b> Proper calls will resolve to the version in <code>ImmutableSortedMultiset</code>
 , not this dummy version.
 @throw UnsupportedOperationExceptionalways
 */
+ (ComGoogleCommonCollectImmutableSortedMultiset *)ofWithId:(id)e1
                                                     withId:(id)e2
                                                     withId:(id)e3
                                                     withId:(id)e4
                                                     withId:(id)e5 __attribute__((deprecated));

/*!
 @brief Not supported.
 <b>You are attempting to create a multiset that may contain a non-<code>Comparable</code>
  element.</b> Proper calls will resolve to the version in <code>ImmutableSortedMultiset</code>
 , not this dummy version.
 @throw UnsupportedOperationExceptionalways
 */
+ (ComGoogleCommonCollectImmutableSortedMultiset *)ofWithId:(id)e1
                                                     withId:(id)e2
                                                     withId:(id)e3
                                                     withId:(id)e4
                                                     withId:(id)e5
                                                     withId:(id)e6
                                          withNSObjectArray:(IOSObjectArray *)remaining __attribute__((deprecated));

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_init(ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim *self);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset_Builder *ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_builder(void);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_ofWithId_(id element);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_ofWithId_withId_(id e1, id e2);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_ofWithId_withId_withId_(id e1, id e2, id e3);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_ofWithId_withId_withId_withId_(id e1, id e2, id e3, id e4);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_ofWithId_withId_withId_withId_withId_(id e1, id e2, id e3, id e4, id e5);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_ofWithId_withId_withId_withId_withId_withId_withNSObjectArray_(id e1, id e2, id e3, id e4, id e5, id e6, IOSObjectArray *remaining);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_copyOfWithNSObjectArray_(IOSObjectArray *elements);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim")
