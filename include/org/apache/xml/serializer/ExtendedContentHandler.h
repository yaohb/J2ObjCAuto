//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/ExtendedContentHandler.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerExtendedContentHandler")
#ifdef RESTRICT_OrgApacheXmlSerializerExtendedContentHandler
#define INCLUDE_ALL_OrgApacheXmlSerializerExtendedContentHandler 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerExtendedContentHandler 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerExtendedContentHandler

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlSerializerExtendedContentHandler_) && (INCLUDE_ALL_OrgApacheXmlSerializerExtendedContentHandler || defined(INCLUDE_OrgApacheXmlSerializerExtendedContentHandler))
#define OrgApacheXmlSerializerExtendedContentHandler_

#define RESTRICT_OrgXmlSaxContentHandler 1
#define INCLUDE_OrgXmlSaxContentHandler 1
#include "org/xml/sax/ContentHandler.h"

@class OrgApacheXmlSerializerNamespaceMappings;
@protocol JavaxXmlTransformSourceLocator;
@protocol OrgW3cDomNode;
@protocol OrgXmlSaxAttributes;

/*!
 @brief This interface describes extensions to the SAX ContentHandler interface.
 It is intended to be used by a serializer. The methods on this interface will
  implement SAX- like behavior. This allows the gradual collection of
  information rather than having it all up front. For example the call 
 @code

  startElement(namespaceURI,localName,qName,atts) 
  
@endcode
  could be replaced with the calls 
 @code

  startElement(namespaceURI,localName,qName)
  addAttributes(atts) 
  
@endcode
  If there are no attributes the second call can be dropped. If attributes are
  to be added one at a time with calls to 
 @code

  addAttribute(namespaceURI, localName, qName, type, value) 
  
@endcode
 */
@protocol OrgApacheXmlSerializerExtendedContentHandler < OrgXmlSaxContentHandler, JavaObject >

/*!
 @brief Add at attribute to the current element
 @param uri the namespace URI of the attribute name
 @param localName the local name of the attribute (without prefix)
 @param rawName the qualified name of the attribute
 @param type the attribute type typically character data (CDATA)
 @param value the value of the attribute
 @param XSLAttribute true if the added attribute is coming from an xsl:attribute element
 @throw SAXException
 */
- (void)addAttributeWithNSString:(NSString *)uri
                    withNSString:(NSString *)localName
                    withNSString:(NSString *)rawName
                    withNSString:(NSString *)type
                    withNSString:(NSString *)value
                     withBoolean:(jboolean)XSLAttribute;

/*!
 @brief Add attributes to the current element
 @param atts the attributes to add.
 @throw SAXException
 */
- (void)addAttributesWithOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)atts;

/*!
 @brief Add an attribute to the current element.The namespace URI of the
  attribute will be calculated from the prefix of qName.
 The local name
  will be derived from qName and the type will be assumed to be "CDATA".
 @param qName
 @param value
 */
- (void)addAttributeWithNSString:(NSString *)qName
                    withNSString:(NSString *)value;

/*!
 @brief This method is used to notify of a character event, but passing the data
  as a character String rather than the standard character array.
 @param chars the character data
 @throw SAXException
 */
- (void)charactersWithNSString:(NSString *)chars;

/*!
 @brief This method is used to notify of a character event, but passing the data
  as a DOM Node rather than the standard character array.
 @param node a DOM Node containing text.
 @throw SAXException
 */
- (void)charactersWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

/*!
 @brief This method is used to notify that an element has ended.Unlike the
  standard SAX method 
 @code

  endElement(namespaceURI,localName,qName) 
  
@endcode
  only the last parameter is passed.
 If needed the serializer can derive
  the localName from the qualified name and derive the namespaceURI from
  its implementation.
 @param elemName the fully qualified element name.
 @throw SAXException
 */
- (void)endElementWithNSString:(NSString *)elemName;

/*!
 @brief This method is used to notify that an element is starting.
 This method is just like the standard SAX method 
 @code

  startElement(uri,localName,qname,atts) 
  
@endcode
  but without the attributes.
 @param uri the namespace URI of the element
 @param localName the local name (without prefix) of the element
 @param qName the qualified name of the element
 @throw SAXException
 */
- (void)startElementWithNSString:(NSString *)uri
                    withNSString:(NSString *)localName
                    withNSString:(NSString *)qName;

/*!
 @brief This method is used to notify of the start of an element
 @param qName the fully qualified name of the element
 @throw SAXException
 */
- (void)startElementWithNSString:(NSString *)qName;

/*!
 @brief This method is used to notify that a prefix mapping is to start, but
  after an element is started.The SAX method call 
 @code

  startPrefixMapping(prefix,uri) 
  
@endcode
  is used just before an element starts and applies to the element to come,
  not to the current element.
 This method applies to the current element.
  For example one could make the calls in this order: 
 @code

  startElement("prfx8:elem9")
  namespaceAfterStartElement("http://namespace8","prfx8") 
  
@endcode
 @param uri the namespace URI being declared
 @param prefix the prefix that maps to the given namespace
 @throw SAXException
 */
- (void)namespaceAfterStartElementWithNSString:(NSString *)uri
                                  withNSString:(NSString *)prefix;

