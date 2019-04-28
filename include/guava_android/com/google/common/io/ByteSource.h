//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/com/google/common/io/ByteSource.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonIoByteSource")
#ifdef RESTRICT_ComGoogleCommonIoByteSource
#define INCLUDE_ALL_ComGoogleCommonIoByteSource 0
#else
#define INCLUDE_ALL_ComGoogleCommonIoByteSource 1
#endif
#undef RESTRICT_ComGoogleCommonIoByteSource

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonIoByteSource_) && (INCLUDE_ALL_ComGoogleCommonIoByteSource || defined(INCLUDE_ComGoogleCommonIoByteSource))
#define ComGoogleCommonIoByteSource_

@class ComGoogleCommonBaseOptional;
@class ComGoogleCommonHashHashCode;
@class ComGoogleCommonIoByteSink;
@class ComGoogleCommonIoCharSource;
@class IOSByteArray;
@class IOSObjectArray;
@class JavaIoInputStream;
@class JavaIoOutputStream;
@class JavaNioCharsetCharset;
@protocol ComGoogleCommonHashHashFunction;
@protocol ComGoogleCommonIoByteProcessor;
@protocol JavaLangIterable;
@protocol JavaUtilIterator;

/*!
 @brief A readable source of bytes, such as a file.Unlike an <code>InputStream</code>, a <code>ByteSource</code>
  is not an open, stateful stream for input that can be read and closed.
 Instead, it is an
  immutable <i>supplier</i> of <code>InputStream</code> instances. 
 <p><code>ByteSource</code> provides two kinds of methods: 
 <ul>
    <li><b>Methods that return a stream:</b> These methods should return a <i>new</i>, independent
        instance each time they are called. The caller is responsible for ensuring that the
        returned stream is closed.   
 <li><b>Convenience methods:</b> These are implementations of common operations that are
        typically implemented by opening a stream using one of the methods in the first category,
        doing something and finally closing the stream that was opened. 
 </ul>
 @since 14.0
 @author Colin Decker
 */
@interface ComGoogleCommonIoByteSource : NSObject

#pragma mark Public

/*!
 @brief Returns a <code>CharSource</code> view of this byte source that decodes bytes read from this source
  as characters using the given <code>Charset</code>.
 <p>If <code>CharSource.asByteSource</code> is called on the returned source with the same charset,
  the default implementation of this method will ensure that the original <code>ByteSource</code> is
  returned, rather than round-trip encoding. Subclasses that override this method should behave
  the same way.
 */
- (ComGoogleCommonIoCharSource *)asCharSourceWithJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

/*!
 @brief Concatenates multiple <code>ByteSource</code> instances into a single source.Streams returned from
  the source will contain the concatenated data from the streams of the underlying sources.
 <p>Only one underlying stream will be open at a time. Closing the concatenated stream will
  close the open underlying stream.
 @param sources the sources to concatenate
 @return a <code>ByteSource</code> containing the concatenated data
 @throw NullPointerExceptionif any of <code>sources</code> is <code>null</code>
 @since 15.0
 */
+ (ComGoogleCommonIoByteSource *)concatWithComGoogleCommonIoByteSourceArray:(IOSObjectArray *)sources;

/*!
 @brief Concatenates multiple <code>ByteSource</code> instances into a single source.Streams returned from
  the source will contain the concatenated data from the streams of the underlying sources.
 <p>Only one underlying stream will be open at a time. Closing the concatenated stream will
  close the open underlying stream.
 @param sources the sources to concatenate
 @return a <code>ByteSource</code> containing the concatenated data
 @since 15.0
 */
+ (ComGoogleCommonIoByteSource *)concatWithJavaLangIterable:(id<JavaLangIterable>)sources;

/*!
 @brief Concatenates multiple <code>ByteSource</code> instances into a single source.Streams returned from
  the source will contain the concatenated data from the streams of the underlying sources.
 <p>Only one underlying stream will be open at a time. Closing the concatenated stream will
  close the open underlying stream. 
 <p>Note: The input <code>Iterator</code> will be copied to an <code>ImmutableList</code> when this method
  is called. This will fail if the iterator is infinite and may cause problems if the iterator
  eagerly fetches data for each source when iterated (rather than producing sources that only
  load data through their streams). Prefer using the <code>concat(Iterable)</code> overload if
  possible.
 @param sources the sources to concatenate
 @return a <code>ByteSource</code> containing the concatenated data
 @throw NullPointerExceptionif any of <code>sources</code> is <code>null</code>
 @since 15.0
 */
+ (ComGoogleCommonIoByteSource *)concatWithJavaUtilIterator:(id<JavaUtilIterator>)sources;

/*!
 @brief Checks that the contents of this byte source are equal to the contents of the given byte
  source.
 @throw IOExceptionif an I/O error occurs while reading from this source or <code>other</code>
 */
