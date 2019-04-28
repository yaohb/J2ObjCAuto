//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/com/google/common/base/Platform.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBasePlatform")
#ifdef RESTRICT_ComGoogleCommonBasePlatform
#define INCLUDE_ALL_ComGoogleCommonBasePlatform 0
#else
#define INCLUDE_ALL_ComGoogleCommonBasePlatform 1
#endif
#undef RESTRICT_ComGoogleCommonBasePlatform

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBasePlatform_) && (INCLUDE_ALL_ComGoogleCommonBasePlatform || defined(INCLUDE_ComGoogleCommonBasePlatform))
#define ComGoogleCommonBasePlatform_

@class ComGoogleCommonBaseCharMatcher;
@class ComGoogleCommonBaseCommonPattern;
@class ComGoogleCommonBaseOptional;
@class IOSClass;

/*!
 @brief Methods factored out so that they can be emulated differently in GWT.
 @author Jesse Wilson
 */
@interface ComGoogleCommonBasePlatform : NSObject

#pragma mark Package-Private

+ (ComGoogleCommonBaseCommonPattern *)compilePatternWithNSString:(NSString *)pattern;

+ (NSString *)emptyToNullWithNSString:(NSString *)string;

+ (NSString *)formatCompact4DigitsWithDouble:(jdouble)value;

+ (ComGoogleCommonBaseOptional *)getEnumIfPresentWithIOSClass:(IOSClass *)enumClass
                                                 withNSString:(NSString *)value;

+ (NSString *)nullToEmptyWithNSString:(NSString *)string;

+ (ComGoogleCommonBaseCharMatcher *)precomputeCharMatcherWithComGoogleCommonBaseCharMatcher:(ComGoogleCommonBaseCharMatcher *)matcher;

+ (jboolean)stringIsNullOrEmptyWithNSString:(NSString *)string;

/*!
 @brief Calls <code>System.nanoTime()</code>.
 */
+ (jlong)systemNanoTime;

+ (jboolean)usingJdkPatternCompiler;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonBasePlatform)

FOUNDATION_EXPORT jlong ComGoogleCommonBasePlatform_systemNanoTime(void);

FOUNDATION_EXPORT ComGoogleCommonBaseCharMatcher *ComGoogleCommonBasePlatform_precomputeCharMatcherWithComGoogleCommonBaseCharMatcher_(ComGoogleCommonBaseCharMatcher *matcher);

FOUNDATION_EXPORT ComGoogleCommonBaseOptional *ComGoogleCommonBasePlatform_getEnumIfPresentWithIOSClass_withNSString_(IOSClass *enumClass, NSString *value);

FOUNDATION_EXPORT NSString *ComGoogleCommonBasePlatform_formatCompact4DigitsWithDouble_(jdouble value);

FOUNDATION_EXPORT jboolean ComGoogleCommonBasePlatform_stringIsNullOrEmptyWithNSString_(NSString *string);

FOUNDATION_EXPORT NSString *ComGoogleCommonBasePlatform_nullToEmptyWithNSString_(NSString *string);

FOUNDATION_EXPORT NSString *ComGoogleCommonBasePlatform_emptyToNullWithNSString_(NSString *string);

FOUNDATION_EXPORT ComGoogleCommonBaseCommonPattern *ComGoogleCommonBasePlatform_compilePatternWithNSString_(NSString *pattern);

FOUNDATION_EXPORT jboolean ComGoogleCommonBasePlatform_usingJdkPatternCompiler(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBasePlatform)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBasePlatform")
