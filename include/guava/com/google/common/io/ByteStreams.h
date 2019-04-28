//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/io/ByteStreams.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonIoByteStreams")
#ifdef RESTRICT_ComGoogleCommonIoByteStreams
#define INCLUDE_ALL_ComGoogleCommonIoByteStreams 0
#else
#define INCLUDE_ALL_ComGoogleCommonIoByteStreams 1
#endif
#undef RESTRICT_ComGoogleCommonIoByteStreams

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonIoByteStreams_) && (INCLUDE_ALL_ComGoogleCommonIoByteStreams || defined(INCLUDE_ComGoogleCommonIoByteStreams))
#define ComGoogleCommonIoByteStreams_

@class IOSByteArray;
@class JavaIoByteArrayInputStream;
@class JavaIoByteArrayOutputStream;
@class JavaIoInputStream;
@class JavaIoOutputStream;
@protocol ComGoogleCommonIoByteArrayDataInput;
@protocol ComGoogleCommonIoByteArrayDataOutput;
@protocol ComGoogleCommonIoByteProcessor;
@protocol JavaNioChannelsReadableByteChannel;
@protocol JavaNioChannelsWritableByteChannel;

/*!
 @brief Provides utility methods for working with byte arrays and I/O streams.
 @author Chris Nokleberg
 @author Colin Decker
 @since 1.0
 */
@interface ComGoogleCommonIoByteStreams : NSObject

#pragma mark Public

/*!
 @brief Copies all bytes from the input stream to the output stream.Does not close or flush either
  stream.
 @param from the input stream to read from
 @param to the output stream to write to
 @return the number of bytes copied
 @throw IOExceptionif an I/O error occurs
 */
+ (jlong)copy__WithJavaIoInputStream:(JavaIoInputStream *)from
              withJavaIoOutputStream:(JavaIoOutputStream *)to OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Copies all bytes from the readable channel to the writable channel.Does not close or flush
  either channel.
 @param from the readable channel to read from
 @param to the writable channel to write to
 @return the number of bytes copied
 @throw IOExceptionif an I/O error occurs
 */
+ (jlong)copy__WithJavaNioChannelsReadableByteChannel:(id<JavaNioChannelsReadableByteChannel>)from
               withJavaNioChannelsWritableByteChannel:(id<JavaNioChannelsWritableByteChannel>)to OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Reads and discards data from the given <code>InputStream</code> until the end of the stream is
  reached.Returns the total number of bytes read.
 Does not close the stream.
 @since 20.0
 */
+ (jlong)exhaustWithJavaIoInputStream:(JavaIoInputStream *)inArg;

/*!
 @brief Wraps a <code>InputStream</code>, limiting the number of bytes which can be read.
 @param inArg the input stream to be wrapped
 @param limit the maximum number of bytes to be read
 @return a length-limited <code>InputStream</code>
 @since 14.0 (since 1.0 as com.google.common.io.LimitInputStream)
 */
+ (JavaIoInputStream *)limitWithJavaIoInputStream:(JavaIoInputStream *)inArg
                                         withLong:(jlong)limit;

/*!
 @brief Returns a new <code>ByteArrayDataInput</code> instance to read from the <code>bytes</code> array from the
  beginning.
 */
+ (id<ComGoogleCommonIoByteArrayDataInput>)newDataInputWithByteArray:(IOSByteArray *)bytes OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns a new <code>ByteArrayDataInput</code> instance to read from the <code>bytes</code> array,
  starting at the given position.
 @throw IndexOutOfBoundsExceptionif <code>start</code> is negative or greater than the length of
      the array
 */
+ (id<ComGoogleCommonIoByteArrayDataInput>)newDataInputWithByteArray:(IOSByteArray *)bytes
                                                             withInt:(jint)start OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns a new <code>ByteArrayDataInput</code> instance to read from the given <code>ByteArrayInputStream</code>
 .The given input stream is not reset before being read from by the
  returned <code>ByteArrayDataInput</code>.
 @since 17.0
 */
+ (id<ComGoogleCommonIoByteArrayDataInput>)newDataInputWithJavaIoByteArrayInputStream:(JavaIoByteArrayInputStream *)byteArrayInputStream OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns a new <code>ByteArrayDataOutput</code> instance with a default size.
 */
+ (id<ComGoogleCommonIoByteArrayDataOutput>)newDataOutput OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns a new <code>ByteArrayDataOutput</code> instance which writes to the given <code>ByteArrayOutputStream</code>
 .The given output stream is not reset before being written to by the
  returned <code>ByteArrayDataOutput</code> and new data will be appended to any existing content.
 <p>Note that if the given output stream was not empty or is modified after the <code>ByteArrayDataOutput</code>
  is created, the contract for <code>ByteArrayDataOutput.toByteArray</code> will
  not be honored (the bytes returned in the byte array may not be exactly what was written via
  calls to <code>ByteArrayDataOutput</code>).
 @since 17.0
 */
+ (id<ComGoogleCommonIoByteArrayDataOutput>)newDataOutputWithJavaIoByteArrayOutputStream:(JavaIoByteArrayOutputStream *)byteArrayOutputSteam OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns a new <code>ByteArrayDataOutput</code> instance sized to hold <code>size</code> bytes before
  resizing.
 @throw IllegalArgumentExceptionif <code>size</code> is negative
 */
+ (id<ComGoogleCommonIoByteArrayDataOutput>)newDataOutputWithInt:(jint)size OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns an <code>OutputStream</code> that simply discards written bytes.
 @since 14.0 (since 1.0 as com.google.common.io.NullOutputStream)
 */
+ (JavaIoOutputStream *)nullOutputStream;

/*!
 @brief Reads some bytes from an input stream and stores them into the buffer array <code>b</code>.This
  method blocks until <code>len</code> bytes of input data have been read into the array, or end of
  file is detected.
 The number of bytes read is returned, possibly zero. Does not close the
  stream. 
 <p>A caller can detect EOF if the number of bytes read is less than <code>len</code>. All subsequent
  calls on the same stream will return zero. 
 <p>If <code>b</code> is null, a <code>NullPointerException</code> is thrown. If <code>off</code> is negative,
  or <code>len</code> is negative, or <code>off+len</code> is greater than the length of the array <code>b</code>
 , then an <code>IndexOutOfBoundsException</code> is thrown. If <code>len</code> is zero, then no bytes
  are read. Otherwise, the first byte read is stored into element <code>b[off]</code>, the next one
  into <code>b[off+1]</code>, and so on. The number of bytes read is, at most, equal to <code>len</code>.
 @param inArg the input stream to read from
 @param b the buffer into which the data is read
 @param off an int specifying the offset into the data
 @param len an int specifying the number of bytes to read
 @return the number of bytes read
 @throw IOExceptionif an I/O error occurs
 */
+ (jint)readWithJavaIoInputStream:(JavaIoInputStream *)inArg
                    withByteArray:(IOSByteArray *)b
                          withInt:(jint)off
                          withInt:(jint)len;

/*!
 @brief Process the bytes of the given input stream using the given processor.
 @param input the input stream to process
 @param processor the object to which to pass the bytes of the stream
 @return the result of the byte processor
 @throw IOExceptionif an I/O error occurs
 @since 14.0
 */
+ (id)readBytesWithJavaIoInputStream:(JavaIoInputStream *)input
  withComGoogleCommonIoByteProcessor:(id<ComGoogleCommonIoByteProcessor>)processor;

/*!
 @brief Attempts to read enough bytes from the stream to fill the given byte array, with the same
  behavior as <code>DataInput.readFully(byte[])</code>.Does not close the stream.
 @param inArg the input stream to read from.
 @param b the buffer into which the data is read.
 @throw EOFExceptionif this stream reaches the end before reading all the bytes.
 @throw IOExceptionif an I/O error occurs.
 */
+ (void)readFullyWithJavaIoInputStream:(JavaIoInputStream *)inArg
                         withByteArray:(IOSByteArray *)b;

/*!
 @brief Attempts to read <code>len</code> bytes from the stream into the given array starting at <code>off</code>
 , with the same behavior as <code>DataInput.readFully(byte[], int, int)</code>.Does not close
  the stream.
 @param inArg the input stream to read from.
 @param b the buffer into which the data is read.
 @param off an int specifying the offset into the data.
 @param len an int specifying the number of bytes to read.
 @throw EOFExceptionif this stream reaches the end before reading all the bytes.
 @throw IOExceptionif an I/O error occurs.
 */
+ (void)readFullyWithJavaIoInputStream:(JavaIoInputStream *)inArg
                         withByteArray:(IOSByteArray *)b
                               withInt:(jint)off
                               withInt:(jint)len;

/*!
 @brief Discards <code>n</code> bytes of data from the input stream.This method will block until the full
  amount has been skipped.
 Does not close the stream.
 @param inArg the input stream to read from
 @param n the number of bytes to skip
 @throw EOFExceptionif this stream reaches the end before skipping all the bytes
 @throw IOExceptionif an I/O error occurs, or the stream does not support skipping
 */
+ (void)skipFullyWithJavaIoInputStream:(JavaIoInputStream *)inArg
                              withLong:(jlong)n;

/*!
 @brief Reads all bytes from an input stream into a byte array.Does not close the stream.
 @param inArg the input stream to read from
 @return a byte array containing all the bytes from the stream
 @throw IOExceptionif an I/O error occurs
 */
+ (IOSByteArray *)toByteArrayWithJavaIoInputStream:(JavaIoInputStream *)inArg;

#pragma mark Package-Private

/*!
 @brief Creates a new byte array for buffering reads or writes.
 */
+ (IOSByteArray *)createBuffer;

/*!
 @brief Discards up to <code>n</code> bytes of data from the input stream.This method will block until
  either the full amount has been skipped or until the end of the stream is reached, whichever
  happens first.
 Returns the total number of bytes skipped.
 */
+ (jlong)skipUpToWithJavaIoInputStream:(JavaIoInputStream *)inArg
                              withLong:(jlong)n;

/*!
 @brief Reads all bytes from an input stream into a byte array.The given expected size is used to
  create an initial byte array, but if the actual number of bytes read from the stream differs,
  the correct result will be returned anyway.
 */
+ (IOSByteArray *)toByteArrayWithJavaIoInputStream:(JavaIoInputStream *)inArg
                                          withLong:(jlong)expectedSize;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonIoByteStreams)

FOUNDATION_EXPORT IOSByteArray *ComGoogleCommonIoByteStreams_createBuffer(void);

FOUNDATION_EXPORT jlong ComGoogleCommonIoByteStreams_copy__WithJavaIoInputStream_withJavaIoOutputStream_(JavaIoInputStream *from, JavaIoOutputStream *to);

FOUNDATION_EXPORT jlong ComGoogleCommonIoByteStreams_copy__WithJavaNioChannelsReadableByteChannel_withJavaNioChannelsWritableByteChannel_(id<JavaNioChannelsReadableByteChannel> from, id<JavaNioChannelsWritableByteChannel> to);

FOUNDATION_EXPORT IOSByteArray *ComGoogleCommonIoByteStreams_toByteArrayWithJavaIoInputStream_(JavaIoInputStream *inArg);

FOUNDATION_EXPORT IOSByteArray *ComGoogleCommonIoByteStreams_toByteArrayWithJavaIoInputStream_withLong_(JavaIoInputStream *inArg, jlong expectedSize);

FOUNDATION_EXPORT jlong ComGoogleCommonIoByteStreams_exhaustWithJavaIoInputStream_(JavaIoInputStream *inArg);

FOUNDATION_EXPORT id<ComGoogleCommonIoByteArrayDataInput> ComGoogleCommonIoByteStreams_newDataInputWithByteArray_(IOSByteArray *bytes);

FOUNDATION_EXPORT id<ComGoogleCommonIoByteArrayDataInput> ComGoogleCommonIoByteStreams_newDataInputWithByteArray_withInt_(IOSByteArray *bytes, jint start);

FOUNDATION_EXPORT id<ComGoogleCommonIoByteArrayDataInput> ComGoogleCommonIoByteStreams_newDataInputWithJavaIoByteArrayInputStream_(JavaIoByteArrayInputStream *byteArrayInputStream);

FOUNDATION_EXPORT id<ComGoogleCommonIoByteArrayDataOutput> ComGoogleCommonIoByteStreams_newDataOutput(void);

FOUNDATION_EXPORT id<ComGoogleCommonIoByteArrayDataOutput> ComGoogleCommonIoByteStreams_newDataOutputWithInt_(jint size);

FOUNDATION_EXPORT id<ComGoogleCommonIoByteArrayDataOutput> ComGoogleCommonIoByteStreams_newDataOutputWithJavaIoByteArrayOutputStream_(JavaIoByteArrayOutputStream *byteArrayOutputSteam);

FOUNDATION_EXPORT JavaIoOutputStream *ComGoogleCommonIoByteStreams_nullOutputStream(void);

FOUNDATION_EXPORT JavaIoInputStream *ComGoogleCommonIoByteStreams_limitWithJavaIoInputStream_withLong_(JavaIoInputStream *inArg, jlong limit);

FOUNDATION_EXPORT void ComGoogleCommonIoByteStreams_readFullyWithJavaIoInputStream_withByteArray_(JavaIoInputStream *inArg, IOSByteArray *b);

FOUNDATION_EXPORT void ComGoogleCommonIoByteStreams_readFullyWithJavaIoInputStream_withByteArray_withInt_withInt_(JavaIoInputStream *inArg, IOSByteArray *b, jint off, jint len);

FOUNDATION_EXPORT void ComGoogleCommonIoByteStreams_skipFullyWithJavaIoInputStream_withLong_(JavaIoInputStream *inArg, jlong n);

FOUNDATION_EXPORT jlong ComGoogleCommonIoByteStreams_skipUpToWithJavaIoInputStream_withLong_(JavaIoInputStream *inArg, jlong n);

FOUNDATION_EXPORT id ComGoogleCommonIoByteStreams_readBytesWithJavaIoInputStream_withComGoogleCommonIoByteProcessor_(JavaIoInputStream *input, id<ComGoogleCommonIoByteProcessor> processor);

FOUNDATION_EXPORT jint ComGoogleCommonIoByteStreams_readWithJavaIoInputStream_withByteArray_withInt_withInt_(JavaIoInputStream *inArg, IOSByteArray *b, jint off, jint len);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoByteStreams)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonIoByteStreams")
