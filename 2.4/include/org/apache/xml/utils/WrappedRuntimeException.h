//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/WrappedRuntimeException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsWrappedRuntimeException")
#ifdef RESTRICT_OrgApacheXmlUtilsWrappedRuntimeException
#define INCLUDE_ALL_OrgApacheXmlUtilsWrappedRuntimeException 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsWrappedRuntimeException 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsWrappedRuntimeException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlUtilsWrappedRuntimeException_) && (INCLUDE_ALL_OrgApacheXmlUtilsWrappedRuntimeException || defined(INCLUDE_OrgApacheXmlUtilsWrappedRuntimeException))
#define OrgApacheXmlUtilsWrappedRuntimeException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

@class JavaLangException;
@class JavaLangThrowable;

/*!
 @brief This class is for throwing important checked exceptions
  over non-checked methods.It should be used with care,
  and in limited circumstances.
 */
@interface OrgApacheXmlUtilsWrappedRuntimeException : JavaLangRuntimeException
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Construct a WrappedRuntimeException from a
  checked exception.
 @param e Primary checked exception
 */
- (instancetype __nonnull)initWithJavaLangException:(JavaLangException *)e;

/*!
 @brief Constructor WrappedRuntimeException
 @param msg Exception information.
 @param e Primary checked exception
 */
- (instancetype __nonnull)initWithNSString:(NSString *)msg
                     withJavaLangException:(JavaLangException *)e;

/*!
 @brief Get the checked exception that this runtime exception wraps.
 @return The primary checked exception
 */
- (JavaLangException *)getException;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsWrappedRuntimeException)

inline jlong OrgApacheXmlUtilsWrappedRuntimeException_get_serialVersionUID(void);
#define OrgApacheXmlUtilsWrappedRuntimeException_serialVersionUID 7140414456714658073LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlUtilsWrappedRuntimeException, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXmlUtilsWrappedRuntimeException_initWithJavaLangException_(OrgApacheXmlUtilsWrappedRuntimeException *self, JavaLangException *e);

FOUNDATION_EXPORT OrgApacheXmlUtilsWrappedRuntimeException *new_OrgApacheXmlUtilsWrappedRuntimeException_initWithJavaLangException_(JavaLangException *e) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsWrappedRuntimeException *create_OrgApacheXmlUtilsWrappedRuntimeException_initWithJavaLangException_(JavaLangException *e);

FOUNDATION_EXPORT void OrgApacheXmlUtilsWrappedRuntimeException_initWithNSString_withJavaLangException_(OrgApacheXmlUtilsWrappedRuntimeException *self, NSString *msg, JavaLangException *e);

FOUNDATION_EXPORT OrgApacheXmlUtilsWrappedRuntimeException *new_OrgApacheXmlUtilsWrappedRuntimeException_initWithNSString_withJavaLangException_(NSString *msg, JavaLangException *e) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsWrappedRuntimeException *create_OrgApacheXmlUtilsWrappedRuntimeException_initWithNSString_withJavaLangException_(NSString *msg, JavaLangException *e);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsWrappedRuntimeException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsWrappedRuntimeException")