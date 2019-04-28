//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/primitives/ImmutableDoubleArray.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesImmutableDoubleArray")
#ifdef RESTRICT_ComGoogleCommonPrimitivesImmutableDoubleArray
#define INCLUDE_ALL_ComGoogleCommonPrimitivesImmutableDoubleArray 0
#else
#define INCLUDE_ALL_ComGoogleCommonPrimitivesImmutableDoubleArray 1
#endif
#undef RESTRICT_ComGoogleCommonPrimitivesImmutableDoubleArray

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonPrimitivesImmutableDoubleArray_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesImmutableDoubleArray || defined(INCLUDE_ComGoogleCommonPrimitivesImmutableDoubleArray))
#define ComGoogleCommonPrimitivesImmutableDoubleArray_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class ComGoogleCommonPrimitivesImmutableDoubleArray_Builder;
@class IOSDoubleArray;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilFunctionDoubleConsumer;
@protocol JavaUtilList;
@protocol JavaUtilStreamDoubleStream;

/*!
 @brief An immutable array of <code>double</code> values, with an API resembling <code>List</code>.
 <p>Advantages compared to <code>double[]</code>:
  
 <ul>
    <li>All the many well-known advantages of immutability (read <i>Effective Java</i>, second
        edition, Item 15).   
 <li>Has the value-based (not identity-based) <code>equals</code>, <code>hashCode</code>, and <code>toString</code>
  behavior you expect.
    <li>Offers useful operations beyond just <code>get</code> and <code>length</code>, so you don't have to
        hunt through classes like <code>Arrays</code> and <code>Doubles</code> for them.
    <li>Supports a copy-free <code>subArray</code> view, so methods that accept this type don't need to
        add overloads that accept start and end indexes.   
 <li>Can be streamed without "breaking the chain": <code>foo.getBarDoubles().stream()...</code>.
    <li>Access to all collection-based utilities via <code>asList</code> (though at the cost of
        allocating garbage). 
 </ul>
  
 <p>Disadvantages compared to <code>double[]</code>:
  
 <ul>
    <li>Memory footprint has a fixed overhead (about 24 bytes per instance).
    <li><i>Some</i> construction use cases force the data to be copied (though several construction
        APIs are offered that don't).   
 <li>Can't be passed directly to methods that expect <code>double[]</code> (though the most common
        utilities do have replacements here).   
 <li>Dependency on <code>com.google.common</code> / Guava. 
 </ul>
  
 <p>Advantages compared to <code>ImmutableList</code><code><Double></code>
 :
  
 <ul>
    <li>Improved memory compactness and locality.
    <li>Can be queried without allocating garbage.
    <li>Access to <code>DoubleStream</code> features (like <code>DoubleStream.sum</code>) using <code>stream()</code>
  instead of the awkward <code>stream().mapToDouble(v -> v)</code>.
  </ul>
  
 <p>Disadvantages compared to <code>ImmutableList<Double></code>:
  
 <ul>
    <li>Can't be passed directly to methods that expect <code>Iterable</code>, <code>Collection</code>, or
        <code>List</code> (though the most common utilities do have replacements here, and there is a
        lazy <code>asList</code> view). 
 </ul>
 @since 22.0
 */
@interface ComGoogleCommonPrimitivesImmutableDoubleArray : NSObject < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Returns an immutable <i>view</i> of this array's values as a <code>List</code>; note that <code>double</code>
  values are boxed into <code>Double</code> instances on demand, which can be very expensive.
 The returned list should be used once and discarded. For any usages beyond that, pass the
  returned list to <code>ImmutableList.copyOf</code>
  and use that list instead.
 */
- (id<JavaUtilList>)asList;

/*!
 @brief Returns a new, empty builder for <code>ImmutableDoubleArray</code> instances, with a default initial
  capacity.The returned builder is not thread-safe.
 <p><b>Performance note:</b> The <code>ImmutableDoubleArray</code> that is built will very likely
  occupy more memory than necessary; to trim memory usage, build using <code>builder.build().trimmed()</code>
 .
 */
+ (ComGoogleCommonPrimitivesImmutableDoubleArray_Builder *)builder;

/*!
 @brief Returns a new, empty builder for <code>ImmutableDoubleArray</code> instances, sized to hold up to 
 <code>initialCapacity</code> values without resizing.The returned builder is not thread-safe.
 <p><b>Performance note:</b> When feasible, <code>initialCapacity</code> should be the exact number
  of values that will be added, if that knowledge is readily available. It is better to guess a
  value slightly too high than slightly too low. If the value is not exact, the <code>ImmutableDoubleArray</code>
  that is built will very likely occupy more memory than strictly
  necessary; to trim memory usage, build using <code>builder.build().trimmed()</code>.
 */
+ (ComGoogleCommonPrimitivesImmutableDoubleArray_Builder *)builderWithInt:(jint)initialCapacity;

/*!
 @brief Returns <code>true</code> if <code>target</code> is present at any index in this array.Values are
  compared as if by <code>Double.equals</code>.
 Equivalent to <code>asList().contains(target)</code>.
 */
- (jboolean)containsWithDouble:(jdouble)target;

/*!
 @brief Returns an immutable array containing the given values, in order.
 */
+ (ComGoogleCommonPrimitivesImmutableDoubleArray *)copyOfWithJavaUtilCollection:(id<JavaUtilCollection>)values OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns an immutable array containing the given values, in order.
 */
+ (ComGoogleCommonPrimitivesImmutableDoubleArray *)copyOfWithDoubleArray:(IOSDoubleArray *)values OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns an immutable array containing all the values from <code>stream</code>, in order.
 */
+ (ComGoogleCommonPrimitivesImmutableDoubleArray *)copyOfWithJavaUtilStreamDoubleStream:(id<JavaUtilStreamDoubleStream>)stream OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns an immutable array containing the given values, in order.
 <p><b>Performance note:</b> this method delegates to <code>copyOf(Collection)</code> if <code>values</code>
  is a <code>Collection</code>. Otherwise it creates a <code>builder</code> and uses <code>Builder.addAll(Iterable)</code>
 , with all the performance implications associated with that.
 */
+ (ComGoogleCommonPrimitivesImmutableDoubleArray *)copyOfWithJavaLangIterable:(id<JavaLangIterable>)values OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns <code>true</code> if <code>object</code> is an <code>ImmutableDoubleArray</code> containing the same
  values as this one, in the same order.Values are compared as if by <code>Double.equals</code>.
 */
- (jboolean)isEqual:(id __nullable)object;

/*!
 @brief Invokes <code>consumer</code> for each value contained in this array, in order.
 */
- (void)forEachWithJavaUtilFunctionDoubleConsumer:(id<JavaUtilFunctionDoubleConsumer>)consumer;

/*!
 @brief Returns the <code>double</code> value present at the given index.
 @throw IndexOutOfBoundsExceptionif <code>index</code> is negative, or greater than or equal to
      <code>length</code>
 */
- (jdouble)getWithInt:(jint)index;

/*!
 @brief Returns an unspecified hash code for the contents of this immutable array.
 */
- (NSUInteger)hash;

/*!
 @brief Returns the smallest index for which <code>get</code> returns <code>target</code>, or <code>-1</code> if no
  such index exists.Values are compared as if by <code>Double.equals</code>.
 Equivalent to <code>asList().indexOf(target)</code>
 .
 */
- (jint)indexOfWithDouble:(jdouble)target;

/*!
 @brief Returns <code>true</code> if there are no values in this array (<code>length</code> is zero).
 */
- (jboolean)isEmpty;

/*!
 @brief Returns the largest index for which <code>get</code> returns <code>target</code>, or <code>-1</code> if no
  such index exists.Values are compared as if by <code>Double.equals</code>.
 Equivalent to <code>asList().lastIndexOf(target)</code>
 .
 */
- (jint)lastIndexOfWithDouble:(jdouble)target;

