//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/primitives/Chars.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesChars")
#ifdef RESTRICT_ComGoogleCommonPrimitivesChars
#define INCLUDE_ALL_ComGoogleCommonPrimitivesChars 0
#else
#define INCLUDE_ALL_ComGoogleCommonPrimitivesChars 1
#endif
#undef RESTRICT_ComGoogleCommonPrimitivesChars

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonPrimitivesChars_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesChars || defined(INCLUDE_ComGoogleCommonPrimitivesChars))
#define ComGoogleCommonPrimitivesChars_

@class IOSByteArray;
@class IOSCharArray;
@class IOSObjectArray;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilList;

/*!
 @brief Static utility methods pertaining to <code>char</code> primitives, that are not already found in
  either <code>Character</code> or <code>Arrays</code>.
 <p>All the operations in this class treat <code>char</code> values strictly numerically; they are
  neither Unicode-aware nor locale-dependent. 
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/PrimitivesExplained">
 primitive utilities</a>.
 @author Kevin Bourrillion
 @since 1.0
 */
@interface ComGoogleCommonPrimitivesChars : NSObject
@property (readonly, class) jint BYTES NS_SWIFT_NAME(BYTES);

+ (jint)BYTES;

#pragma mark Public

/*!
 @brief Returns a fixed-size list backed by the specified array, similar to <code>Arrays.asList(Object[])</code>
 .The list supports <code>List.set(int, Object)</code>, but any attempt to
  set a value to <code>null</code> will result in a <code>NullPointerException</code>.
 <p>The returned list maintains the values, but not the identities, of <code>Character</code> objects
  written to or read from it. For example, whether <code>list.get(0) == list.get(0)</code> is true for
  the returned list is unspecified.
 @param backingArray the array to back the list
 @return a list view of the array
 */
+ (id<JavaUtilList>)asListWithCharArray:(IOSCharArray *)backingArray;

/*!
 @brief Returns the <code>char</code> value that is equal to <code>value</code>, if possible.
 @param value any value in the range of the <code>char</code>  type
 @return the <code>char</code> value that equals <code>value</code>
 @throw IllegalArgumentExceptionif <code>value</code> is greater than <code>Character.MAX_VALUE</code>
      or less than <code>Character.MIN_VALUE</code>
 */
+ (jchar)checkedCastWithLong:(jlong)value;

/*!
 @brief Compares the two specified <code>char</code> values.The sign of the value returned is the same as
  that of <code>((Character) a).compareTo(b)</code>.
 <p><b>Note for Java 7 and later:</b> this method should be treated as deprecated; use the
  equivalent <code>Character.compare</code> method instead.
 @param a the first <code>char</code>  to compare
 @param b the second <code>char</code>  to compare
 @return a negative value if <code>a</code> is less than <code>b</code>; a positive value if <code>a</code> is
      greater than <code>b</code>; or zero if they are equal
 */
+ (jint)compareWithChar:(jchar)a
               withChar:(jchar)b;

/*!
 @brief Returns the values from each provided array combined into a single array.For example, <code>concat(new char[] {a, b}, new char[] {}, new char[] {c}</code>
  returns the array <code>{a, b, c}</code>.
 @param arrays zero or more <code>char</code>  arrays
 @return a single array containing all the values from the source arrays, in order
 */
+ (IOSCharArray *)concatWithCharArray2:(IOSObjectArray *)arrays;

/*!
 @brief Returns the value nearest to <code>value</code> which is within the closed range <code>[min..max]</code>.
 <p>If <code>value</code> is within the range <code>[min..max]</code>, <code>value</code> is returned
  unchanged. If <code>value</code> is less than <code>min</code>, <code>min</code> is returned, and if <code>value</code>
  is greater than <code>max</code>, <code>max</code> is returned.
 @param value the <code>char</code>  value to constrain
 @param min the lower bound (inclusive) of the range to constrain <code>value</code>  to
 @param max the upper bound (inclusive) of the range to constrain <code>value</code>  to
 @throw IllegalArgumentExceptionif <code>min > max</code>
 @since 21.0
 */
+ (jchar)constrainToRangeWithChar:(jchar)value
                         withChar:(jchar)min
                         withChar:(jchar)max;

/*!
 @brief Returns <code>true</code> if <code>target</code> is present as an element anywhere in <code>array</code>.
 @param array an array of <code>char</code>  values, possibly empty
 @param target a primitive <code>char</code>  value
 @return <code>true</code> if <code>array[i] == target</code> for some value of <code>i</code>
 */
+ (jboolean)containsWithCharArray:(IOSCharArray *)array
                         withChar:(jchar)target;

/*!
 @brief Returns an array containing the same values as <code>array</code>, but guaranteed to be of a
  specified minimum length.If <code>array</code> already has a length of at least <code>minLength</code>,
  it is returned directly.
 Otherwise, a new array of size <code>minLength + padding</code> is
  returned, containing the values of <code>array</code>, and zeroes in the remaining places.
 @param array the source array
 @param minLength the minimum length the returned array must guarantee
 @param padding an extra amount to "grow" the array by if growth is necessary
 @throw IllegalArgumentExceptionif <code>minLength</code> or <code>padding</code> is negative
 @return an array containing the values of <code>array</code>, with guaranteed minimum length <code>minLength</code>
 */
+ (IOSCharArray *)ensureCapacityWithCharArray:(IOSCharArray *)array
                                      withInt:(jint)minLength
                                      withInt:(jint)padding;

/*!
 @brief Returns the <code>char</code> value whose big-endian representation is stored in the first 2 bytes
  of <code>bytes</code>; equivalent to <code>ByteBuffer.wrap(bytes).getChar()</code>.For example, the
  input byte array <code>{0x54, 0x32}</code> would yield the <code>char</code> value <code>'\\u5432'</code>.
 <p>Arguably, it's preferable to use <code>java.nio.ByteBuffer</code>; that library exposes much more
  flexibility at little cost in readability.
 @throw IllegalArgumentExceptionif <code>bytes</code> has fewer than 2 elements
 */
+ (jchar)fromByteArrayWithByteArray:(IOSByteArray *)bytes;

/*!
 @brief Returns the <code>char</code> value whose byte representation is the given 2 bytes, in big-endian
  order; equivalent to <code>Chars.fromByteArray(new byte[] {b1, b2})</code>.
 @since 7.0
 */
+ (jchar)fromBytesWithByte:(jbyte)b1
                  withByte:(jbyte)b2;

/*!
 @brief Returns a hash code for <code>value</code>; equal to the result of invoking <code>((Character)
  value).hashCode()</code>
 .
 <p><b>Java 8 users:</b> use <code>Character.hashCode(char)</code> instead.
 @param value a primitive <code>char</code>  value
 @return a hash code for the value
 */
+ (jint)hashCodeWithChar:(jchar)value;

/*!
 @brief Returns the index of the first appearance of the value <code>target</code> in <code>array</code>.
 @param array an array of <code>char</code>  values, possibly empty
 @param target a primitive <code>char</code>  value
 @return the least index <code>i</code> for which <code>array[i] == target</code>, or <code>-1</code> if no
      such index exists.
 */
+ (jint)indexOfWithCharArray:(IOSCharArray *)array
                    withChar:(jchar)target;

/*!
 @brief Returns the start position of the first occurrence of the specified <code>target</code> within 
 <code>array</code>, or <code>-1</code> if there is no such occurrence.
 <p>More formally, returns the lowest index <code>i</code> such that <code>Arrays.copyOfRange(array,
  i, i + target.length)</code>
  contains exactly the same elements as <code>target</code>.
 @param array the array to search for the sequence <code>target</code>
 @param target the array to search for as a sub-sequence of <code>array</code>
 */
+ (jint)indexOfWithCharArray:(IOSCharArray *)array
               withCharArray:(IOSCharArray *)target;

/*!
 @brief Returns a string containing the supplied <code>char</code> values separated by <code>separator</code>.
 For example, <code>join("-", '1', '2', '3')</code> returns the string <code>"1-2-3"</code>.
 @param separator the text that should appear between consecutive values in the resulting string      (but not at the start or end)
 @param array an array of <code>char</code>  values, possibly empty
 */
+ (NSString *)joinWithNSString:(NSString *)separator
                 withCharArray:(IOSCharArray *)array;

