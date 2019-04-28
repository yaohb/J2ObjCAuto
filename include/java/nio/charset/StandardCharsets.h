//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/charset/StandardCharsets.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioCharsetStandardCharsets")
#ifdef RESTRICT_JavaNioCharsetStandardCharsets
#define INCLUDE_ALL_JavaNioCharsetStandardCharsets 0
#else
#define INCLUDE_ALL_JavaNioCharsetStandardCharsets 1
#endif
#undef RESTRICT_JavaNioCharsetStandardCharsets

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioCharsetStandardCharsets_) && (INCLUDE_ALL_JavaNioCharsetStandardCharsets || defined(INCLUDE_JavaNioCharsetStandardCharsets))
#define JavaNioCharsetStandardCharsets_

@class JavaNioCharsetCharset;

/*!
 @brief Constant definitions for the standard Charsets.
 @since 1.7
 */
@interface JavaNioCharsetStandardCharsets : NSObject
@property (readonly, class, strong) JavaNioCharsetCharset *ISO_8859_1 NS_SWIFT_NAME(ISO_8859_1);
@property (readonly, class, strong) JavaNioCharsetCharset *US_ASCII NS_SWIFT_NAME(US_ASCII);
@property (readonly, class, strong) JavaNioCharsetCharset *UTF_16 NS_SWIFT_NAME(UTF_16);
@property (readonly, class, strong) JavaNioCharsetCharset *UTF_16BE NS_SWIFT_NAME(UTF_16BE);
@property (readonly, class, strong) JavaNioCharsetCharset *UTF_16LE NS_SWIFT_NAME(UTF_16LE);
@property (readonly, class, strong) JavaNioCharsetCharset *UTF_8 NS_SWIFT_NAME(UTF_8);

+ (JavaNioCharsetCharset *)ISO_8859_1;

+ (JavaNioCharsetCharset *)US_ASCII;

+ (JavaNioCharsetCharset *)UTF_16;

+ (JavaNioCharsetCharset *)UTF_16BE;

+ (JavaNioCharsetCharset *)UTF_16LE;

+ (JavaNioCharsetCharset *)UTF_8;

@end

J2OBJC_STATIC_INIT(JavaNioCharsetStandardCharsets)

inline JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_get_ISO_8859_1(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_ISO_8859_1;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNioCharsetStandardCharsets, ISO_8859_1, JavaNioCharsetCharset *)

inline JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_get_US_ASCII(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_US_ASCII;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNioCharsetStandardCharsets, US_ASCII, JavaNioCharsetCharset *)

inline JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_get_UTF_16(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_UTF_16;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNioCharsetStandardCharsets, UTF_16, JavaNioCharsetCharset *)

inline JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_get_UTF_16BE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_UTF_16BE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNioCharsetStandardCharsets, UTF_16BE, JavaNioCharsetCharset *)

inline JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_get_UTF_16LE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_UTF_16LE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNioCharsetStandardCharsets, UTF_16LE, JavaNioCharsetCharset *)

inline JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_get_UTF_8(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_UTF_8;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNioCharsetStandardCharsets, UTF_8, JavaNioCharsetCharset *)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioCharsetStandardCharsets)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioCharsetStandardCharsets")
