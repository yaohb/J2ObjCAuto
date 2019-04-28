//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/com/google/common/collect/Ordering.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectOrdering")
#ifdef RESTRICT_ComGoogleCommonCollectOrdering
#define INCLUDE_ALL_ComGoogleCommonCollectOrdering 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectOrdering 1
#endif
#undef RESTRICT_ComGoogleCommonCollectOrdering
#ifdef INCLUDE_ComGoogleCommonCollectOrdering_ArbitraryOrdering
#define INCLUDE_ComGoogleCommonCollectOrdering 1
#endif

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectOrdering_) && (INCLUDE_ALL_ComGoogleCommonCollectOrdering || defined(INCLUDE_ComGoogleCommonCollectOrdering))
#define ComGoogleCommonCollectOrdering_

#define RESTRICT_JavaUtilComparator 1
#define INCLUDE_JavaUtilComparator 1
#include "java/util/Comparator.h"

@class ComGoogleCommonCollectImmutableList;
@class IOSObjectArray;
@protocol ComGoogleCommonBaseFunction;
@protocol JavaLangIterable;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilFunctionToDoubleFunction;
@protocol JavaUtilFunctionToIntFunction;
@protocol JavaUtilFunctionToLongFunction;
@protocol JavaUtilIterator;
@protocol JavaUtilList;

/*!
 @brief A comparator, with additional methods to support common operations.This is an "enriched" version
  of <code>Comparator</code> for pre-Java-8 users, in the same sense that <code>FluentIterable</code> is an
  enriched <code>Iterable</code> for pre-Java-8 users.
 <h3>Three types of methods</h3>
  Like other fluent types, there are three types of methods present: methods for <i>acquiring</i>,
  <i>chaining</i>, and <i>using</i>.
  
 <h4>Acquiring</h4>
  
 <p>The common ways to get an instance of <code>Ordering</code> are: 
 <ul>
    <li>Subclass it and implement <code>compare</code> instead of implementing <code>Comparator</code>
        directly   
 <li>Pass a <i>pre-existing</i> <code>Comparator</code> instance to <code>from(Comparator)</code>
    <li>Use the natural ordering, <code>Ordering.natural</code>
  </ul>
  
 <h4>Chaining</h4>
  
 <p>Then you can use the <i>chaining</i> methods to get an altered version of that <code>Ordering</code>
 , including: 
 <ul>
    <li><code>reverse</code>
    <li><code>compound(Comparator)</code>
    <li><code>onResultOf(Function)</code>
    <li><code>nullsFirst</code> / <code>nullsLast</code>
  </ul>
  
 <h4>Using</h4>
  
 <p>Finally, use the resulting <code>Ordering</code> anywhere a <code>Comparator</code> is required, or use
  any of its special operations, such as: 
 <ul>
    <li><code>immutableSortedCopy</code>
    <li><code>isOrdered</code> / <code>isStrictlyOrdered</code>
    <li><code>min</code> / <code>max</code>
  </ul>
  
 <h3>Understanding complex orderings</h3>
  
 <p>Complex chained orderings like the following example can be challenging to understand. 
 @code
 Ordering<Foo> ordering =
      Ordering.natural()
          .nullsFirst()
          .onResultOf(getBarFunction)
          .nullsLast(); 
 
@endcode
  Note that each chaining method returns a new ordering instance which is backed by the previous
  instance, but has the chance to act on values <i>before</i> handing off to that backing instance.
  As a result, it usually helps to read chained ordering expressions <i>backwards</i>. For example,
  when <code>compare</code> is called on the above ordering: 
 <ol>
    <li>First, if only one <code>Foo</code> is null, that null value is treated as <i>greater</i>
    <li>Next, non-null <code>Foo</code> values are passed to <code>getBarFunction</code> (we will be
        comparing <code>Bar</code> values from now on)
    <li>Next, if only one <code>Bar</code> is null, that null value is treated as <i>lesser</i>
    <li>Finally, natural ordering is used (i.e. the result of <code>Bar.compareTo(Bar)</code> is
        returned) 
 </ol>
  
 <p>Alas, <code>reverse</code> is a little different. As you read backwards through a chain and
  encounter a call to <code>reverse</code>, continue working backwards until a result is determined, and
  then reverse that result. 
 <h3>Additional notes</h3>
  
 <p>Except as noted, the orderings returned by the factory methods of this class are serializable
  if and only if the provided instances that back them are. For example, if <code>ordering</code> and 
 <code>function</code> can themselves be serialized, then <code>ordering.onResultOf(function)</code> can as
  well. 
 <h3>For Java 8 users</h3>
  
 <p>If you are using Java 8, this class is now obsolete. Most of its functionality is now provided
  by <code>Stream</code> and by <code>Comparator</code> itself, and the rest can now
  be found as static methods in our new <code>Comparators</code> class. See each method below for
  further instructions. Whenever possible, you should change any references of type <code>Ordering</code>
  to be of type <code>Comparator</code> instead. However, at this time we have no plan to 
 <i>deprecate</i> this class. 
 <p>Many replacements involve adopting <code>Stream</code>, and these changes can sometimes make your
  code verbose. Whenever following this advice, you should check whether <code>Stream</code> could be
  adopted more comprehensively in your code; the end result may be quite a bit simpler. 
 <h3>See also</h3>
  
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/OrderingExplained">
 <code>Ordering</code></a>.
 @author Jesse Wilson
 @author Kevin Bourrillion
 @since 2.0
 */