- (jboolean)contentEqualsWithComGoogleCommonIoByteSource:(ComGoogleCommonIoByteSource *)other;

/*!
 @brief Copies the contents of this byte source to the given <code>ByteSink</code>.
 @return the number of bytes copied
 @throw IOExceptionif an I/O error occurs while reading from this source or writing to <code>sink</code>
 */
- (jlong)copyToWithComGoogleCommonIoByteSink:(ComGoogleCommonIoByteSink *)sink OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Copies the contents of this byte source to the given <code>OutputStream</code>.Does not close 
 <code>output</code>.
 @return the number of bytes copied
 @throw IOExceptionif an I/O error occurs while reading from this source or writing to <code>output</code>
 */
- (jlong)copyToWithJavaIoOutputStream:(JavaIoOutputStream *)output OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns an immutable <code>ByteSource</code> that contains no bytes.
 @since 15.0
 */
+ (ComGoogleCommonIoByteSource *)empty;

/*!
 @brief Hashes the contents of this byte source using the given hash function.
 @throw IOExceptionif an I/O error occurs while reading from this source
 */
- (ComGoogleCommonHashHashCode *)hash__WithComGoogleCommonHashHashFunction:(id<ComGoogleCommonHashHashFunction>)hashFunction;

/*!
 @brief Returns whether the source has zero bytes.The default implementation first checks <code>sizeIfKnown</code>
 , returning true if it's known to be zero and false if it's known to be non-zero.
 If the size is not known, it falls back to opening a stream and checking for EOF. 
 <p>Note that, in cases where <code>sizeIfKnown</code> returns zero, it is <i>possible</i> that bytes
  are actually available for reading. (For example, some special files may return a size of 0
  despite actually having content when read.) This means that a source may return <code>true</code>
  from <code>isEmpty()</code> despite having readable content.
 @throw IOExceptionif an I/O error occurs
 @since 15.0
 */
- (jboolean)isEmpty;

/*!
 @brief Opens a new buffered <code>InputStream</code> for reading from this source.The returned stream is
  not required to be a <code>BufferedInputStream</code> in order to allow implementations to simply
  delegate to <code>openStream()</code> when the stream returned by that method does not benefit from
  additional buffering (for example, a <code>ByteArrayInputStream</code>).
 This method returns a new,
  independent stream each time it is called. 
 <p>The caller is responsible for ensuring that the returned stream is closed.
 @throw IOExceptionif an I/O error occurs while opening the stream
 @since 15.0 (in 14.0 with return type <code>BufferedInputStream</code>)
 */
- (JavaIoInputStream *)openBufferedStream;

/*!
 @brief Opens a new <code>InputStream</code> for reading from this source.This method returns a new,
  independent stream each time it is called.
 <p>The caller is responsible for ensuring that the returned stream is closed.
 @throw IOExceptionif an I/O error occurs while opening the stream
 */
- (JavaIoInputStream *)openStream;

/*!
 @brief Reads the full contents of this byte source as a byte array.
 @throw IOExceptionif an I/O error occurs while reading from this source
 */
- (IOSByteArray *)read;

/*!
 @brief Reads the contents of this byte source using the given <code>processor</code> to process bytes as
  they are read.Stops when all bytes have been read or the consumer returns <code>false</code>.
 Returns the result produced by the processor.
 @throw IOExceptionif an I/O error occurs while reading from this source or if <code>processor</code>
  throws an <code>IOException</code>
 @since 16.0
 */
- (id)readWithComGoogleCommonIoByteProcessor:(id<ComGoogleCommonIoByteProcessor>)processor;

/*!
 @brief Returns the size of this source in bytes, even if doing so requires opening and traversing an
  entire stream.To avoid a potentially expensive operation, see <code>sizeIfKnown</code>.
 <p>The default implementation calls <code>sizeIfKnown</code> and returns the value if present. If
  absent, it will fall back to a heavyweight operation that will open a stream, read (or <code>skip</code>
 , if possible) to the end of the stream and return the total number
  of bytes that were read. 
 <p>Note that for some sources that implement <code>sizeIfKnown</code> to provide a more efficient
  implementation, it is <i>possible</i> that this method will return a different number of bytes
  than would be returned by reading all of the bytes (for example, some special files may return
  a size of 0 despite actually having content when read). 
 <p>In either case, for mutable sources such as files, a subsequent read may return a different
  number of bytes if the contents are changed.
 @throw IOExceptionif an I/O error occurs while reading the size of this source
 */
- (jlong)size;

