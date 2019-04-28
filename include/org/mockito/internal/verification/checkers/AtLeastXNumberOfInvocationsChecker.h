//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/checkers/AtLeastXNumberOfInvocationsChecker.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker")
#ifdef RESTRICT_OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker
#define INCLUDE_ALL_OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker 0
#else
#define INCLUDE_ALL_OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker 1
#endif
#undef RESTRICT_OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker_) && (INCLUDE_ALL_OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker || defined(INCLUDE_OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker))
#define OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker_

@class OrgMockitoExceptionsReporter;
@class OrgMockitoInternalInvocationInvocationMarker;
@class OrgMockitoInternalInvocationInvocationMatcher;
@class OrgMockitoInternalInvocationInvocationsFinder;
@protocol JavaUtilList;

@interface OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker : NSObject {
 @public
  OrgMockitoExceptionsReporter *reporter_;
  OrgMockitoInternalInvocationInvocationsFinder *finder_;
  OrgMockitoInternalInvocationInvocationMarker *invocationMarker_;
}

#pragma mark Public

- (instancetype __nonnull)init;

- (void)checkWithJavaUtilList:(id<JavaUtilList>)invocations
withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted
                      withInt:(jint)wantedCount;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker)

J2OBJC_FIELD_SETTER(OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker, reporter_, OrgMockitoExceptionsReporter *)
J2OBJC_FIELD_SETTER(OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker, finder_, OrgMockitoInternalInvocationInvocationsFinder *)
J2OBJC_FIELD_SETTER(OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker, invocationMarker_, OrgMockitoInternalInvocationInvocationMarker *)

FOUNDATION_EXPORT void OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker_init(OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker *self);

FOUNDATION_EXPORT OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker *new_OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker *create_OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker")