@interface ComGoogleCommonCollectOrdering : NSObject < JavaUtilComparator >
@property (readonly, class) jint LEFT_IS_GREATER NS_SWIFT_NAME(LEFT_IS_GREATER);
@property (readonly, class) jint RIGHT_IS_GREATER NS_SWIFT_NAME(RIGHT_IS_GREATER);

+ (jint)LEFT_IS_GREATER;

+ (jint)RIGHT_IS_GREATER;

#pragma mark Public

/*!
 @brief Returns an ordering which treats all values as equal, indicating "no ordering."
 Passing this
  ordering to any <i>stable</i> sort algorithm results in no change to the order of elements.
 Note especially that <code>sortedCopy</code> and <code>immutableSortedCopy</code> are stable, and in
  the returned instance these are implemented by simply copying the source list. 
 <p>Example:
  
 @code
 Ordering.allEqual().nullsLast().sortedCopy(
      asList(t, null, e, s, null, t, null)) 
 
@endcode
  
 <p>Assuming <code>t</code>, <code>e</code> and <code>s</code> are non-null, this returns <code>[t, e, s, t,
  null, null, null]</code>
  regardless of the true comparison order of those three values (which might
  not even implement <code>Comparable</code> at all). 
 <p><b>Warning:</b> by definition, this comparator is not <i>consistent with equals</i> (as
  defined here). Avoid its use in APIs, such as <code>TreeSet.TreeSet(Comparator)</code>
 , where such consistency is expected. 
 <p>The returned comparator is serializable. 
 <p><b>Java 8 users:</b> Use the lambda expression <code>(a, b) -> 0</code> instead (in certain cases
  you may need to cast that to <code>Comparator<YourType></code>).
 @since 13.0
 */
+ (ComGoogleCommonCollectOrdering *)allEqual;

/*!
 @brief Returns an arbitrary ordering over all objects, for which <code>compare(a, b) == 0</code> implies 
 <code>a == b</code> (identity equality).There is no meaning whatsoever to the order imposed, but it
  is constant for the life of the VM.
 <p>Because the ordering is identity-based, it is not "consistent with <code>Object.equals(Object)</code>
 " as defined by <code>Comparator</code>. Use caution when building a <code>SortedSet</code>
  or <code>SortedMap</code> from it, as the resulting collection will not behave exactly
  according to spec. 
 <p>This ordering is not serializable, as its implementation relies on <code>System.identityHashCode(Object)</code>
 , so its behavior cannot be preserved across serialization.
 @since 2.0
 */
+ (ComGoogleCommonCollectOrdering *)arbitrary;

/*!
 @brief <code>Searches</code> <code>sortedList</code> for 
 <code>key</code> using the binary search algorithm.The list must be sorted using this ordering.
 @param sortedList the list to be searched
 @param key the key to be searched for
 */