/*!
 @brief Returns the size of this source in bytes, if the size can be easily determined without actually
  opening the data stream.
 <p>The default implementation returns <code>Optional.absent</code>. Some sources, such as a file,
  may return a non-absent value. Note that in such cases, it is <i>possible</i> that this method
  will return a different number of bytes than would be returned by reading all of the bytes (for
  example, some special files may return a size of 0 despite actually having content when read). 
 <p>Additionally, for mutable sources such as files, a subsequent read may return a different
  number of bytes if the contents are changed.
 @since 19.0
 */
- (ComGoogleCommonBaseOptional *)sizeIfKnown;

/*!
 @brief Returns a view of a slice of this byte source that is at most <code>length</code> bytes long
  starting at the given <code>offset</code>.If <code>offset</code> is greater than the size of this
  source, the returned source will be empty.
 If <code>offset + length</code> is greater than the size
  of this source, the returned source will contain the slice starting at <code>offset</code> and
  ending at the end of this source.
 @throw IllegalArgumentExceptionif <code>offset</code> or <code>length</code> is negative
 */
- (ComGoogleCommonIoByteSource *)sliceWithLong:(jlong)offset
                                      withLong:(jlong)length;

/*!
 @brief Returns a view of the given byte array as a <code>ByteSource</code>.To view only a specific range
  in the array, use <code>ByteSource.wrap(b).slice(offset, length)</code>.
 @since 15.0 (since 14.0 as <code>ByteStreams.asByteSource(byte[])</code>).
 */
+ (ComGoogleCommonIoByteSource *)wrapWithByteArray:(IOSByteArray *)b;

#pragma mark Protected

/*!
 @brief Constructor for use by subclasses.
 */
- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoByteSource)

FOUNDATION_EXPORT void ComGoogleCommonIoByteSource_init(ComGoogleCommonIoByteSource *self);

FOUNDATION_EXPORT ComGoogleCommonIoByteSource *ComGoogleCommonIoByteSource_concatWithJavaLangIterable_(id<JavaLangIterable> sources);

FOUNDATION_EXPORT ComGoogleCommonIoByteSource *ComGoogleCommonIoByteSource_concatWithJavaUtilIterator_(id<JavaUtilIterator> sources);

FOUNDATION_EXPORT ComGoogleCommonIoByteSource *ComGoogleCommonIoByteSource_concatWithComGoogleCommonIoByteSourceArray_(IOSObjectArray *sources);

FOUNDATION_EXPORT ComGoogleCommonIoByteSource *ComGoogleCommonIoByteSource_wrapWithByteArray_(IOSByteArray *b);

FOUNDATION_EXPORT ComGoogleCommonIoByteSource *ComGoogleCommonIoByteSource_empty(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoByteSource)

#endif

#if !defined (ComGoogleCommonIoByteSource_AsCharSource_) && (INCLUDE_ALL_ComGoogleCommonIoByteSource || defined(INCLUDE_ComGoogleCommonIoByteSource_AsCharSource))
#define ComGoogleCommonIoByteSource_AsCharSource_

#define RESTRICT_ComGoogleCommonIoCharSource 1
#define INCLUDE_ComGoogleCommonIoCharSource 1
#include "com/google/common/io/CharSource.h"

@class ComGoogleCommonIoByteSource;
@class JavaIoReader;
@class JavaNioCharsetCharset;

/*!
 @brief A char source that reads bytes from this source and decodes them as characters using a charset.
 */
@interface ComGoogleCommonIoByteSource_AsCharSource : ComGoogleCommonIoCharSource {
 @public
  JavaNioCharsetCharset *charset_;
}

#pragma mark Public

- (ComGoogleCommonIoByteSource *)asByteSourceWithJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

- (JavaIoReader *)openStream;

- (NSString *)read;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonIoByteSource:(ComGoogleCommonIoByteSource *)outer$
                                    withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoByteSource_AsCharSource)

J2OBJC_FIELD_SETTER(ComGoogleCommonIoByteSource_AsCharSource, charset_, JavaNioCharsetCharset *)

FOUNDATION_EXPORT void ComGoogleCommonIoByteSource_AsCharSource_initWithComGoogleCommonIoByteSource_withJavaNioCharsetCharset_(ComGoogleCommonIoByteSource_AsCharSource *self, ComGoogleCommonIoByteSource *outer$, JavaNioCharsetCharset *charset);

FOUNDATION_EXPORT ComGoogleCommonIoByteSource_AsCharSource *new_ComGoogleCommonIoByteSource_AsCharSource_initWithComGoogleCommonIoByteSource_withJavaNioCharsetCharset_(ComGoogleCommonIoByteSource *outer$, JavaNioCharsetCharset *charset) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonIoByteSource_AsCharSource *create_ComGoogleCommonIoByteSource_AsCharSource_initWithComGoogleCommonIoByteSource_withJavaNioCharsetCharset_(ComGoogleCommonIoByteSource *outer$, JavaNioCharsetCharset *charset);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoByteSource_AsCharSource)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonIoByteSource")
