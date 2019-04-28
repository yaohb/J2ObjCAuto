//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/ForwardingNavigableSet.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingNavigableSet")
#ifdef RESTRICT_ComGoogleCommonCollectForwardingNavigableSet
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingNavigableSet 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingNavigableSet 1
#endif
#undef RESTRICT_ComGoogleCommonCollectForwardingNavigableSet

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectForwardingNavigableSet_) && (INCLUDE_ALL_ComGoogleCommonCollectForwardingNavigableSet || defined(INCLUDE_ComGoogleCommonCollectForwardingNavigableSet))
#define ComGoogleCommonCollectForwardingNavigableSet_

#define RESTRICT_ComGoogleCommonCollectForwardingSortedSet 1
#define INCLUDE_ComGoogleCommonCollectForwardingSortedSet 1
#include "com/google/common/collect/ForwardingSortedSet.h"

#define RESTRICT_JavaUtilNavigableSet 1
#define INCLUDE_JavaUtilNavigableSet 1
#include "java/util/NavigableSet.h"

@protocol JavaUtilIterator;
@protocol JavaUtilSortedSet;

/*!
 @brief A navigable set which forwards all its method calls to another navigable set.Subclasses should
  override one or more methods to modify the behavior of the backing set as desired per the <a href="http://en.wikipedia.org/wiki/Decorator_pattern">
 decorator pattern</a>.
 <p><b>Warning:</b> The methods of <code>ForwardingNavigableSet</code> forward <i>indiscriminately</i>
  to the methods of the delegate. For example, overriding <code>add</code> alone <i>will not</i> change
  the behavior of <code>addAll</code>, which can lead to unexpected behavior. In this case, you should
  override <code>addAll</code> as well, either providing your own implementation, or delegating to the
  provided <code>standardAddAll</code> method. 
 <p><b><code>default</code> method warning:</b> This class does <i>not</i> forward calls to <code>default</code>
  methods. Instead, it inherits their default implementations. When those implementations
  invoke methods, they invoke methods on the <code>ForwardingNavigableSet</code>.
  
 <p>Each of the <code>standard</code> methods uses the set's comparator (or the natural ordering of the
  elements, if there is no comparator) to test element equality. As a result, if the comparator is
  not consistent with equals, some of the standard implementations may violate the <code>Set</code>
  contract. 
 <p>The <code>standard</code> methods and the collection views they return are not guaranteed to be
  thread-safe, even when all of the methods that they depend on are thread-safe.
 @author Louis Wasserman
 @since 12.0
 */
@interface ComGoogleCommonCollectForwardingNavigableSet : ComGoogleCommonCollectForwardingSortedSet < JavaUtilNavigableSet >

#pragma mark Public

- (id)ceilingWithId:(id)e;

- (id<JavaUtilIterator>)descendingIterator;

- (id<JavaUtilNavigableSet>)descendingSet;

- (id)floorWithId:(id)e;

- (id<JavaUtilNavigableSet>)headSetWithId:(id)toElement
                              withBoolean:(jboolean)inclusive;

- (id)higherWithId:(id)e;

- (id)lowerWithId:(id)e;

- (id)pollFirst;

- (id)pollLast;

- (id<JavaUtilNavigableSet>)subSetWithId:(id)fromElement
                             withBoolean:(jboolean)fromInclusive
                                  withId:(id)toElement
                             withBoolean:(jboolean)toInclusive;

- (id<JavaUtilNavigableSet>)tailSetWithId:(id)fromElement
                              withBoolean:(jboolean)inclusive;

#pragma mark Protected

/*!
 @brief Constructor for use by subclasses.
 */
- (instancetype __nonnull)init;

- (id<JavaUtilNavigableSet>)delegate;

/*!
 @brief A sensible definition of <code>ceiling</code> in terms of the <code>iterator</code> method of <code>tailSet(Object, boolean)</code>
 .If you override <code>tailSet(Object, boolean)</code>, you may wish to
  override <code>ceiling</code> to forward to this implementation.
 */
- (id)standardCeilingWithId:(id)e;

- (id)standardFirst;

/*!
 @brief A sensible definition of <code>floor</code> in terms of the <code>descendingIterator</code> method of 
 <code>headSet(Object, boolean)</code>.If you override <code>headSet(Object, boolean)</code>, you may
  wish to override <code>floor</code> to forward to this implementation.
 */
- (id)standardFloorWithId:(id)e;

/*!
 @brief A sensible definition of <code>headSet(Object)</code> in terms of the <code>headSet(Object,
 boolean)</code>
  method.If you override <code>headSet(Object, boolean)</code>, you may wish to override 
 <code>headSet(Object)</code> to forward to this implementation.
 */
- (id<JavaUtilSortedSet>)standardHeadSetWithId:(id)toElement;

/*!
 @brief A sensible definition of <code>higher</code> in terms of the <code>iterator</code> method of <code>tailSet(Object, boolean)</code>
 .If you override <code>tailSet(Object, boolean)</code>, you may wish to
  override <code>higher</code> to forward to this implementation.
 */
- (id)standardHigherWithId:(id)e;

- (id)standardLast;

/*!
 @brief A sensible definition of <code>lower</code> in terms of the <code>descendingIterator</code> method of 
 <code>headSet(Object, boolean)</code>.If you override <code>headSet(Object, boolean)</code>, you may
  wish to override <code>lower</code> to forward to this implementation.
 */
- (id)standardLowerWithId:(id)e;

/*!
 @brief A sensible definition of <code>pollFirst</code> in terms of the <code>iterator</code> method.If you
  override <code>iterator</code> you may wish to override <code>pollFirst</code> to forward to this
  implementation.
 */
- (id)standardPollFirst;

/*!
 @brief A sensible definition of <code>pollLast</code> in terms of the <code>descendingIterator</code> method.
 If you override <code>descendingIterator</code> you may wish to override <code>pollLast</code> to
  forward to this implementation.
 */
- (id)standardPollLast;

/*!
 @brief A sensible definition of <code>subSet(Object, boolean, Object, boolean)</code> in terms of the 
 <code>headSet</code> and <code>tailSet</code> methods.In many cases, you may wish to override <code>subSet(Object, boolean, Object, boolean)</code>
  to forward to this implementation.
 */
- (id<JavaUtilNavigableSet>)standardSubSetWithId:(id)fromElement
                                     withBoolean:(jboolean)fromInclusive
                                          withId:(id)toElement
                                     withBoolean:(jboolean)toInclusive;

/*!
 @brief A sensible definition of <code>subSet(Object, Object)</code> in terms of the <code>subSet(Object,
 boolean, Object, boolean)</code>
  method.If you override <code>subSet(Object, boolean, Object,
 boolean)</code>
 , you may wish to override <code>subSet(Object, Object)</code> to forward to this
  implementation.
 */
- (id<JavaUtilSortedSet>)standardSubSetWithId:(id)fromElement
                                       withId:(id)toElement;

/*!
 @brief A sensible definition of <code>tailSet(Object)</code> in terms of the <code>tailSet(Object,
 boolean)</code>
  method.If you override <code>tailSet(Object, boolean)</code>, you may wish to override 
 <code>tailSet(Object)</code> to forward to this implementation.
 */
- (id<JavaUtilSortedSet>)standardTailSetWithId:(id)fromElement;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingNavigableSet)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingNavigableSet_init(ComGoogleCommonCollectForwardingNavigableSet *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingNavigableSet)

#endif

#if !defined (ComGoogleCommonCollectForwardingNavigableSet_StandardDescendingSet_) && (INCLUDE_ALL_ComGoogleCommonCollectForwardingNavigableSet || defined(INCLUDE_ComGoogleCommonCollectForwardingNavigableSet_StandardDescendingSet))
#define ComGoogleCommonCollectForwardingNavigableSet_StandardDescendingSet_

#define RESTRICT_ComGoogleCommonCollectSets 1
#define INCLUDE_ComGoogleCommonCollectSets_DescendingSet 1
#include "com/google/common/collect/Sets.h"

@class ComGoogleCommonCollectForwardingNavigableSet;
@protocol JavaUtilNavigableSet;

/*!
 @brief A sensible implementation of <code>NavigableSet.descendingSet</code> in terms of the other methods of 
 <code>NavigableSet</code>, notably including <code>NavigableSet.descendingIterator</code>.
 <p>In many cases, you may wish to override <code>ForwardingNavigableSet.descendingSet</code> to
  forward to this implementation or a subclass thereof.
 @since 12.0
 */
@interface ComGoogleCommonCollectForwardingNavigableSet_StandardDescendingSet : ComGoogleCommonCollectSets_DescendingSet

#pragma mark Public

/*!
 @brief Constructor for use by subclasses.
 */
- (instancetype __nonnull)initWithComGoogleCommonCollectForwardingNavigableSet:(ComGoogleCommonCollectForwardingNavigableSet *)outer$;

#pragma mark Package-Private

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaUtilNavigableSet:(id<JavaUtilNavigableSet>)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingNavigableSet_StandardDescendingSet)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingNavigableSet_StandardDescendingSet_initWithComGoogleCommonCollectForwardingNavigableSet_(ComGoogleCommonCollectForwardingNavigableSet_StandardDescendingSet *self, ComGoogleCommonCollectForwardingNavigableSet *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectForwardingNavigableSet_StandardDescendingSet *new_ComGoogleCommonCollectForwardingNavigableSet_StandardDescendingSet_initWithComGoogleCommonCollectForwardingNavigableSet_(ComGoogleCommonCollectForwardingNavigableSet *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectForwardingNavigableSet_StandardDescendingSet *create_ComGoogleCommonCollectForwardingNavigableSet_StandardDescendingSet_initWithComGoogleCommonCollectForwardingNavigableSet_(ComGoogleCommonCollectForwardingNavigableSet *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingNavigableSet_StandardDescendingSet)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingNavigableSet")
