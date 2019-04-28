//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/io/LineProcessor.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonIoLineProcessor")
#ifdef RESTRICT_ComGoogleCommonIoLineProcessor
#define INCLUDE_ALL_ComGoogleCommonIoLineProcessor 0
#else
#define INCLUDE_ALL_ComGoogleCommonIoLineProcessor 1
#endif
#undef RESTRICT_ComGoogleCommonIoLineProcessor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonIoLineProcessor_) && (INCLUDE_ALL_ComGoogleCommonIoLineProcessor || defined(INCLUDE_ComGoogleCommonIoLineProcessor))
#define ComGoogleCommonIoLineProcessor_

/*!
 @brief A callback to be used with the streaming <code>readLines</code> methods.
 <p><code>processLine</code> will be called for each line that is read, and should return <code>false</code>
  when you want to stop processing.
 @author Miles Barr
 @since 1.0
 */
@protocol ComGoogleCommonIoLineProcessor < JavaObject >

/*!
 @brief This method will be called once for each line.
 @param line the line read from the input, without delimiter
 @return true to continue processing, false to stop
 */
- (jboolean)processLineWithNSString:(NSString *)line;

/*!
 @brief Return the result of processing all the lines.
 */
- (id)getResult;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoLineProcessor)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoLineProcessor)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonIoLineProcessor")