/*!
 @brief This method is used to notify that a prefix maping is to start, which can
  be for the current element, or for the one to come.
 @param prefix the prefix that maps to the given URI
 @param uri the namespace URI of the given prefix
 @param shouldFlush if true this call is like the SAX  startPrefixMapping(prefix,uri) call and the mapping applies to the
   element to come.  If false the mapping applies to the current element.
 @return boolean false if the prefix mapping was already in effect (in
  other words we are just re-declaring), true if this is a new, never
  before seen mapping for the element.
 @throw SAXException
 */
- (jboolean)startPrefixMappingWithNSString:(NSString *)prefix
                              withNSString:(NSString *)uri
                               withBoolean:(jboolean)shouldFlush;

/*!
 @brief Notify of an entity reference.
 @param entityName the name of the entity
 @throw SAXException
 */
- (void)entityReferenceWithNSString:(NSString *)entityName;

/*!
 @brief This method returns an object that has the current namespace mappings in
  effect.
 @return NamespaceMappings an object that has the current namespace
  mappings in effect.
 */
- (OrgApacheXmlSerializerNamespaceMappings *)getNamespaceMappings;

/*!
 @brief This method returns the prefix that currently maps to the given namespace
  URI.
 @param uri the namespace URI
 @return String the prefix that currently maps to the given URI.
 */
- (NSString *)getPrefixWithNSString:(NSString *)uri;

/*!
 @brief This method gets the prefix associated with a current element or
  attribute name.
 @param name the qualified name of an element, or attribute
 @param isElement true if it is an element name, false if it is an  atttribute name
 @return String the namespace URI associated with the element or
  attribute.
 */
- (NSString *)getNamespaceURIWithNSString:(NSString *)name
                              withBoolean:(jboolean)isElement;

/*!
 @brief This method returns the namespace URI currently associated with the
  prefix.
 @param prefix a prefix of an element or attribute.
 @return String the namespace URI currently associated with the prefix.
 */
- (NSString *)getNamespaceURIFromPrefixWithNSString:(NSString *)prefix;

/*!
 @brief This method is used to set the source locator, which might be used to
  generated an error message.
 @param locator the source locator
 */
- (void)setSourceLocatorWithJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)locator;

/*!
 @brief Add a unique attribute to the current element.
 The attribute is guaranteed to be unique here. The serializer can write
  it out immediately without saving it in a table first. The integer
  flag contains information about the attribute, which helps the serializer
  to decide whether a particular processing is needed.
 @param qName the fully qualified attribute name.
 @param value the attribute value
 @param flags a bitwise flag
 */
- (void)addUniqueAttributeWithNSString:(NSString *)qName
                          withNSString:(NSString *)value
                               withInt:(jint)flags;

/*!
 @brief Add an attribute from an xsl:attribute element.
 @param qName the qualified attribute name (prefix:localName)
 @param value the attributes value
 @param uri the uri that the prefix of the qName is mapped to.
 */
- (void)addXSLAttributeWithNSString:(NSString *)qName
                       withNSString:(NSString *)value
                       withNSString:(NSString *)uri;

/*!
 @brief Add at attribute to the current element, not from an xsl:attribute
  element.
 @param uri the namespace URI of the attribute name
 @param localName the local name of the attribute (without prefix)
 @param rawName the qualified name of the attribute
 @param type the attribute type typically character data (CDATA)
 @param value the value of the attribute
 @throw SAXException
 */
- (void)addAttributeWithNSString:(NSString *)uri
                    withNSString:(NSString *)localName
                    withNSString:(NSString *)rawName
                    withNSString:(NSString *)type
                    withNSString:(NSString *)value;

@end

@interface OrgApacheXmlSerializerExtendedContentHandler : NSObject
@property (readonly, class) jint NO_BAD_CHARS NS_SWIFT_NAME(NO_BAD_CHARS);
@property (readonly, class) jint HTML_ATTREMPTY NS_SWIFT_NAME(HTML_ATTREMPTY);
@property (readonly, class) jint HTML_ATTRURL NS_SWIFT_NAME(HTML_ATTRURL);

+ (jint)NO_BAD_CHARS;

+ (jint)HTML_ATTREMPTY;

+ (jint)HTML_ATTRURL;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerExtendedContentHandler)

inline jint OrgApacheXmlSerializerExtendedContentHandler_get_NO_BAD_CHARS(void);
#define OrgApacheXmlSerializerExtendedContentHandler_NO_BAD_CHARS 1
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerExtendedContentHandler, NO_BAD_CHARS, jint)

inline jint OrgApacheXmlSerializerExtendedContentHandler_get_HTML_ATTREMPTY(void);
#define OrgApacheXmlSerializerExtendedContentHandler_HTML_ATTREMPTY 2
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerExtendedContentHandler, HTML_ATTREMPTY, jint)

inline jint OrgApacheXmlSerializerExtendedContentHandler_get_HTML_ATTRURL(void);
#define OrgApacheXmlSerializerExtendedContentHandler_HTML_ATTRURL 4
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerExtendedContentHandler, HTML_ATTRURL, jint)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerExtendedContentHandler)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerExtendedContentHandler")
