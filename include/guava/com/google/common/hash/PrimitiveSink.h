//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/hash/PrimitiveSink.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonHashPrimitiveSink")
#ifdef RESTRICT_ComGoogleCommonHashPrimitiveSink
#define INCLUDE_ALL_ComGoogleCommonHashPrimitiveSink 0
#else
#define INCLUDE_ALL_ComGoogleCommonHashPrimitiveSink 1
#endif
#undef RESTRICT_ComGoogleCommonHashPrimitiveSink

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonHashPrimitiveSink_) && (INCLUDE_ALL_ComGoogleCommonHashPrimitiveSink || defined(INCLUDE_ComGoogleCommonHashPrimitiveSink))
#define ComGoogleCommonHashPrimitiveSink_

@class IOSByteArray;
@class JavaNioByteBuffer;
@class JavaNioCharsetCharset;
@protocol JavaLangCharSequence;

/*!
 @brief An object which can receive a stream of primitive values.
 @author Kevin Bourrillion
 @since 12.0 (in 11.0 as <code>Sink</code>)
 */
@protocol ComGoogleCommonHashPrimitiveSink < JavaObject >

/*!
 @brief Puts a byte into this sink.
 @param b a byte
 @return this instance
 */
- (id<ComGoogleCommonHashPrimitiveSink>)putByteWithByte:(jbyte)b;

/*!
 @brief Puts an array of bytes into this sink.
 @param bytes a byte array
 @return this instance
 */
- (id<ComGoogleCommonHashPrimitiveSink>)putBytesWithByteArray:(IOSByteArray *)bytes;

/*!
 @brief Puts a chunk of an array of bytes into this sink.
 <code>bytes[off]</code> is the first byte written, 
 <code>bytes[off + len - 1]</code> is the last.
 @param bytes a byte array
 @param off the start offset in the array
 @param len the number of bytes to write
 @return this instance
 @throw IndexOutOfBoundsExceptionif <code>off < 0</code> or <code>off + len > bytes.length</code> or
      <code>len < 0</code>
 */
- (id<ComGoogleCommonHashPrimitiveSink>)putBytesWithByteArray:(IOSByteArray *)bytes
                                                      withInt:(jint)off
                                                      withInt:(jint)len;

/*!
 @brief Puts the remaining bytes of a byte buffer into this sink.
 <code>bytes.position()</code> is the first
  byte written, <code>bytes.limit() - 1</code> is the last. The position of the buffer will be equal
  to the limit when this method returns.
 @param bytes a byte buffer
 @return this instance
 @since 23.0
 */
- (id<ComGoogleCommonHashPrimitiveSink>)putBytesWithJavaNioByteBuffer:(JavaNioByteBuffer *)bytes;

/*!
 @brief Puts a short into this sink.
 */
- (id<ComGoogleCommonHashPrimitiveSink>)putShortWithShort:(jshort)s;

/*!
 @brief Puts an int into this sink.
 */
- (id<ComGoogleCommonHashPrimitiveSink>)putIntWithInt:(jint)i;

/*!
 @brief Puts a long into this sink.
 */
- (id<ComGoogleCommonHashPrimitiveSink>)putLongWithLong:(jlong)l;

/*!
 @brief Puts a float into this sink.
 */
- (id<ComGoogleCommonHashPrimitiveSink>)putFloatWithFloat:(jfloat)f;

/*!
 @brief Puts a double into this sink.
 */
- (id<ComGoogleCommonHashPrimitiveSink>)putDoubleWithDouble:(jdouble)d;

/*!
 @brief Puts a boolean into this sink.
 */
- (id<ComGoogleCommonHashPrimitiveSink>)putBooleanWithBoolean:(jboolean)b;

/*!
 @brief Puts a character into this sink.
 */
- (id<ComGoogleCommonHashPrimitiveSink>)putCharWithChar:(jchar)c;

/*!
 @brief Puts each 16-bit code unit from the <code>CharSequence</code> into this sink.
 <p><b>Warning:</b> This method will produce different output than most other languages do when
  running on the equivalent input. For cross-language compatibility, use <code>putString</code>,
  usually with a charset of UTF-8. For other use cases, use <code>putUnencodedChars</code>.
 @since 15.0 (since 11.0 as putString(CharSequence))
 */
- (id<ComGoogleCommonHashPrimitiveSink>)putUnencodedCharsWithJavaLangCharSequence:(id<JavaLangCharSequence>)charSequence;

/*!
 @brief Puts a string into this sink using the given charset.
 <p><b>Warning:</b> This method, which reencodes the input before processing it, is useful only
  for cross-language compatibility. For other use cases, prefer <code>putUnencodedChars</code>, which
  is faster, produces the same output across Java releases, and processes every <code>char</code> in
  the input, even if some are invalid.
 */
- (id<ComGoogleCommonHashPrimitiveSink>)putStringWithJavaLangCharSequence:(id<JavaLangCharSequence>)charSequence
                                                withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashPrimitiveSink)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashPrimitiveSink)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonHashPrimitiveSink")
