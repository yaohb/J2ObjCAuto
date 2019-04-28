//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/defaultanswers/ForwardsInvocations.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersForwardsInvocations")
#ifdef RESTRICT_OrgMockitoInternalStubbingDefaultanswersForwardsInvocations
#define INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersForwardsInvocations 0
#else
#define INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersForwardsInvocations 1
#endif
#undef RESTRICT_OrgMockitoInternalStubbingDefaultanswersForwardsInvocations

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalStubbingDefaultanswersForwardsInvocations_) && (INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersForwardsInvocations || defined(INCLUDE_OrgMockitoInternalStubbingDefaultanswersForwardsInvocations))
#define OrgMockitoInternalStubbingDefaultanswersForwardsInvocations_

#define RESTRICT_OrgMockitoStubbingAnswer 1
#define INCLUDE_OrgMockitoStubbingAnswer 1
#include "org/mockito/stubbing/Answer.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@protocol OrgMockitoInvocationInvocationOnMock;

/*!
 @brief Internal answer to forward invocations on a real instance.
 @since 1.9.5
 */
@interface OrgMockitoInternalStubbingDefaultanswersForwardsInvocations : NSObject < OrgMockitoStubbingAnswer, JavaIoSerializable >

#pragma mark Public

- (instancetype __nonnull)initWithId:(id)delegatedObject;

- (id)answerWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingDefaultanswersForwardsInvocations)

FOUNDATION_EXPORT void OrgMockitoInternalStubbingDefaultanswersForwardsInvocations_initWithId_(OrgMockitoInternalStubbingDefaultanswersForwardsInvocations *self, id delegatedObject);

FOUNDATION_EXPORT OrgMockitoInternalStubbingDefaultanswersForwardsInvocations *new_OrgMockitoInternalStubbingDefaultanswersForwardsInvocations_initWithId_(id delegatedObject) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalStubbingDefaultanswersForwardsInvocations *create_OrgMockitoInternalStubbingDefaultanswersForwardsInvocations_initWithId_(id delegatedObject);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingDefaultanswersForwardsInvocations)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersForwardsInvocations")
