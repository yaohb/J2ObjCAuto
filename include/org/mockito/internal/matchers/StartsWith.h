//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/StartsWith.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalMatchersStartsWith")
#ifdef RESTRICT_OrgMockitoInternalMatchersStartsWith
#define INCLUDE_ALL_OrgMockitoInternalMatchersStartsWith 0
#else
#define INCLUDE_ALL_OrgMockitoInternalMatchersStartsWith 1
#endif
#undef RESTRICT_OrgMockitoInternalMatchersStartsWith

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalMatchersStartsWith_) && (INCLUDE_ALL_OrgMockitoInternalMatchersStartsWith || defined(INCLUDE_OrgMockitoInternalMatchersStartsWith))
#define OrgMockitoInternalMatchersStartsWith_

#define RESTRICT_OrgMockitoArgumentMatcher 1
#define INCLUDE_OrgMockitoArgumentMatcher 1
#include "org/mockito/ArgumentMatcher.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@protocol OrgHamcrestDescription;

@interface OrgMockitoInternalMatchersStartsWith : OrgMockitoArgumentMatcher < JavaIoSerializable >

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString *)prefix;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesWithId:(id)actual;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersStartsWith)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersStartsWith_initWithNSString_(OrgMockitoInternalMatchersStartsWith *self, NSString *prefix);

FOUNDATION_EXPORT OrgMockitoInternalMatchersStartsWith *new_OrgMockitoInternalMatchersStartsWith_initWithNSString_(NSString *prefix) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalMatchersStartsWith *create_OrgMockitoInternalMatchersStartsWith_initWithNSString_(NSString *prefix);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersStartsWith)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalMatchersStartsWith")
