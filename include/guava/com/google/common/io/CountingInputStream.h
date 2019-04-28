//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/io/CountingInputStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonIoCountingInputStream")
#ifdef RESTRICT_ComGoogleCommonIoCountingInputStream
#define INCLUDE_ALL_ComGoogleCommonIoCountingInputStream 0
#else
#define INCLUDE_ALL_ComGoogleCommonIoCountingInputStream 1
#endif
#undef RESTRICT_ComGoogleCommonIoCountingInputStream

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonIoCountingInputStream_) && (INCLUDE_ALL_ComGoogleCommonIoCountingInputStream || defined(INCLUDE_ComGoogleCommonIoCountingInputStream))
#define ComGoogleCommonIoCountingInputStream_

#define RESTRICT_JavaIoFilterInputStream 1
#define INCLUDE_JavaIoFilterInputStream 1
#include "java/io/FilterInputStream.h"

@class IOSByteArray;
@class JavaIoInputStream;

/*!
 @brief An <code>InputStream</code> that counts the number of bytes read.
 @author Chris Nokleberg
 @since 1.0
 */
@interface ComGoogleCommonIoCountingInputStream : JavaIoFilterInputStream

#pragma mark Public

/*!
 @brief Wraps another input stream, counting the number of bytes read.
 @param inArg the input stream to be wrapped
 */
- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)inArg;

/*!
 @brief Returns the number of bytes read.
 */
- (jlong)getCount;

- (void)markWithInt:(jint)readlimit;

- (jint)read;

- (jint)readWithByteArray:(IOSByteArray *)b
                  withInt:(jint)off
                  withInt:(jint)len;

- (void)reset;

- (jlong)skipWithLong:(jlong)n;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoCountingInputStream)

FOUNDATION_EXPORT void ComGoogleCommonIoCountingInputStream_initWithJavaIoInputStream_(ComGoogleCommonIoCountingInputStream *self, JavaIoInputStream *inArg);

FOUNDATION_EXPORT ComGoogleCommonIoCountingInputStream *new_ComGoogleCommonIoCountingInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonIoCountingInputStream *create_ComGoogleCommonIoCountingInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoCountingInputStream)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonIoCountingInputStream")
