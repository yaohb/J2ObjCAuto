//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/junit/MockitoJUnit.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoJunitMockitoJUnit")
#ifdef RESTRICT_OrgMockitoJunitMockitoJUnit
#define INCLUDE_ALL_OrgMockitoJunitMockitoJUnit 0
#else
#define INCLUDE_ALL_OrgMockitoJunitMockitoJUnit 1
#endif
#undef RESTRICT_OrgMockitoJunitMockitoJUnit

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoJunitMockitoJUnit_) && (INCLUDE_ALL_OrgMockitoJunitMockitoJUnit || defined(INCLUDE_OrgMockitoJunitMockitoJUnit))
#define OrgMockitoJunitMockitoJUnit_

@protocol OrgMockitoJunitMockitoRule;

/*!
 @brief The JUnit rule can be used instead of <code>org.mockito.runners.MockitoJUnitRunner</code>.See <code>MockitoRule</code>.
 @since 1.10.17
 */
@interface OrgMockitoJunitMockitoJUnit : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Creates rule instance that initiates &#064;Mocks
  See <code>MockitoRule</code>.
 @return the rule instance
 */
+ (id<OrgMockitoJunitMockitoRule>)rule;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoJunitMockitoJUnit)

FOUNDATION_EXPORT void OrgMockitoJunitMockitoJUnit_init(OrgMockitoJunitMockitoJUnit *self);

FOUNDATION_EXPORT OrgMockitoJunitMockitoJUnit *new_OrgMockitoJunitMockitoJUnit_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoJunitMockitoJUnit *create_OrgMockitoJunitMockitoJUnit_init(void);

FOUNDATION_EXPORT id<OrgMockitoJunitMockitoRule> OrgMockitoJunitMockitoJUnit_rule(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoJunitMockitoJUnit)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoJunitMockitoJUnit")
