//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/checkers/AtLeastDiscrepancy.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalVerificationCheckersAtLeastDiscrepancy")
#ifdef RESTRICT_OrgMockitoInternalVerificationCheckersAtLeastDiscrepancy
#define INCLUDE_ALL_OrgMockitoInternalVerificationCheckersAtLeastDiscrepancy 0
#else
#define INCLUDE_ALL_OrgMockitoInternalVerificationCheckersAtLeastDiscrepancy 1
#endif
#undef RESTRICT_OrgMockitoInternalVerificationCheckersAtLeastDiscrepancy

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalVerificationCheckersAtLeastDiscrepancy_) && (INCLUDE_ALL_OrgMockitoInternalVerificationCheckersAtLeastDiscrepancy || defined(INCLUDE_OrgMockitoInternalVerificationCheckersAtLeastDiscrepancy))
#define OrgMockitoInternalVerificationCheckersAtLeastDiscrepancy_

#define RESTRICT_OrgMockitoInternalReportingDiscrepancy 1
#define INCLUDE_OrgMockitoInternalReportingDiscrepancy 1
#include "org/mockito/internal/reporting/Discrepancy.h"

@interface OrgMockitoInternalVerificationCheckersAtLeastDiscrepancy : OrgMockitoInternalReportingDiscrepancy

#pragma mark Public

- (instancetype __nonnull)initWithInt:(jint)wantedCount
                              withInt:(jint)actualCount;

- (NSString *)getPluralizedWantedCount;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationCheckersAtLeastDiscrepancy)

FOUNDATION_EXPORT void OrgMockitoInternalVerificationCheckersAtLeastDiscrepancy_initWithInt_withInt_(OrgMockitoInternalVerificationCheckersAtLeastDiscrepancy *self, jint wantedCount, jint actualCount);

FOUNDATION_EXPORT OrgMockitoInternalVerificationCheckersAtLeastDiscrepancy *new_OrgMockitoInternalVerificationCheckersAtLeastDiscrepancy_initWithInt_withInt_(jint wantedCount, jint actualCount) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalVerificationCheckersAtLeastDiscrepancy *create_OrgMockitoInternalVerificationCheckersAtLeastDiscrepancy_initWithInt_withInt_(jint wantedCount, jint actualCount);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationCheckersAtLeastDiscrepancy)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalVerificationCheckersAtLeastDiscrepancy")