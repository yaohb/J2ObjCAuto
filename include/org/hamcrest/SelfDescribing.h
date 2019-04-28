//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/junit/build_result/java/org/hamcrest/SelfDescribing.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgHamcrestSelfDescribing")
#ifdef RESTRICT_OrgHamcrestSelfDescribing
#define INCLUDE_ALL_OrgHamcrestSelfDescribing 0
#else
#define INCLUDE_ALL_OrgHamcrestSelfDescribing 1
#endif
#undef RESTRICT_OrgHamcrestSelfDescribing

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgHamcrestSelfDescribing_) && (INCLUDE_ALL_OrgHamcrestSelfDescribing || defined(INCLUDE_OrgHamcrestSelfDescribing))
#define OrgHamcrestSelfDescribing_

@protocol OrgHamcrestDescription;

/*!
 @brief The ability of an object to describe itself.
 */
@protocol OrgHamcrestSelfDescribing < JavaObject >

/*!
 @brief Generates a description of the object.The description may be part of a
  a description of a larger object of which this is just a component, so it 
  should be worded appropriately.
 @param description_ The description to be built or appended to.
 */
- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestSelfDescribing)

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestSelfDescribing)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgHamcrestSelfDescribing")