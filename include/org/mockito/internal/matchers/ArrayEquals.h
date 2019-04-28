//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/ArrayEquals.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalMatchersArrayEquals")
#ifdef RESTRICT_OrgMockitoInternalMatchersArrayEquals
#define INCLUDE_ALL_OrgMockitoInternalMatchersArrayEquals 0
#else
#define INCLUDE_ALL_OrgMockitoInternalMatchersArrayEquals 1
#endif
#undef RESTRICT_OrgMockitoInternalMatchersArrayEquals

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalMatchersArrayEquals_) && (INCLUDE_ALL_OrgMockitoInternalMatchersArrayEquals || defined(INCLUDE_OrgMockitoInternalMatchersArrayEquals))
#define OrgMockitoInternalMatchersArrayEquals_

#define RESTRICT_OrgMockitoInternalMatchersEquals 1
#define INCLUDE_OrgMockitoInternalMatchersEquals 1
#include "org/mockito/internal/matchers/Equals.h"

@class IOSObjectArray;
@protocol OrgHamcrestDescription;

@interface OrgMockitoInternalMatchersArrayEquals : OrgMockitoInternalMatchersEquals

#pragma mark Public

- (instancetype __nonnull)initWithId:(id)wanted;

+ (IOSObjectArray *)createObjectArrayWithId:(id)array;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesWithId:(id)actual;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersArrayEquals)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersArrayEquals_initWithId_(OrgMockitoInternalMatchersArrayEquals *self, id wanted);

FOUNDATION_EXPORT OrgMockitoInternalMatchersArrayEquals *new_OrgMockitoInternalMatchersArrayEquals_initWithId_(id wanted) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalMatchersArrayEquals *create_OrgMockitoInternalMatchersArrayEquals_initWithId_(id wanted);

FOUNDATION_EXPORT IOSObjectArray *OrgMockitoInternalMatchersArrayEquals_createObjectArrayWithId_(id array);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersArrayEquals)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalMatchersArrayEquals")
