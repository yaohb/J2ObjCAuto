//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/com/google/common/io/LineReader.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonIoLineReader")
#ifdef RESTRICT_ComGoogleCommonIoLineReader
#define INCLUDE_ALL_ComGoogleCommonIoLineReader 0
#else
#define INCLUDE_ALL_ComGoogleCommonIoLineReader 1
#endif
#undef RESTRICT_ComGoogleCommonIoLineReader

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonIoLineReader_) && (INCLUDE_ALL_ComGoogleCommonIoLineReader || defined(INCLUDE_ComGoogleCommonIoLineReader))
#define ComGoogleCommonIoLineReader_

@protocol JavaLangReadable;

/*!
 @brief A class for reading lines of text.Provides the same functionality as <code>java.io.BufferedReader.readLine()</code>
  but for all <code>Readable</code> objects, not just instances of 
 <code>Reader</code>.
 @author Chris Nokleberg
 @since 1.0
 */
@interface ComGoogleCommonIoLineReader : NSObject

#pragma mark Public

/*!
 @brief Creates a new instance that will read lines from the given <code>Readable</code> object.
 */
- (instancetype __nonnull)initWithJavaLangReadable:(id<JavaLangReadable>)readable;

/*!
 @brief Reads a line of text.A line is considered to be terminated by any one of a line feed (<code>'\n'</code>
 ), a carriage return (<code>'\r'</code>), or a carriage return followed immediately by a
  linefeed (<code>"\r\n"</code>).
 @return a <code>String</code> containing the contents of the line, not including any
      line-termination characters, or <code>null</code> if the end of the stream has been reached.
 @throw IOExceptionif an I/O error occurs
 */
- (NSString *)readLine;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoLineReader)

FOUNDATION_EXPORT void ComGoogleCommonIoLineReader_initWithJavaLangReadable_(ComGoogleCommonIoLineReader *self, id<JavaLangReadable> readable);

FOUNDATION_EXPORT ComGoogleCommonIoLineReader *new_ComGoogleCommonIoLineReader_initWithJavaLangReadable_(id<JavaLangReadable> readable) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonIoLineReader *create_ComGoogleCommonIoLineReader_initWithJavaLangReadable_(id<JavaLangReadable> readable);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoLineReader)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonIoLineReader")
