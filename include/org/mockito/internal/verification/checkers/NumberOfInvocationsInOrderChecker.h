//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/checkers/NumberOfInvocationsInOrderChecker.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker")
#ifdef RESTRICT_OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker
#define INCLUDE_ALL_OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker 0
#else
#define INCLUDE_ALL_OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker 1
#endif
#undef RESTRICT_OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker_) && (INCLUDE_ALL_OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker || defined(INCLUDE_OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker))
#define OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker_

@class OrgMockitoExceptionsReporter;
@class OrgMockitoInternalInvocationInvocationMatcher;
@class OrgMockitoInternalInvocationInvocationsFinder;
@protocol JavaUtilList;
@protocol OrgMockitoInternalVerificationApiInOrderContext;

@interface OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

- (void)checkWithJavaUtilList:(id<JavaUtilList>)invocations
withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted
                      withInt:(jint)wantedCount
withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)context;

#pragma mark Package-Private

- (instancetype __nonnull)initWithOrgMockitoInternalInvocationInvocationsFinder:(OrgMockitoInternalInvocationInvocationsFinder *)finder
                                               withOrgMockitoExceptionsReporter:(OrgMockitoExceptionsReporter *)reporter;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker)

FOUNDATION_EXPORT void OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker_init(OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker *self);

FOUNDATION_EXPORT OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker *new_OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker *create_OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker_init(void);

FOUNDATION_EXPORT void OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker_initWithOrgMockitoInternalInvocationInvocationsFinder_withOrgMockitoExceptionsReporter_(OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker *self, OrgMockitoInternalInvocationInvocationsFinder *finder, OrgMockitoExceptionsReporter *reporter);

FOUNDATION_EXPORT OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker *new_OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker_initWithOrgMockitoInternalInvocationInvocationsFinder_withOrgMockitoExceptionsReporter_(OrgMockitoInternalInvocationInvocationsFinder *finder, OrgMockitoExceptionsReporter *reporter) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker *create_OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker_initWithOrgMockitoInternalInvocationInvocationsFinder_withOrgMockitoExceptionsReporter_(OrgMockitoInternalInvocationInvocationsFinder *finder, OrgMockitoExceptionsReporter *reporter);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker")
