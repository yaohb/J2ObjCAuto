//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/extensions/ObjectFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanExtensionsObjectFactory")
#ifdef RESTRICT_OrgApacheXalanExtensionsObjectFactory
#define INCLUDE_ALL_OrgApacheXalanExtensionsObjectFactory 0
#else
#define INCLUDE_ALL_OrgApacheXalanExtensionsObjectFactory 1
#endif
#undef RESTRICT_OrgApacheXalanExtensionsObjectFactory

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanExtensionsObjectFactory_) && (INCLUDE_ALL_OrgApacheXalanExtensionsObjectFactory || defined(INCLUDE_OrgApacheXalanExtensionsObjectFactory))
#define OrgApacheXalanExtensionsObjectFactory_

@class IOSClass;
@class JavaLangClassLoader;

/*!
 @brief This class is duplicated for each JAXP subpackage so keep it in sync.
 It is package private and therefore is not exposed as part of the JAXP
  API. 
 <p>
  This code is designed to implement the JAXP 1.1 spec pluggability
  feature and is designed to run on JDK version 1.1 and
  later, and to compile on JDK 1.2 and onward.  
  The code also runs both as part of an unbundled jar file and
  when bundled as part of the JDK. 
 <p>
  This class was moved from the <code>javax.xml.parsers.ObjectFactory</code>
  class and modified to be used as a general utility for creating objects 
  dynamically.
 @version $Id: ObjectFactory.java 468637 2006-10-28 06:51:02Z minchau $
 */
@interface OrgApacheXalanExtensionsObjectFactory : NSObject

#pragma mark Package-Private

- (instancetype __nonnull)init;

/*!
 @brief Figure out which ClassLoader to use.For JDK 1.2 and later use
  the context ClassLoader.
 */
+ (JavaLangClassLoader *)findClassLoader;

/*!
 @brief Find a Class using the specified ClassLoader
 */
+ (IOSClass *)findProviderClassWithNSString:(NSString *)className_
                    withJavaLangClassLoader:(JavaLangClassLoader *)cl
                                withBoolean:(jboolean)doFallback;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanExtensionsObjectFactory)

FOUNDATION_EXPORT void OrgApacheXalanExtensionsObjectFactory_init(OrgApacheXalanExtensionsObjectFactory *self);

FOUNDATION_EXPORT OrgApacheXalanExtensionsObjectFactory *new_OrgApacheXalanExtensionsObjectFactory_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanExtensionsObjectFactory *create_OrgApacheXalanExtensionsObjectFactory_init(void);

FOUNDATION_EXPORT JavaLangClassLoader *OrgApacheXalanExtensionsObjectFactory_findClassLoader(void);

FOUNDATION_EXPORT IOSClass *OrgApacheXalanExtensionsObjectFactory_findProviderClassWithNSString_withJavaLangClassLoader_withBoolean_(NSString *className_, JavaLangClassLoader *cl, jboolean doFallback);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanExtensionsObjectFactory)

#endif

#if !defined (OrgApacheXalanExtensionsObjectFactory_ConfigurationError_) && (INCLUDE_ALL_OrgApacheXalanExtensionsObjectFactory || defined(INCLUDE_OrgApacheXalanExtensionsObjectFactory_ConfigurationError))
#define OrgApacheXalanExtensionsObjectFactory_ConfigurationError_

#define RESTRICT_JavaLangError 1
#define INCLUDE_JavaLangError 1
#include "java/lang/Error.h"

@class JavaLangException;
@class JavaLangThrowable;

/*!
 @brief A configuration error.
 */
@interface OrgApacheXalanExtensionsObjectFactory_ConfigurationError : JavaLangError
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

+ (jlong)serialVersionUID;

#pragma mark Package-Private

/*!
 @brief Construct a new instance with the specified detail string and
  exception.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)msg
                     withJavaLangException:(JavaLangException *)x;

/*!
 @brief Returns the exception associated to this error.
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

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanExtensionsObjectFactory_ConfigurationError)

inline jlong OrgApacheXalanExtensionsObjectFactory_ConfigurationError_get_serialVersionUID(void);
#define OrgApacheXalanExtensionsObjectFactory_ConfigurationError_serialVersionUID 8564305128443551853LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanExtensionsObjectFactory_ConfigurationError, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanExtensionsObjectFactory_ConfigurationError_initWithNSString_withJavaLangException_(OrgApacheXalanExtensionsObjectFactory_ConfigurationError *self, NSString *msg, JavaLangException *x);

FOUNDATION_EXPORT OrgApacheXalanExtensionsObjectFactory_ConfigurationError *new_OrgApacheXalanExtensionsObjectFactory_ConfigurationError_initWithNSString_withJavaLangException_(NSString *msg, JavaLangException *x) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanExtensionsObjectFactory_ConfigurationError *create_OrgApacheXalanExtensionsObjectFactory_ConfigurationError_initWithNSString_withJavaLangException_(NSString *msg, JavaLangException *x);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanExtensionsObjectFactory_ConfigurationError)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanExtensionsObjectFactory")