/*!
 @brief Returns the index of the last appearance of the value <code>target</code> in <code>array</code>.
 @param array an array of <code>char</code>  values, possibly empty
 @param target a primitive <code>char</code>  value
 @return the greatest index <code>i</code> for which <code>array[i] == target</code>, or <code>-1</code> if no
      such index exists.
 */
+ (jint)lastIndexOfWithCharArray:(IOSCharArray *)array
                        withChar:(jchar)target;

/*!
 @brief Returns a comparator that compares two <code>char</code> arrays <a href="http://en.wikipedia.org/wiki/Lexicographical_order">
 lexicographically</a>.That is, it
  compares, using <code>compare(char, char)</code>), the first pair of values that follow any common
  prefix, or when one array is a prefix of the other, treats the shorter array as the lesser.
 For
  example, <code>[] < ['a'] < ['a', 'b'] < ['b']</code>.
  
 <p>The returned comparator is inconsistent with <code>Object.equals(Object)</code> (since arrays
  support only identity equality), but it is consistent with <code>Arrays.equals(char[],
 char[])</code>
 .
 @since 2.0
 */
+ (id<JavaUtilComparator>)lexicographicalComparator;

/*!
 @brief Returns the greatest value present in <code>array</code>.
 @param array a  <i> nonempty </i>  array of <code>char</code>  values
 @return the value present in <code>array</code> that is greater than or equal to every other value
      in the array
 @throw IllegalArgumentExceptionif <code>array</code> is empty
 */
+ (jchar)maxWithCharArray:(IOSCharArray *)array;

/*!
 @brief Returns the least value present in <code>array</code>.
 @param array a  <i> nonempty </i>  array of <code>char</code>  values
 @return the value present in <code>array</code> that is less than or equal to every other value in
      the array
 @throw IllegalArgumentExceptionif <code>array</code> is empty
 */
+ (jchar)minWithCharArray:(IOSCharArray *)array;

/*!
 @brief Reverses the elements of <code>array</code>.This is equivalent to <code>Collections.reverse(Chars.asList(array))</code>
 , but is likely to be more efficient.
 @since 23.1
 */
+ (void)reverseWithCharArray:(IOSCharArray *)array;

/*!
 @brief Reverses the elements of <code>array</code> between <code>fromIndex</code> inclusive and <code>toIndex</code>
  exclusive.This is equivalent to <code>Collections.reverse(Chars.asList(array).subList(fromIndex, toIndex))</code>
 , but is likely to be more
  efficient.
 @throw IndexOutOfBoundsExceptionif <code>fromIndex < 0</code>, <code>toIndex > array.length</code>, or
      <code>toIndex > fromIndex</code>
 @since 23.1
 */
+ (void)reverseWithCharArray:(IOSCharArray *)array
                     withInt:(jint)fromIndex
                     withInt:(jint)toIndex;

/*!
 @brief Returns the <code>char</code> nearest in value to <code>value</code>.
 @param value any <code>long</code>  value
 @return the same value cast to <code>char</code> if it is in the range of the <code>char</code> type,
      <code>Character.MAX_VALUE</code> if it is too large, or <code>Character.MIN_VALUE</code> if it is too
      small
 */
+ (jchar)saturatedCastWithLong:(jlong)value;

/*!
 @brief Sorts the elements of <code>array</code> in descending order.
 @since 23.1
 */
+ (void)sortDescendingWithCharArray:(IOSCharArray *)array;

/*!
 @brief Sorts the elements of <code>array</code> between <code>fromIndex</code> inclusive and <code>toIndex</code>
  exclusive in descending order.
 @since 23.1
 */
+ (void)sortDescendingWithCharArray:(IOSCharArray *)array
                            withInt:(jint)fromIndex
                            withInt:(jint)toIndex;

/*!
 @brief Copies a collection of <code>Character</code> instances into a new array of primitive <code>char</code>
  values.
 <p>Elements are copied from the argument collection as if by <code>collection.toArray()</code>.
  Calling this method is as thread-safe as calling that method.
 @param collection a collection of <code>Character</code>  objects
 @return an array containing the same values as <code>collection</code>, in the same order, converted
      to primitives
 @throw NullPointerExceptionif <code>collection</code> or any of its elements is null
 */
