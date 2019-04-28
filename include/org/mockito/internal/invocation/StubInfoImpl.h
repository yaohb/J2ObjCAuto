//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/internal/invocation/StubInfoImpl.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalInvocationStubInfoImpl")
#ifdef RESTRICT_OrgMockitoInternalInvocationStubInfoImpl
#define INCLUDE_ALL_OrgMockitoInternalInvocationStubInfoImpl 0
#else
#define INCLUDE_ALL_OrgMockitoInternalInvocationStubInfoImpl 1
#endif
#undef RESTRICT_OrgMockitoInternalInvocationStubInfoImpl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalInvocationStubInfoImpl_) && (INCLUDE_ALL_OrgMockitoInternalInvocationStubInfoImpl || defined(INCLUDE_OrgMockitoInternalInvocationStubInfoImpl))
#define OrgMockitoInternalInvocationStubInfoImpl_

#define RESTRICT_OrgMockitoInvocationStubInfo 1
#define INCLUDE_OrgMockitoInvocationStubInfo 1
#include "org/mockito/invocation/StubInfo.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@protocol OrgMockitoInvocationDescribedInvocation;
@protocol OrgMockitoInvocationLocation;

@interface OrgMockitoInternalInvocationStubInfoImpl : NSObject < OrgMockitoInvocationStubInfo, JavaIoSerializable >

#pragma mark Public

- (instancetype __nonnull)initWithOrgMockitoInvocationDescribedInvocation:(id<OrgMockitoInvocationDescribedInvocation>)stubbedAt;

- (id<OrgMockitoInvocationLocation>)stubbedAt;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalInvocationStubInfoImpl)

FOUNDATION_EXPORT void OrgMockitoInternalInvocationStubInfoImpl_initWithOrgMockitoInvocationDescribedInvocation_(OrgMockitoInternalInvocationStubInfoImpl *self, id<OrgMockitoInvocationDescribedInvocation> stubbedAt);

FOUNDATION_EXPORT OrgMockitoInternalInvocationStubInfoImpl *new_OrgMockitoInternalInvocationStubInfoImpl_initWithOrgMockitoInvocationDescribedInvocation_(id<OrgMockitoInvocationDescribedInvocation> stubbedAt) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalInvocationStubInfoImpl *create_OrgMockitoInternalInvocationStubInfoImpl_initWithOrgMockitoInvocationDescribedInvocation_(id<OrgMockitoInvocationDescribedInvocation> stubbedAt);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInvocationStubInfoImpl)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalInvocationStubInfoImpl")