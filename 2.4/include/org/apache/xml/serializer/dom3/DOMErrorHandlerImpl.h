//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/dom3/DOMErrorHandlerImpl.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerDom3DOMErrorHandlerImpl")
#ifdef RESTRICT_OrgApacheXmlSerializerDom3DOMErrorHandlerImpl
#define INCLUDE_ALL_OrgApacheXmlSerializerDom3DOMErrorHandlerImpl 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerDom3DOMErrorHandlerImpl 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerDom3DOMErrorHandlerImpl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlSerializerDom3DOMErrorHandlerImpl_) && (INCLUDE_ALL_OrgApacheXmlSerializerDom3DOMErrorHandlerImpl || defined(INCLUDE_OrgApacheXmlSerializerDom3DOMErrorHandlerImpl))
#define OrgApacheXmlSerializerDom3DOMErrorHandlerImpl_

#define RESTRICT_OrgW3cDomDOMErrorHandler 1
#define INCLUDE_OrgW3cDomDOMErrorHandler 1
#include "org/w3c/dom/DOMErrorHandler.h"

@protocol OrgW3cDomDOMError;

/*!
 @brief This is the default implementation of the ErrorHandler interface and is 
  used if one is not provided.The default implementation simply reports
  DOMErrors to System.err.
 */
@interface OrgApacheXmlSerializerDom3DOMErrorHandlerImpl : NSObject < OrgW3cDomDOMErrorHandler >

#pragma mark Public

/*!
 @brief Implementation of DOMErrorHandler.handleError that
  adds copy of error to list for later retrieval.
 */
- (jboolean)handleErrorWithOrgW3cDomDOMError:(id<OrgW3cDomDOMError>)error;

#pragma mark Package-Private

/*!
 @brief Default Constructor
 */
- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerDom3DOMErrorHandlerImpl)

FOUNDATION_EXPORT void OrgApacheXmlSerializerDom3DOMErrorHandlerImpl_init(OrgApacheXmlSerializerDom3DOMErrorHandlerImpl *self);

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMErrorHandlerImpl *new_OrgApacheXmlSerializerDom3DOMErrorHandlerImpl_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMErrorHandlerImpl *create_OrgApacheXmlSerializerDom3DOMErrorHandlerImpl_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerDom3DOMErrorHandlerImpl)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerDom3DOMErrorHandlerImpl")