/*!
 @brief Returns the number of values in this array.
 */
- (jint)length;

/*!
 @brief Returns the empty array.
 */
+ (ComGoogleCommonPrimitivesImmutableDoubleArray *)of;

/*!
 @brief Returns an immutable array containing a single value.
 */
+ (ComGoogleCommonPrimitivesImmutableDoubleArray *)ofWithDouble:(jdouble)e0;

/*!
 @brief Returns an immutable array containing the given values, in order.
 */
+ (ComGoogleCommonPrimitivesImmutableDoubleArray *)ofWithDouble:(jdouble)e0
                                                     withDouble:(jdouble)e1;

/*!
 @brief Returns an immutable array containing the given values, in order.
 <p>The array <code>rest</code> must not be longer than <code>Integer.MAX_VALUE - 1</code>.
 */
+ (ComGoogleCommonPrimitivesImmutableDoubleArray *)ofWithDouble:(jdouble)first
                                                withDoubleArray:(IOSDoubleArray *)rest;

/*!
 @brief Returns an immutable array containing the given values, in order.
 */
+ (ComGoogleCommonPrimitivesImmutableDoubleArray *)ofWithDouble:(jdouble)e0
                                                     withDouble:(jdouble)e1
                                                     withDouble:(jdouble)e2;

/*!
 @brief Returns an immutable array containing the given values, in order.
 */
+ (ComGoogleCommonPrimitivesImmutableDoubleArray *)ofWithDouble:(jdouble)e0
                                                     withDouble:(jdouble)e1
                                                     withDouble:(jdouble)e2
                                                     withDouble:(jdouble)e3;

/*!
 @brief Returns an immutable array containing the given values, in order.
 */
+ (ComGoogleCommonPrimitivesImmutableDoubleArray *)ofWithDouble:(jdouble)e0
                                                     withDouble:(jdouble)e1
                                                     withDouble:(jdouble)e2
                                                     withDouble:(jdouble)e3
                                                     withDouble:(jdouble)e4;

/*!
 @brief Returns an immutable array containing the given values, in order.
 */
+ (ComGoogleCommonPrimitivesImmutableDoubleArray *)ofWithDouble:(jdouble)e0
                                                     withDouble:(jdouble)e1
                                                     withDouble:(jdouble)e2
                                                     withDouble:(jdouble)e3
                                                     withDouble:(jdouble)e4
                                                     withDouble:(jdouble)e5;

/*!
 @brief Returns a stream over the values in this array, in order.
 */
- (id<JavaUtilStreamDoubleStream>)stream;

/*!
 @brief Returns a new immutable array containing the values in the specified range.
 <p><b>Performance note:</b> The returned array has the same full memory footprint as this one
  does (no actual copying is performed). To reduce memory usage, use <code>subArray(start,
  end).trimmed()</code>
 .
 */
- (ComGoogleCommonPrimitivesImmutableDoubleArray *)subArrayWithInt:(jint)startIndex
                                                           withInt:(jint)endIndex;

/*!
 @brief Returns a new, mutable copy of this array's values, as a primitive <code>double[]</code>.
 */
- (IOSDoubleArray *)toArray;

/*!
 @brief Returns a string representation of this array in the same form as <code>Arrays.toString(double[])</code>
 , for example <code>"[1, 2, 3]"</code>.
 */
- (NSString *)description;

/*!
 @brief Returns an immutable array containing the same values as <code>this</code> array.This is logically
  a no-op, and in some circumstances <code>this</code> itself is returned.
 However, if this instance
  is a <code>subArray</code> view of a larger array, this method will copy only the appropriate range
  of values, resulting in an equivalent array with a smaller memory footprint.
 */
- (ComGoogleCommonPrimitivesImmutableDoubleArray *)trimmed;

#pragma mark Package-Private

- (id)readResolve;

- (id)writeReplace;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonPrimitivesImmutableDoubleArray)

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableDoubleArray *ComGoogleCommonPrimitivesImmutableDoubleArray_of(void);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableDoubleArray *ComGoogleCommonPrimitivesImmutableDoubleArray_ofWithDouble_(jdouble e0);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableDoubleArray *ComGoogleCommonPrimitivesImmutableDoubleArray_ofWithDouble_withDouble_(jdouble e0, jdouble e1);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableDoubleArray *ComGoogleCommonPrimitivesImmutableDoubleArray_ofWithDouble_withDouble_withDouble_(jdouble e0, jdouble e1, jdouble e2);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableDoubleArray *ComGoogleCommonPrimitivesImmutableDoubleArray_ofWithDouble_withDouble_withDouble_withDouble_(jdouble e0, jdouble e1, jdouble e2, jdouble e3);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableDoubleArray *ComGoogleCommonPrimitivesImmutableDoubleArray_ofWithDouble_withDouble_withDouble_withDouble_withDouble_(jdouble e0, jdouble e1, jdouble e2, jdouble e3, jdouble e4);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableDoubleArray *ComGoogleCommonPrimitivesImmutableDoubleArray_ofWithDouble_withDouble_withDouble_withDouble_withDouble_withDouble_(jdouble e0, jdouble e1, jdouble e2, jdouble e3, jdouble e4, jdouble e5);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableDoubleArray *ComGoogleCommonPrimitivesImmutableDoubleArray_ofWithDouble_withDoubleArray_(jdouble first, IOSDoubleArray *rest);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableDoubleArray *ComGoogleCommonPrimitivesImmutableDoubleArray_copyOfWithDoubleArray_(IOSDoubleArray *values);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableDoubleArray *ComGoogleCommonPrimitivesImmutableDoubleArray_copyOfWithJavaUtilCollection_(id<JavaUtilCollection> values);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableDoubleArray *ComGoogleCommonPrimitivesImmutableDoubleArray_copyOfWithJavaLangIterable_(id<JavaLangIterable> values);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableDoubleArray *ComGoogleCommonPrimitivesImmutableDoubleArray_copyOfWithJavaUtilStreamDoubleStream_(id<JavaUtilStreamDoubleStream> stream);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableDoubleArray_Builder *ComGoogleCommonPrimitivesImmutableDoubleArray_builderWithInt_(jint initialCapacity);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableDoubleArray_Builder *ComGoogleCommonPrimitivesImmutableDoubleArray_builder(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesImmutableDoubleArray)

#endif

#if !defined (ComGoogleCommonPrimitivesImmutableDoubleArray_Builder_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesImmutableDoubleArray || defined(INCLUDE_ComGoogleCommonPrimitivesImmutableDoubleArray_Builder))
#define ComGoogleCommonPrimitivesImmutableDoubleArray_Builder_

@class ComGoogleCommonPrimitivesImmutableDoubleArray;
@class IOSDoubleArray;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilStreamDoubleStream;

/*!
 @brief A builder for <code>ImmutableDoubleArray</code> instances; obtained using <code>ImmutableDoubleArray.builder</code>
 .
 */
@interface ComGoogleCommonPrimitivesImmutableDoubleArray_Builder : NSObject

#pragma mark Public

/*!
 @brief Appends <code>value</code> to the end of the values the built <code>ImmutableDoubleArray</code> will
  contain.
 */
- (ComGoogleCommonPrimitivesImmutableDoubleArray_Builder *)addWithDouble:(jdouble)value;

/*!
 @brief Appends <code>values</code>, in order, to the end of the values the built <code>ImmutableDoubleArray</code>
  will contain.
 */
- (ComGoogleCommonPrimitivesImmutableDoubleArray_Builder *)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)values;

/*!
 @brief Appends <code>values</code>, in order, to the end of the values the built <code>ImmutableDoubleArray</code>
  will contain.
 */
- (ComGoogleCommonPrimitivesImmutableDoubleArray_Builder *)addAllWithDoubleArray:(IOSDoubleArray *)values;

/*!
 @brief Appends all values from <code>stream</code>, in order, to the end of the values the built <code>ImmutableDoubleArray</code>
  will contain.
 */
- (ComGoogleCommonPrimitivesImmutableDoubleArray_Builder *)addAllWithJavaUtilStreamDoubleStream:(id<JavaUtilStreamDoubleStream>)stream;

/*!
 @brief Appends <code>values</code>, in order, to the end of the values the built <code>ImmutableDoubleArray</code>
  will contain.
 */
- (ComGoogleCommonPrimitivesImmutableDoubleArray_Builder *)addAllWithComGoogleCommonPrimitivesImmutableDoubleArray:(ComGoogleCommonPrimitivesImmutableDoubleArray *)values;

/*!
 @brief Appends <code>values</code>, in order, to the end of the values the built <code>ImmutableDoubleArray</code>
  will contain.
 */
- (ComGoogleCommonPrimitivesImmutableDoubleArray_Builder *)addAllWithJavaLangIterable:(id<JavaLangIterable>)values;

/*!
 @brief Returns a new immutable array.The builder can continue to be used after this call, to append
  more values and build again.
 <p><b>Performance note:</b> the returned array is backed by the same array as the builder, so
  no data is copied as part of this step, but this may occupy more memory than strictly
  necessary. To copy the data to a right-sized backing array, use <code>.build().trimmed()</code>.
 */
- (ComGoogleCommonPrimitivesImmutableDoubleArray *)build;

#pragma mark Package-Private

- (instancetype __nonnull)initWithInt:(jint)initialCapacity;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonPrimitivesImmutableDoubleArray_Builder)

FOUNDATION_EXPORT void ComGoogleCommonPrimitivesImmutableDoubleArray_Builder_initWithInt_(ComGoogleCommonPrimitivesImmutableDoubleArray_Builder *self, jint initialCapacity);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableDoubleArray_Builder *new_ComGoogleCommonPrimitivesImmutableDoubleArray_Builder_initWithInt_(jint initialCapacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableDoubleArray_Builder *create_ComGoogleCommonPrimitivesImmutableDoubleArray_Builder_initWithInt_(jint initialCapacity);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesImmutableDoubleArray_Builder)

#endif

#if !defined (ComGoogleCommonPrimitivesImmutableDoubleArray_AsList_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesImmutableDoubleArray || defined(INCLUDE_ComGoogleCommonPrimitivesImmutableDoubleArray_AsList))
#define ComGoogleCommonPrimitivesImmutableDoubleArray_AsList_

#define RESTRICT_JavaUtilAbstractList 1
#define INCLUDE_JavaUtilAbstractList 1
#include "java/util/AbstractList.h"

#define RESTRICT_JavaUtilRandomAccess 1
#define INCLUDE_JavaUtilRandomAccess 1
#include "java/util/RandomAccess.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaLangDouble;
@protocol JavaUtilList;
@protocol JavaUtilSpliterator;

@interface ComGoogleCommonPrimitivesImmutableDoubleArray_AsList : JavaUtilAbstractList < JavaUtilRandomAccess, JavaIoSerializable >

#pragma mark Public

- (jboolean)containsWithId:(id)target;

- (jboolean)isEqual:(id __nullable)object;

- (JavaLangDouble *)getWithInt:(jint)index;

- (NSUInteger)hash;

- (jint)indexOfWithId:(id)target;

- (jint)lastIndexOfWithId:(id)target;

- (JavaLangDouble *)removeWithInt:(jint)arg0;

- (JavaLangDouble *)setWithInt:(jint)arg0
                        withId:(JavaLangDouble *)arg1;

- (jint)size;

- (id<JavaUtilSpliterator>)spliterator;

- (id<JavaUtilList>)subListWithInt:(jint)fromIndex
                           withInt:(jint)toIndex;

- (NSString *)description;

#pragma mark Package-Private

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonPrimitivesImmutableDoubleArray_AsList)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesImmutableDoubleArray_AsList)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesImmutableDoubleArray")
