//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/axes/RTFIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathAxesRTFIterator")
#ifdef RESTRICT_OrgApacheXpathAxesRTFIterator
#define INCLUDE_ALL_OrgApacheXpathAxesRTFIterator 0
#else
#define INCLUDE_ALL_OrgApacheXpathAxesRTFIterator 1
#endif
#undef RESTRICT_OrgApacheXpathAxesRTFIterator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathAxesRTFIterator_) && (INCLUDE_ALL_OrgApacheXpathAxesRTFIterator || defined(INCLUDE_OrgApacheXpathAxesRTFIterator))
#define OrgApacheXpathAxesRTFIterator_

#define RESTRICT_OrgApacheXpathNodeSetDTM 1
#define INCLUDE_OrgApacheXpathNodeSetDTM 1
#include "org/apache/xpath/NodeSetDTM.h"

@class OrgApacheXmlDtmDTMManager;
@class OrgApacheXpathXPathContext;
@protocol OrgApacheXmlDtmDTMIterator;
@protocol OrgW3cDomNodeList;
@protocol OrgW3cDomTraversalNodeIterator;

@interface OrgApacheXpathAxesRTFIterator : OrgApacheXpathNodeSetDTM
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Constructor for RTFIterator
 */
- (instancetype __nonnull)initWithInt:(jint)root
        withOrgApacheXmlDtmDTMManager:(OrgApacheXmlDtmDTMManager *)manager;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithInt:(jint)arg0
                              withInt:(jint)arg1
        withOrgApacheXmlDtmDTMManager:(OrgApacheXmlDtmDTMManager *)arg2 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithOrgApacheXmlDtmDTMIterator:(id<OrgApacheXmlDtmDTMIterator>)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithOrgApacheXmlDtmDTMManager:(OrgApacheXmlDtmDTMManager *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithOrgApacheXpathNodeSetDTM:(OrgApacheXpathNodeSetDTM *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithOrgW3cDomNodeList:(id<OrgW3cDomNodeList>)arg0
                     withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithOrgW3cDomTraversalNodeIterator:(id<OrgW3cDomTraversalNodeIterator>)arg0
                                  withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathAxesRTFIterator)

inline jlong OrgApacheXpathAxesRTFIterator_get_serialVersionUID(void);
#define OrgApacheXpathAxesRTFIterator_serialVersionUID 7658117366258528996LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathAxesRTFIterator, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathAxesRTFIterator_initWithInt_withOrgApacheXmlDtmDTMManager_(OrgApacheXpathAxesRTFIterator *self, jint root, OrgApacheXmlDtmDTMManager *manager);

FOUNDATION_EXPORT OrgApacheXpathAxesRTFIterator *new_OrgApacheXpathAxesRTFIterator_initWithInt_withOrgApacheXmlDtmDTMManager_(jint root, OrgApacheXmlDtmDTMManager *manager) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathAxesRTFIterator *create_OrgApacheXpathAxesRTFIterator_initWithInt_withOrgApacheXmlDtmDTMManager_(jint root, OrgApacheXmlDtmDTMManager *manager);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathAxesRTFIterator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathAxesRTFIterator")
