//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/utils/DOM2Helper.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerUtilsDOM2Helper")
#ifdef RESTRICT_OrgApacheXmlSerializerUtilsDOM2Helper
#define INCLUDE_ALL_OrgApacheXmlSerializerUtilsDOM2Helper 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerUtilsDOM2Helper 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerUtilsDOM2Helper

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlSerializerUtilsDOM2Helper_) && (INCLUDE_ALL_OrgApacheXmlSerializerUtilsDOM2Helper || defined(INCLUDE_OrgApacheXmlSerializerUtilsDOM2Helper))
#define OrgApacheXmlSerializerUtilsDOM2Helper_

@protocol OrgW3cDomNode;

/*!
 @brief This class provides a DOM level 2 "helper", which provides services currently 
  not provided be the DOM standard.
 This class is a copy of the one in org.apache.xml.utils. 
  It exists to cut the serializers dependancy on that package. 
  The differences from the original class are:
  it doesn't extend DOMHelper, not depricated, 
  dropped method isNodeAfter(Node node1, Node node2)
  dropped method parse(InputSource)
  dropped method supportSAX()
  dropped method setDocument(doc) 
  dropped method checkNode(Node)
  dropped method getDocument()
  dropped method getElementByID(String id, Document doc)
  dropped method getParentOfNode(Node node)
  dropped field Document m_doc;
  made class non-public
    
  This class is not a public API, it is only public because it is 
  used in org.apache.xml.serializer.
 */
@interface OrgApacheXmlSerializerUtilsDOM2Helper : NSObject

#pragma mark Public

/*!
 @brief Construct an instance.
 */
- (instancetype __nonnull)init;

/*!
 @brief Returns the local name of the given node, as defined by the
  XML Namespaces specification.This is prepared to handle documents
  built using DOM Level 1 methods by falling back upon explicitly
  parsing the node name.
 @param n Node to be examined
 @return String containing the local name, or null if the node
  was not assigned a Namespace.
 */
- (NSString *)getLocalNameOfNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)n;

/*!
 @brief Returns the Namespace Name (Namespace URI) for the given node.
 In a Level 2 DOM, you can ask the node itself. Note, however, that
  doing so conflicts with our decision in getLocalNameOfNode not
  to trust the that the DOM was indeed created using the Level 2
  methods. If Level 1 methods were used, these two functions will
  disagree with each other. 
 <p>
  TODO: Reconcile with getLocalNameOfNode.
 @param n Node to be examined
 @return String containing the Namespace URI bound to this DOM node
  at the time the Node was created.
 */
- (NSString *)getNamespaceOfNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)n;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerUtilsDOM2Helper)

FOUNDATION_EXPORT void OrgApacheXmlSerializerUtilsDOM2Helper_init(OrgApacheXmlSerializerUtilsDOM2Helper *self);

FOUNDATION_EXPORT OrgApacheXmlSerializerUtilsDOM2Helper *new_OrgApacheXmlSerializerUtilsDOM2Helper_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerUtilsDOM2Helper *create_OrgApacheXmlSerializerUtilsDOM2Helper_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerUtilsDOM2Helper)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerUtilsDOM2Helper")
