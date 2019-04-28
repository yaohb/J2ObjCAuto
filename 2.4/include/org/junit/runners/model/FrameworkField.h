//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/junit/build_result/java/org/junit/runners/model/FrameworkField.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnersModelFrameworkField")
#ifdef RESTRICT_OrgJunitRunnersModelFrameworkField
#define INCLUDE_ALL_OrgJunitRunnersModelFrameworkField 0
#else
#define INCLUDE_ALL_OrgJunitRunnersModelFrameworkField 1
#endif
#undef RESTRICT_OrgJunitRunnersModelFrameworkField

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitRunnersModelFrameworkField_) && (INCLUDE_ALL_OrgJunitRunnersModelFrameworkField || defined(INCLUDE_OrgJunitRunnersModelFrameworkField))
#define OrgJunitRunnersModelFrameworkField_

#define RESTRICT_OrgJunitRunnersModelFrameworkMember 1
#define INCLUDE_OrgJunitRunnersModelFrameworkMember 1
#include "org/junit/runners/model/FrameworkMember.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaLangReflectField;

/*!
 @brief Represents a field on a test class (currently used only for Rules in 
 <code>BlockJUnit4ClassRunner</code>, but custom runners can make other uses)
 @since 4.7
 */
@interface OrgJunitRunnersModelFrameworkField : OrgJunitRunnersModelFrameworkMember

#pragma mark Public

/*!
 @brief Attempts to retrieve the value of this field on <code>target</code>
 */
- (id)getWithId:(id)target;

- (IOSObjectArray *)getAnnotations;

/*!
 @return the underlying java Field
 */
- (JavaLangReflectField *)getField;

- (NSString *)getName;

/*!
 @return the underlying Java Field type
 - seealso: java.lang.reflect.Field#getType()
 */
- (IOSClass *)getType;

- (jboolean)isPublic;

- (jboolean)isShadowedByWithOrgJunitRunnersModelFrameworkMember:(OrgJunitRunnersModelFrameworkField *)otherMember;

- (jboolean)isStatic;

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaLangReflectField:(JavaLangReflectField *)field;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnersModelFrameworkField)

FOUNDATION_EXPORT void OrgJunitRunnersModelFrameworkField_initWithJavaLangReflectField_(OrgJunitRunnersModelFrameworkField *self, JavaLangReflectField *field);

FOUNDATION_EXPORT OrgJunitRunnersModelFrameworkField *new_OrgJunitRunnersModelFrameworkField_initWithJavaLangReflectField_(JavaLangReflectField *field) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRunnersModelFrameworkField *create_OrgJunitRunnersModelFrameworkField_initWithJavaLangReflectField_(JavaLangReflectField *field);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnersModelFrameworkField)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnersModelFrameworkField")