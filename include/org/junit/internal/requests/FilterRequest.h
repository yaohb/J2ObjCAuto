//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/junit/build_result/java/org/junit/internal/requests/FilterRequest.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalRequestsFilterRequest")
#ifdef RESTRICT_OrgJunitInternalRequestsFilterRequest
#define INCLUDE_ALL_OrgJunitInternalRequestsFilterRequest 0
#else
#define INCLUDE_ALL_OrgJunitInternalRequestsFilterRequest 1
#endif
#undef RESTRICT_OrgJunitInternalRequestsFilterRequest

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitInternalRequestsFilterRequest_) && (INCLUDE_ALL_OrgJunitInternalRequestsFilterRequest || defined(INCLUDE_OrgJunitInternalRequestsFilterRequest))
#define OrgJunitInternalRequestsFilterRequest_

#define RESTRICT_OrgJunitRunnerRequest 1
#define INCLUDE_OrgJunitRunnerRequest 1
#include "org/junit/runner/Request.h"

@class OrgJunitRunnerManipulationFilter;
@class OrgJunitRunnerRunner;

/*!
 @brief A filtered <code>Request</code>.
 */
@interface OrgJunitInternalRequestsFilterRequest : OrgJunitRunnerRequest

#pragma mark Public

/*!
 @brief Creates a filtered Request
 @param classRequest a <code>Request</code>  describing your Tests
 @param filter<code>Filter</code>  to apply to the Tests described in  
  <code> classRequest </code>
 */
- (instancetype __nonnull)initWithOrgJunitRunnerRequest:(OrgJunitRunnerRequest *)classRequest
                   withOrgJunitRunnerManipulationFilter:(OrgJunitRunnerManipulationFilter *)filter;

- (OrgJunitRunnerRunner *)getRunner;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRequestsFilterRequest)

FOUNDATION_EXPORT void OrgJunitInternalRequestsFilterRequest_initWithOrgJunitRunnerRequest_withOrgJunitRunnerManipulationFilter_(OrgJunitInternalRequestsFilterRequest *self, OrgJunitRunnerRequest *classRequest, OrgJunitRunnerManipulationFilter *filter);

FOUNDATION_EXPORT OrgJunitInternalRequestsFilterRequest *new_OrgJunitInternalRequestsFilterRequest_initWithOrgJunitRunnerRequest_withOrgJunitRunnerManipulationFilter_(OrgJunitRunnerRequest *classRequest, OrgJunitRunnerManipulationFilter *filter) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalRequestsFilterRequest *create_OrgJunitInternalRequestsFilterRequest_initWithOrgJunitRunnerRequest_withOrgJunitRunnerManipulationFilter_(OrgJunitRunnerRequest *classRequest, OrgJunitRunnerManipulationFilter *filter);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRequestsFilterRequest)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalRequestsFilterRequest")