+ (IOSCharArray *)toArrayWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Returns a big-endian representation of <code>value</code> in a 2-element byte array; equivalent to 
 <code>ByteBuffer.allocate(2).putChar(value).array()</code>.For example, the input value <code>'\\u5432'</code>
  would yield the byte array <code>{0x54, 0x32}</code>.
 <p>If you need to convert and concatenate several values (possibly even of different types),
  use a shared <code>java.nio.ByteBuffer</code> instance, or use <code>com.google.common.io.ByteStreams.newDataOutput()</code>
  to get a growable buffer.
 */
+ (IOSByteArray *)toByteArrayWithChar:(jchar)value;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonPrimitivesChars)

/*!
 @brief The number of bytes required to represent a primitive <code>char</code> value.
 <p><b>Java 8 users:</b> use <code>Character.BYTES</code> instead.
 */
inline jint ComGoogleCommonPrimitivesChars_get_BYTES(void);
#define ComGoogleCommonPrimitivesChars_BYTES 2
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonPrimitivesChars, BYTES, jint)

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesChars_hashCodeWithChar_(jchar value);

FOUNDATION_EXPORT jchar ComGoogleCommonPrimitivesChars_checkedCastWithLong_(jlong value);

FOUNDATION_EXPORT jchar ComGoogleCommonPrimitivesChars_saturatedCastWithLong_(jlong value);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesChars_compareWithChar_withChar_(jchar a, jchar b);

FOUNDATION_EXPORT jboolean ComGoogleCommonPrimitivesChars_containsWithCharArray_withChar_(IOSCharArray *array, jchar target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesChars_indexOfWithCharArray_withChar_(IOSCharArray *array, jchar target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesChars_indexOfWithCharArray_withCharArray_(IOSCharArray *array, IOSCharArray *target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesChars_lastIndexOfWithCharArray_withChar_(IOSCharArray *array, jchar target);

FOUNDATION_EXPORT jchar ComGoogleCommonPrimitivesChars_minWithCharArray_(IOSCharArray *array);

FOUNDATION_EXPORT jchar ComGoogleCommonPrimitivesChars_maxWithCharArray_(IOSCharArray *array);

FOUNDATION_EXPORT jchar ComGoogleCommonPrimitivesChars_constrainToRangeWithChar_withChar_withChar_(jchar value, jchar min, jchar max);

FOUNDATION_EXPORT IOSCharArray *ComGoogleCommonPrimitivesChars_concatWithCharArray2_(IOSObjectArray *arrays);

FOUNDATION_EXPORT IOSByteArray *ComGoogleCommonPrimitivesChars_toByteArrayWithChar_(jchar value);

FOUNDATION_EXPORT jchar ComGoogleCommonPrimitivesChars_fromByteArrayWithByteArray_(IOSByteArray *bytes);

FOUNDATION_EXPORT jchar ComGoogleCommonPrimitivesChars_fromBytesWithByte_withByte_(jbyte b1, jbyte b2);

FOUNDATION_EXPORT IOSCharArray *ComGoogleCommonPrimitivesChars_ensureCapacityWithCharArray_withInt_withInt_(IOSCharArray *array, jint minLength, jint padding);

FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesChars_joinWithNSString_withCharArray_(NSString *separator, IOSCharArray *array);

FOUNDATION_EXPORT id<JavaUtilComparator> ComGoogleCommonPrimitivesChars_lexicographicalComparator(void);

FOUNDATION_EXPORT IOSCharArray *ComGoogleCommonPrimitivesChars_toArrayWithJavaUtilCollection_(id<JavaUtilCollection> collection);

FOUNDATION_EXPORT void ComGoogleCommonPrimitivesChars_sortDescendingWithCharArray_(IOSCharArray *array);

FOUNDATION_EXPORT void ComGoogleCommonPrimitivesChars_sortDescendingWithCharArray_withInt_withInt_(IOSCharArray *array, jint fromIndex, jint toIndex);

FOUNDATION_EXPORT void ComGoogleCommonPrimitivesChars_reverseWithCharArray_(IOSCharArray *array);

FOUNDATION_EXPORT void ComGoogleCommonPrimitivesChars_reverseWithCharArray_withInt_withInt_(IOSCharArray *array, jint fromIndex, jint toIndex);

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonPrimitivesChars_asListWithCharArray_(IOSCharArray *backingArray);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesChars)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesChars")