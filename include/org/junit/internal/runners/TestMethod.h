//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/junit/build_result/java/org/junit/internal/runners/TestMethod.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalRunnersTestMethod")
#ifdef RESTRICT_OrgJunitInternalRunnersTestMethod
#define INCLUDE_ALL_OrgJunitInternalRunnersTestMethod 0
#else
#define INCLUDE_ALL_OrgJunitInternalRunnersTestMethod 1
#endif
#undef RESTRICT_OrgJunitInternalRunnersTestMethod

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitInternalRunnersTestMethod_) && (INCLUDE_ALL_OrgJunitInternalRunnersTestMethod || defined(INCLUDE_OrgJunitInternalRunnersTestMethod))
#define OrgJunitInternalRunnersTestMethod_

@class IOSClass;
@class JavaLangReflectMethod;
@class JavaLangThrowable;
@class OrgJunitInternalRunnersTestClass;
@protocol JavaUtilList;

/*!
 */
__attribute__((deprecated))
@interface OrgJunitInternalRunnersTestMethod : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithJavaLangReflectMethod:(JavaLangReflectMethod *)method
                   withOrgJunitInternalRunnersTestClass:(OrgJunitInternalRunnersTestClass *)testClass;

- (jlong)getTimeout;

- (void)invokeWithId:(id)test;

- (jboolean)isIgnored;

#pragma mark Protected

- (IOSClass *)getExpectedException;

#pragma mark Package-Private

- (jboolean)expectsException;

- (id<JavaUtilList>)getAfters;

- (id<JavaUtilList>)getBefores;

- (jboolean)isUnexpectedWithJavaLangThrowable:(JavaLangThrowable *)exception;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRunnersTestMethod)

FOUNDATION_EXPORT void OrgJunitInternalRunnersTestMethod_initWithJavaLangReflectMethod_withOrgJunitInternalRunnersTestClass_(OrgJunitInternalRunnersTestMethod *self, JavaLangReflectMethod *method, OrgJunitInternalRunnersTestClass *testClass);

FOUNDATION_EXPORT OrgJunitInternalRunnersTestMethod *new_OrgJunitInternalRunnersTestMethod_initWithJavaLangReflectMethod_withOrgJunitInternalRunnersTestClass_(JavaLangReflectMethod *method, OrgJunitInternalRunnersTestClass *testClass) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalRunnersTestMethod *create_OrgJunitInternalRunnersTestMethod_initWithJavaLangReflectMethod_withOrgJunitInternalRunnersTestClass_(JavaLangReflectMethod *method, OrgJunitInternalRunnersTestClass *testClass);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRunnersTestMethod)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalRunnersTestMethod")