- (jint)binarySearchWithJavaUtilList:(id<JavaUtilList>)sortedList
                              withId:(id)key __attribute__((deprecated));

- (jint)compareWithId:(id)left
               withId:(id)right;

/*!
 @brief Returns an ordering which first uses the ordering <code>this</code>, but which in the event of a
  "tie", then delegates to <code>secondaryComparator</code>.For example, to sort a bug list first by
  status and second by priority, you might use <code>byStatus.compound(byPriority)</code>.
 For a
  compound ordering with three or more components, simply chain multiple calls to this method. 
 <p>An ordering produced by this method, or a chain of calls to this method, is equivalent to
  one created using <code>Ordering.compound(Iterable)</code> on the same component comparators. 
 <p><b>Java 8 users:</b> Use <code>thisComparator.thenComparing(secondaryComparator)</code> instead.
  Depending on what <code>secondaryComparator</code> is, one of the other overloads of <code>thenComparing</code>
  may be even more useful.
 */
- (ComGoogleCommonCollectOrdering *)compoundWithJavaUtilComparator:(id<JavaUtilComparator>)secondaryComparator;

/*!
 @brief Returns an ordering which tries each given comparator in order until a non-zero result is
  found, returning that result, and returning zero only if all comparators return zero.The
  returned ordering is based on the state of the <code>comparators</code> iterable at the time it was
  provided to this method.
 <p>The returned ordering is equivalent to that produced using <code>Ordering.from(comp1).compound(comp2).compound(comp3) . . .</code>
 .
  
 <p><b>Warning:</b> Supplying an argument with undefined iteration order, such as a <code>HashSet</code>
 , will produce non-deterministic results. 
 <p><b>Java 8 users:</b> Use a chain of calls to <code>Comparator.thenComparing(Comparator)</code>,
  or <code>comparatorCollection.stream().reduce(Comparator::thenComparing).get()</code> (if the
  collection might be empty, also provide a default comparator as the <code>identity</code> parameter
  to <code>reduce</code>).
 @param comparators the comparators to try in order
 */
+ (ComGoogleCommonCollectOrdering *)compoundWithJavaLangIterable:(id<JavaLangIterable>)comparators;

/*!
 @brief Returns an ordering that compares objects according to the order in which they appear in the
  given list.Only objects present in the list (according to <code>Object.equals</code>) may be
  compared.
 This comparator imposes a "partial ordering" over the type <code>T</code>. Subsequent
  changes to the <code>valuesInOrder</code> list will have no effect on the returned comparator. Null
  values in the list are not supported. 
 <p>The returned comparator throws a <code>ClassCastException</code> when it receives an input
  parameter that isn't among the provided values. 
 <p>The generated comparator is serializable if all the provided values are serializable.
 @param valuesInOrder the values that the returned comparator will be able to compare, in the      order the comparator should induce
 @return the comparator described above
 @throw NullPointerExceptionif any of the provided values is null
 @throw IllegalArgumentExceptionif <code>valuesInOrder</code> contains any duplicate values
      (according to <code>Object.equals</code>)
 */
+ (ComGoogleCommonCollectOrdering *)explicit__WithJavaUtilList:(id<JavaUtilList>)valuesInOrder;

/*!
 @brief Returns an ordering that compares objects according to the order in which they are given to
  this method.Only objects present in the argument list (according to <code>Object.equals</code>) may
  be compared.
 This comparator imposes a "partial ordering" over the type <code>T</code>. Null values
  in the argument list are not supported. 
 <p>The returned comparator throws a <code>ClassCastException</code> when it receives an input
  parameter that isn't among the provided values. 
 <p>The generated comparator is serializable if all the provided values are serializable.
 @param leastValue the value which the returned comparator should consider the "least" of all      values
 @param remainingValuesInOrder the rest of the values that the returned comparator will be able      to compare, in the order the comparator should follow
 @return the comparator described above
 @throw NullPointerExceptionif any of the provided values is null
 @throw IllegalArgumentExceptionif any duplicate values (according to <code>Object.equals(Object)</code>
 ) are present among the method arguments
 */
+ (ComGoogleCommonCollectOrdering *)explicit__WithId:(id)leastValue
                                   withNSObjectArray:(IOSObjectArray *)remainingValuesInOrder;

/*!
 @brief Returns an ordering based on an <i>existing</i> comparator instance.Note that it is
  unnecessary to create a <i>new</i> anonymous inner class implementing <code>Comparator</code> just
  to pass it in here.
 Instead, simply subclass <code>Ordering</code> and implement its <code>compare</code>
  method directly. 
 <p><b>Java 8 users:</b> this class is now obsolete as explained in the class documentation, so
  there is no need to use this method.
 @param comparator the comparator that defines the order
 @return comparator itself if it is already an <code>Ordering</code>; otherwise an ordering that
      wraps that comparator
 */
+ (ComGoogleCommonCollectOrdering *)fromWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

/*!
 @brief Simply returns its argument.
 */
+ (ComGoogleCommonCollectOrdering *)fromWithComGoogleCommonCollectOrdering:(ComGoogleCommonCollectOrdering *)ordering __attribute__((deprecated));

/*!
 @brief Returns the <code>k</code> greatest elements of the given iterable according to this ordering, in
  order from greatest to least.If there are fewer than <code>k</code> elements present, all will be
  included.
 <p>The implementation does not necessarily use a <i>stable</i> sorting algorithm; when multiple
  elements are equivalent, it is undefined which will come first. 
 <p><b>Java 8 users:</b> Continue to use this method for now. After the next release of Guava, use 
 <code>Streams.stream(iterable).collect(Comparators.greatest(k, thisComparator))</code> instead.
 @return an immutable <code>RandomAccess</code> list of the <code>k</code> greatest elements in
      <i>descending order</i>
 @throw IllegalArgumentExceptionif <code>k</code> is negative
 @since 8.0
 */
- (id<JavaUtilList>)greatestOfWithJavaLangIterable:(id<JavaLangIterable>)iterable
                                           withInt:(jint)k;

/*!
 @brief Returns the <code>k</code> greatest elements from the given iterator according to this ordering, in
  order from greatest to least.If there are fewer than <code>k</code> elements present, all will be
  included.
 <p>The implementation does not necessarily use a <i>stable</i> sorting algorithm; when multiple
  elements are equivalent, it is undefined which will come first. 
 <p><b>Java 8 users:</b> Continue to use this method for now. After the next release of Guava, use 
 <code>Streams.stream(iterator).collect(Comparators.greatest(k, thisComparator))</code> instead.
 @return an immutable <code>RandomAccess</code> list of the <code>k</code> greatest elements in
      <i>descending order</i>
 @throw IllegalArgumentExceptionif <code>k</code> is negative
 @since 14.0
 */
- (id<JavaUtilList>)greatestOfWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
                                           withInt:(jint)k;

/*!
 @brief Returns an <b>immutable</b> list containing <code>elements</code> sorted by this ordering.The input
  is not modified.
 <p>Unlike <code>Sets.newTreeSet(Iterable)</code>, this method does not discard elements that are
  duplicates according to the comparator. The sort performed is <i>stable</i>, meaning that such
  elements will appear in the returned list in the same order they appeared in <code>elements</code>.
  
 <p><b>Performance note:</b> According to our
  benchmarking
  on Open JDK 7, this method is the most efficient way to make a sorted copy of a collection.
 @throw NullPointerExceptionif any element of <code>elements</code> is <code>null</code>
 @since 3.0
 */
- (ComGoogleCommonCollectImmutableList *)immutableSortedCopyWithJavaLangIterable:(id<JavaLangIterable>)elements;

/*!
 @brief Returns <code>true</code> if each element in <code>iterable</code> after the first is greater than or
  equal to the element that preceded it, according to this ordering.Note that this is always
  true when the iterable has fewer than two elements.
 <p><b>Java 8 users:</b> Use the equivalent <code>Comparators.isInOrder(Iterable, Comparator)</code>
  instead, since the rest of <code>Ordering</code> is mostly obsolete (as explained in the class
  documentation).
 */
- (jboolean)isOrderedWithJavaLangIterable:(id<JavaLangIterable>)iterable;

/*!
 @brief Returns <code>true</code> if each element in <code>iterable</code> after the first is <i>strictly</i>
  greater than the element that preceded it, according to this ordering.Note that this is always
  true when the iterable has fewer than two elements.
 <p><b>Java 8 users:</b> Use the equivalent <code>Comparators.isInStrictOrder(Iterable,
 Comparator)</code>
  instead, since the rest of <code>Ordering</code> is mostly obsolete (as explained in
  the class documentation).
 */
- (jboolean)isStrictlyOrderedWithJavaLangIterable:(id<JavaLangIterable>)iterable;

/*!
 @brief Returns the <code>k</code> least elements of the given iterable according to this ordering, in order
  from least to greatest.If there are fewer than <code>k</code> elements present, all will be
  included.
 <p>The implementation does not necessarily use a <i>stable</i> sorting algorithm; when multiple
  elements are equivalent, it is undefined which will come first. 
 <p><b>Java 8 users:</b> Continue to use this method for now. After the next release of Guava, use 
 <code>Streams.stream(iterable).collect(Comparators.least(k, thisComparator))</code> instead.
 @return an immutable <code>RandomAccess</code> list of the <code>k</code> least elements in ascending
      order
 @throw IllegalArgumentExceptionif <code>k</code> is negative
 @since 8.0
 */
- (id<JavaUtilList>)leastOfWithJavaLangIterable:(id<JavaLangIterable>)iterable
                                        withInt:(jint)k;

/*!
 @brief Returns the <code>k</code> least elements from the given iterator according to this ordering, in
  order from least to greatest.If there are fewer than <code>k</code> elements present, all will be
  included.
 <p>The implementation does not necessarily use a <i>stable</i> sorting algorithm; when multiple
  elements are equivalent, it is undefined which will come first. 
 <p><b>Java 8 users:</b> Continue to use this method for now. After the next release of Guava, use 
 <code>Streams.stream(iterator).collect(Comparators.least(k, thisComparator))</code> instead.
 @return an immutable <code>RandomAccess</code> list of the <code>k</code> least elements in ascending
      order
 @throw IllegalArgumentExceptionif <code>k</code> is negative
 @since 14.0
 */
- (id<JavaUtilList>)leastOfWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
                                        withInt:(jint)k;

/*!
 @brief Returns a new ordering which sorts iterables by comparing corresponding elements pairwise until
  a nonzero result is found; imposes "dictionary order".If the end of one iterable is reached,
  but not the other, the shorter iterable is considered to be less than the longer one.
 For
  example, a lexicographical natural ordering over integers considers <code>[] < [1] < [1, 1] <
  [1, 2] < [2]</code>
 .
  
 <p>Note that <code>ordering.lexicographical().reverse()</code> is not equivalent to <code>ordering.reverse().lexicographical()</code>
  (consider how each would order <code>[1]</code> and <code>[1,
  1]</code>
 ).
  
 <p><b>Java 8 users:</b> Use <code>Comparators.lexicographical(Comparator)</code> instead.
 @since 2.0
 */
- (ComGoogleCommonCollectOrdering *)lexicographical;

/*!
 @brief Returns the greater of the two values according to this ordering.If the values compare as 0,
  the first is returned.
 <p><b>Implementation note:</b> this method is invoked by the default implementations of the
  other <code>max</code> overloads, so overriding it will affect their behavior. 
 <p><b>Java 8 users:</b> Use <code>Collections.max(Arrays.asList(a, b), thisComparator)</code>
  instead (but note that it does not guarantee which tied maximum element is returned).
 @param a value to compare, returned if greater than or equal to b.
 @param b value to compare.
 @throw ClassCastExceptionif the parameters are not <i>mutually comparable</i> under this
      ordering.
 */
- (id)maxWithId:(id)a
         withId:(id)b;

/*!
 @brief Returns the greatest of the specified values according to this ordering.If there are multiple
  greatest values, the first of those is returned.
 <p><b>Java 8 users:</b> Use <code>Collections.max(Arrays.asList(a, b, c...), thisComparator)</code>
  instead (but note that it does not guarantee which tied maximum element is returned).
 @param a value to compare, returned if greater than or equal to the rest.
 @param b value to compare
 @param c value to compare
 @param rest values to compare
 @throw ClassCastExceptionif the parameters are not <i>mutually comparable</i> under this
      ordering.
 */
- (id)maxWithId:(id)a
         withId:(id)b
         withId:(id)c
withNSObjectArray:(IOSObjectArray *)rest;

/*!
 @brief Returns the greatest of the specified values according to this ordering.If there are multiple
  greatest values, the first of those is returned.
 <p><b>Java 8 users:</b> If <code>iterable</code> is a <code>Collection</code>, use <code>Collections.max(collection, thisComparator)</code>
  instead. Otherwise, continue to use this method
  for now. After the next release of Guava, use <code>Streams.stream(iterable).max(thisComparator).get()</code>
  instead. Note that these alternatives do
  not guarantee which tied maximum element is returned)
 @param iterable the iterable whose maximum element is to be determined
 @throw NoSuchElementExceptionif <code>iterable</code> is empty
 @throw ClassCastExceptionif the parameters are not <i>mutually comparable</i> under this
      ordering.
 */
- (id)maxWithJavaLangIterable:(id<JavaLangIterable>)iterable;

/*!
 @brief Returns the greatest of the specified values according to this ordering.If there are multiple
  greatest values, the first of those is returned.
 The iterator will be left exhausted: its 
 <code>hasNext()</code> method will return <code>false</code>.
  
 <p><b>Java 8 users:</b> Continue to use this method for now. After the next release of Guava, use 
 <code>Streams.stream(iterator).max(thisComparator).get()</code> instead (but note that it does
  not guarantee which tied maximum element is returned).
 @param iterator the iterator whose maximum element is to be determined
 @throw NoSuchElementExceptionif <code>iterator</code> is empty
 @throw ClassCastExceptionif the parameters are not <i>mutually comparable</i> under this
      ordering.
 @since 11.0
 */
- (id)maxWithJavaUtilIterator:(id<JavaUtilIterator>)iterator;

/*!
 @brief Returns the lesser of the two values according to this ordering.If the values compare as 0,
  the first is returned.
 <p><b>Implementation note:</b> this method is invoked by the default implementations of the
  other <code>min</code> overloads, so overriding it will affect their behavior. 
 <p><b>Java 8 users:</b> Use <code>Collections.min(Arrays.asList(a, b), thisComparator)</code>
  instead (but note that it does not guarantee which tied minimum element is returned).
 @param a value to compare, returned if less than or equal to b.
 @param b value to compare.
 @throw ClassCastExceptionif the parameters are not <i>mutually comparable</i> under this
      ordering.
 */
- (id)minWithId:(id)a
         withId:(id)b;

/*!
 @brief Returns the least of the specified values according to this ordering.If there are multiple
  least values, the first of those is returned.
 <p><b>Java 8 users:</b> Use <code>Collections.min(Arrays.asList(a, b, c...), thisComparator)</code>
  instead (but note that it does not guarantee which tied minimum element is returned).
 @param a value to compare, returned if less than or equal to the rest.
 @param b value to compare
 @param c value to compare
 @param rest values to compare
 @throw ClassCastExceptionif the parameters are not <i>mutually comparable</i> under this
      ordering.
 */
- (id)minWithId:(id)a
         withId:(id)b
         withId:(id)c
withNSObjectArray:(IOSObjectArray *)rest;

/*!
 @brief Returns the least of the specified values according to this ordering.If there are multiple
  least values, the first of those is returned.
 <p><b>Java 8 users:</b> If <code>iterable</code> is a <code>Collection</code>, use <code>Collections.min(collection, thisComparator)</code>
  instead. Otherwise, continue to use this method
  for now. After the next release of Guava, use <code>Streams.stream(iterable).min(thisComparator).get()</code>
  instead. Note that these alternatives do
  not guarantee which tied minimum element is returned)
 @param iterable the iterable whose minimum element is to be determined
 @throw NoSuchElementExceptionif <code>iterable</code> is empty
 @throw ClassCastExceptionif the parameters are not <i>mutually comparable</i> under this
      ordering.
 */
- (id)minWithJavaLangIterable:(id<JavaLangIterable>)iterable;

/*!
 @brief Returns the least of the specified values according to this ordering.If there are multiple
  least values, the first of those is returned.
 The iterator will be left exhausted: its <code>hasNext()</code>
  method will return <code>false</code>.
  
 <p><b>Java 8 users:</b> Continue to use this method for now. After the next release of Guava, use 
 <code>Streams.stream(iterator).min(thisComparator).get()</code> instead (but note that it does
  not guarantee which tied minimum element is returned).
 @param iterator the iterator whose minimum element is to be determined
 @throw NoSuchElementExceptionif <code>iterator</code> is empty
 @throw ClassCastExceptionif the parameters are not <i>mutually comparable</i> under this
      ordering.
 @since 11.0
 */
- (id)minWithJavaUtilIterator:(id<JavaUtilIterator>)iterator;

/*!
 @brief Returns a serializable ordering that uses the natural order of the values.The ordering throws
  a <code>NullPointerException</code> when passed a null parameter.
 <p>The type specification is <code><C extends Comparable></code>, instead of the technically correct 
 <code><C extends Comparable<? super C>></code>, to support legacy types from before Java 5. 
 <p><b>Java 8 users:</b> use <code>Comparator.naturalOrder</code> instead.
 */
+ (ComGoogleCommonCollectOrdering *)natural;

/*!
 @brief Returns an ordering that treats <code>null</code> as less than all other values and uses <code>this</code>
  to compare non-null values.
 <p><b>Java 8 users:</b> Use <code>Comparator.nullsFirst(thisComparator)</code> instead.
 */
- (ComGoogleCommonCollectOrdering *)nullsFirst;

/*!
 @brief Returns an ordering that treats <code>null</code> as greater than all other values and uses this
  ordering to compare non-null values.
 <p><b>Java 8 users:</b> Use <code>Comparator.nullsLast(thisComparator)</code> instead.
 */
- (ComGoogleCommonCollectOrdering *)nullsLast;

/*!
 @brief Returns a new ordering on <code>F</code> which orders elements by first applying a function to them,
  then comparing those results using <code>this</code>.For example, to compare objects by their
  string forms, in a case-insensitive manner, use: 
 @code
 Ordering.from(String.CASE_INSENSITIVE_ORDER)
      .onResultOf(Functions.toStringFunction()) 
 
@endcode
  
 <p><b>Java 8 users:</b> Use <code>Comparator.comparing(function, thisComparator)</code> instead (you
  can omit the comparator if it is the natural order).
 */
- (ComGoogleCommonCollectOrdering *)onResultOfWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

/*!
 @brief Returns the reverse of this ordering; the <code>Ordering</code> equivalent to <code>Collections.reverseOrder(Comparator)</code>
 .
 <p><b>Java 8 users:</b> Use <code>thisComparator.reversed()</code> instead.
 */
- (ComGoogleCommonCollectOrdering *)reverse;

/*!
 @brief Returns a <b>mutable</b> list containing <code>elements</code> sorted by this ordering; use this
  only when the resulting list may need further modification, or may contain <code>null</code>.The
  input is not modified.
 The returned list is serializable and has random access. 
 <p>Unlike <code>Sets.newTreeSet(Iterable)</code>, this method does not discard elements that are
  duplicates according to the comparator. The sort performed is <i>stable</i>, meaning that such
  elements will appear in the returned list in the same order they appeared in <code>elements</code>.
  
 <p><b>Performance note:</b> According to our
  benchmarking
  on Open JDK 7, <code>immutableSortedCopy</code> generally performs better (in both time and space)
  than this method, and this method in turn generally performs better than copying the list and
  calling <code>Collections.sort(List)</code>.
 */
- (id<JavaUtilList>)sortedCopyWithJavaLangIterable:(id<JavaLangIterable>)elements;

/*!
 @brief Returns an ordering that compares objects by the natural ordering of their string
  representations as returned by <code>toString()</code>.It does not support null values.
 <p>The comparator is serializable. 
 <p><b>Java 8 users:</b> Use <code>Comparator.comparing(Object::toString)</code> instead.
 */
+ (ComGoogleCommonCollectOrdering *)usingToString;

#pragma mark Protected

/*!
 @brief Constructs a new instance of this class (only invokable by the subclass constructor, typically
  implicit).
 */
- (instancetype __nonnull)init;

#pragma mark Package-Private

- (ComGoogleCommonCollectOrdering *)onKeys;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectOrdering)

inline jint ComGoogleCommonCollectOrdering_get_LEFT_IS_GREATER(void);
#define ComGoogleCommonCollectOrdering_LEFT_IS_GREATER 1
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonCollectOrdering, LEFT_IS_GREATER, jint)

inline jint ComGoogleCommonCollectOrdering_get_RIGHT_IS_GREATER(void);
#define ComGoogleCommonCollectOrdering_RIGHT_IS_GREATER -1
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonCollectOrdering, RIGHT_IS_GREATER, jint)

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_natural(void);

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_fromWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_fromWithComGoogleCommonCollectOrdering_(ComGoogleCommonCollectOrdering *ordering);

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_explicit__WithJavaUtilList_(id<JavaUtilList> valuesInOrder);

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_explicit__WithId_withNSObjectArray_(id leastValue, IOSObjectArray *remainingValuesInOrder);

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_allEqual(void);

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_usingToString(void);

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_arbitrary(void);

FOUNDATION_EXPORT void ComGoogleCommonCollectOrdering_init(ComGoogleCommonCollectOrdering *self);

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_compoundWithJavaLangIterable_(id<JavaLangIterable> comparators);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectOrdering)

#endif

#if !defined (ComGoogleCommonCollectOrdering_ArbitraryOrdering_) && (INCLUDE_ALL_ComGoogleCommonCollectOrdering || defined(INCLUDE_ComGoogleCommonCollectOrdering_ArbitraryOrdering))
#define ComGoogleCommonCollectOrdering_ArbitraryOrdering_

@interface ComGoogleCommonCollectOrdering_ArbitraryOrdering : ComGoogleCommonCollectOrdering

#pragma mark Public

- (jint)compareWithId:(id)left
               withId:(id)right;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype __nonnull)init;

- (jint)identityHashCodeWithId:(id)object;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectOrdering_ArbitraryOrdering)

FOUNDATION_EXPORT void ComGoogleCommonCollectOrdering_ArbitraryOrdering_init(ComGoogleCommonCollectOrdering_ArbitraryOrdering *self);

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering_ArbitraryOrdering *new_ComGoogleCommonCollectOrdering_ArbitraryOrdering_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering_ArbitraryOrdering *create_ComGoogleCommonCollectOrdering_ArbitraryOrdering_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectOrdering_ArbitraryOrdering)

#endif

#if !defined (ComGoogleCommonCollectOrdering_IncomparableValueException_) && (INCLUDE_ALL_ComGoogleCommonCollectOrdering || defined(INCLUDE_ComGoogleCommonCollectOrdering_IncomparableValueException))
#define ComGoogleCommonCollectOrdering_IncomparableValueException_

#define RESTRICT_JavaLangClassCastException 1
#define INCLUDE_JavaLangClassCastException 1
#include "java/lang/ClassCastException.h"

/*!
 @brief Exception thrown by a <code>Ordering.explicit(List)</code> or <code>Ordering.explicit(Object,
 Object[])</code>
  comparator when comparing a value outside the set of values it can compare.
 Extending <code>ClassCastException</code> may seem odd, but it is required.
 */
@interface ComGoogleCommonCollectOrdering_IncomparableValueException : JavaLangClassCastException {
 @public
  id value_;
}

#pragma mark Package-Private

- (instancetype __nonnull)initWithId:(id)value;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectOrdering_IncomparableValueException)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectOrdering_IncomparableValueException, value_, id)

FOUNDATION_EXPORT void ComGoogleCommonCollectOrdering_IncomparableValueException_initWithId_(ComGoogleCommonCollectOrdering_IncomparableValueException *self, id value);

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering_IncomparableValueException *new_ComGoogleCommonCollectOrdering_IncomparableValueException_initWithId_(id value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering_IncomparableValueException *create_ComGoogleCommonCollectOrdering_IncomparableValueException_initWithId_(id value);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectOrdering_IncomparableValueException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectOrdering")
