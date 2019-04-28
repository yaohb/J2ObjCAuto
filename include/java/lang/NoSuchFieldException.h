//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/NoSuchFieldException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangNoSuchFieldException")
#ifdef RESTRICT_JavaLangNoSuchFieldException
#define INCLUDE_ALL_JavaLangNoSuchFieldException 0
#else
#define INCLUDE_ALL_JavaLangNoSuchFieldException 1
#endif
#undef RESTRICT_JavaLangNoSuchFieldException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangNoSuchFieldException_) && (INCLUDE_ALL_JavaLangNoSuchFieldException || defined(INCLUDE_JavaLangNoSuchFieldException))
#define JavaLangNoSuchFieldException_

#define RESTRICT_JavaLangReflectiveOperationException 1
#define INCLUDE_JavaLangReflectiveOperationException 1
#include "java/lang/ReflectiveOperationException.h"

@class JavaLangThrowable;

/*!
 @brief Signals that the class doesn't have a field of a specified name.
 @author unascribed
 @since JDK1.1
 */
@interface JavaLangNoSuchFieldException : JavaLangReflectiveOperationException

#pragma mark Public

/*!
 @brief Constructor.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructor with a detail message.
 @param s the detail message
 */
- (instancetype __nonnull)initWithNSString:(NSString *)s;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangNoSuchFieldException)

FOUNDATION_EXPORT void JavaLangNoSuchFieldException_init(JavaLangNoSuchFieldException *self);

FOUNDATION_EXPORT JavaLangNoSuchFieldException *new_JavaLangNoSuchFieldException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangNoSuchFieldException *create_JavaLangNoSuchFieldException_init(void);

FOUNDATION_EXPORT void JavaLangNoSuchFieldException_initWithNSString_(JavaLangNoSuchFieldException *self, NSString *s);

FOUNDATION_EXPORT JavaLangNoSuchFieldException *new_JavaLangNoSuchFieldException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangNoSuchFieldException *create_JavaLangNoSuchFieldException_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangNoSuchFieldException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangNoSuchFieldException")
