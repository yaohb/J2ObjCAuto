//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/AllPermission.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityAllPermission")
#ifdef RESTRICT_JavaSecurityAllPermission
#define INCLUDE_ALL_JavaSecurityAllPermission 0
#else
#define INCLUDE_ALL_JavaSecurityAllPermission 1
#endif
#undef RESTRICT_JavaSecurityAllPermission

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityAllPermission_) && (INCLUDE_ALL_JavaSecurityAllPermission || defined(INCLUDE_JavaSecurityAllPermission))
#define JavaSecurityAllPermission_

#define RESTRICT_JavaSecurityPermission 1
#define INCLUDE_JavaSecurityPermission 1
#include "java/security/Permission.h"

/*!
 @brief Legacy security code; do not use.
 */
@interface JavaSecurityAllPermission : JavaSecurityPermission

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                              withNSString:(NSString *)actions;

- (NSString *)getActions;

- (jboolean)impliesWithJavaSecurityPermission:(JavaSecurityPermission *)p;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityAllPermission)

FOUNDATION_EXPORT void JavaSecurityAllPermission_init(JavaSecurityAllPermission *self);

FOUNDATION_EXPORT JavaSecurityAllPermission *new_JavaSecurityAllPermission_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityAllPermission *create_JavaSecurityAllPermission_init(void);

FOUNDATION_EXPORT void JavaSecurityAllPermission_initWithNSString_withNSString_(JavaSecurityAllPermission *self, NSString *name, NSString *actions);

FOUNDATION_EXPORT JavaSecurityAllPermission *new_JavaSecurityAllPermission_initWithNSString_withNSString_(NSString *name, NSString *actions) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityAllPermission *create_JavaSecurityAllPermission_initWithNSString_withNSString_(NSString *name, NSString *actions);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityAllPermission)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityAllPermission")
