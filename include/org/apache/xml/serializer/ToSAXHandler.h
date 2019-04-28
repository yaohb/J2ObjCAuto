//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/ToSAXHandler.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerToSAXHandler")
#ifdef RESTRICT_OrgApacheXmlSerializerToSAXHandler
#define INCLUDE_ALL_OrgApacheXmlSerializerToSAXHandler 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerToSAXHandler 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerToSAXHandler

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlSerializerToSAXHandler_) && (INCLUDE_ALL_OrgApacheXmlSerializerToSAXHandler || defined(INCLUDE_OrgApacheXmlSerializerToSAXHandler))
#define OrgApacheXmlSerializerToSAXHandler_

#define RESTRICT_OrgApacheXmlSerializerSerializerBase 1
#define INCLUDE_OrgApacheXmlSerializerSerializerBase 1
#include "org/apache/xml/serializer/SerializerBase.h"

@class JavaUtilVector;
@class OrgXmlSaxSAXParseException;
@protocol OrgApacheXmlSerializerTransformStateSetter;
@protocol OrgW3cDomNode;
@protocol OrgXmlSaxAttributes;
@protocol OrgXmlSaxContentHandler;
@protocol OrgXmlSaxExtLexicalHandler;

/*!
 @brief This class is used to provide a base behavior to be inherited
  by other To...SAXHandler serializers.
 This class is not a public API.
 */
@interface OrgApacheXmlSerializerToSAXHandler : OrgApacheXmlSerializerSerializerBase {
 @public
  /*!
   @brief Underlying SAX handler.Taken from XSLTC
   */
  id<OrgXmlSaxContentHandler> m_saxHandler_;
  /*!
   @brief Underlying LexicalHandler.Taken from XSLTC
   */
  id<OrgXmlSaxExtLexicalHandler> m_lexHandler_;
  /*!
   @brief If this is true, then the content handler wrapped by this
  serializer implements the TransformState interface which
  will give the content handler access to the state of
  the transform.
   */
  id<OrgApacheXmlSerializerTransformStateSetter> m_state_;
}

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)hdlr
                           withOrgXmlSaxExtLexicalHandler:(id<OrgXmlSaxExtLexicalHandler>)lex
                                             withNSString:(NSString *)encoding;

- (instancetype __nonnull)initWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)handler
                                             withNSString:(NSString *)encoding;

/*!
 @brief Add a unique attribute
 */
- (void)addUniqueAttributeWithNSString:(NSString *)qName
                          withNSString:(NSString *)value
                               withInt:(jint)flags;

/*!
 @brief This method gets the node's value as a String and uses that String as if
  it were an input character notification.
 @param node the Node to serialize
 @throw org.xml.sax.SAXException
 */
- (void)charactersWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

/*!
 @brief Receive notification of character data.
 @param characters The string of characters to process.
 @throw org.xml.sax.SAXException
 - seealso: ExtendedContentHandler#characters(String)
 */
- (void)charactersWithNSString:(NSString *)characters;

/*!
 @brief Receive notification of a comment.
 - seealso: ExtendedLexicalHandler#comment(String)
 */
- (void)commentWithNSString:(NSString *)comment;

/*!
 - seealso: org.xml.sax.ErrorHandler#error(SAXParseException)
 */
- (void)errorWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)exc;

/*!
 - seealso: org.xml.sax.ErrorHandler#fatalError(SAXParseException)
 */
- (void)fatalErrorWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)exc;

/*!
 @brief This method flushes any pending events, which can be startDocument()
  closing the opening tag of an element, or closing an open CDATA section.
 */
- (void)flushPending;

/*!
 @brief Do nothing as this is an abstract class.All subclasses will need to
  define their behavior if it is different.
 - seealso: org.xml.sax.ContentHandler#processingInstruction(String, String)
 */
- (void)processingInstructionWithNSString:(NSString *)target
                             withNSString:(NSString *)data;

/*!
 @brief Try's to reset the super class and reset this class for 
  re-use, so that you don't need to create a new serializer 
  (mostly for performance reasons).
 @return true if the class was successfuly reset.
 - seealso: Serializer#reset()
 */
- (jboolean)reset;

/*!
 @brief Does nothing.The setting of CDATA section elements has an impact on
  stream serializers.
 - seealso: SerializationHandler#setCdataSectionElements(java.util.Vector)
 */
- (void)setCdataSectionElementsWithJavaUtilVector:(JavaUtilVector *)URI_and_localNames;

/*!
 @brief Sets the SAX ContentHandler.
 @param _saxHandler The ContentHandler to set
 */
- (void)setContentHandlerWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)_saxHandler;

/*!
 @brief Sets the LexicalHandler.
 @param _lexHandler The LexicalHandler to set
 */
- (void)setLexHandlerWithOrgXmlSaxExtLexicalHandler:(id<OrgXmlSaxExtLexicalHandler>)_lexHandler;

/*!
 @brief Set whether or not namespace declarations (e.g.
 xmlns:foo) should appear as attributes of 
  elements
 @param doOutputNSAttr whether or not namespace declarations  should appear as attributes
 */
- (void)setShouldOutputNSAttrWithBoolean:(jboolean)doOutputNSAttr;

/*!
 @brief Pass in a reference to a TransformState object, which
  can be used during SAX ContentHandler events to obtain
  information about he state of the transformation.This
  method will be called  before each startDocument event.
 @param ts A reference to a TransformState object
 */
- (void)setTransformStateWithOrgApacheXmlSerializerTransformStateSetter:(id<OrgApacheXmlSerializerTransformStateSetter>)ts;

/*!
 @brief Do nothing.
 - seealso: org.xml.sax.ext.LexicalHandler#startDTD(String, String, String)
 */
- (void)startDTDWithNSString:(NSString *)arg0
                withNSString:(NSString *)arg1
                withNSString:(NSString *)arg2;

/*!
 @brief An element starts, but attributes are not fully known yet.
 @param qName the element name, with prefix (if any).
 - seealso: ExtendedContentHandler#startElement(String)
 */
- (void)startElementWithNSString:(NSString *)qName;

/*!
 @brief Receives notification that an element starts, but attributes are not
  fully known yet.
 @param uri the URI of the namespace of the element (optional)
 @param localName the element name, but without prefix (optional)
 @param qName the element name, with prefix, if any (required)
 - seealso: ExtendedContentHandler#startElement(String, String, String)
 */
- (void)startElementWithNSString:(NSString *)uri
                    withNSString:(NSString *)localName
                    withNSString:(NSString *)qName;

/*!
 @brief Receive notification of the beginning of an element, although this is a
  SAX method additional namespace or attribute information can occur before
  or after this call, that is associated with this element.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: org.xml.sax.ContentHandler#startElement
 - seealso: org.xml.sax.ContentHandler#endElement
 - seealso: org.xml.sax.AttributeList
 @throw org.xml.sax.SAXException
 - seealso: org.xml.sax.ContentHandler#startElement(String,String,String,Attributes)
 */
- (void)startElementWithNSString:(NSString *)arg0
                    withNSString:(NSString *)arg1
                    withNSString:(NSString *)arg2
         withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)arg3;

/*!
 - seealso: org.xml.sax.ErrorHandler#warning(SAXParseException)
 */
- (void)warningWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)exc;

#pragma mark Protected

- (void)closeCDATA;

- (void)closeStartTag;

/*!
 @brief Pass callback to the SAX Handler
 */
- (void)startDocumentInternal;

#pragma mark Package-Private

/*!
 @brief Returns true if namespace declarations from calls such as
  startPrefixMapping("prefix1","uri1") should
  also be mirrored with self generated additional attributes of elements 
  that declare the namespace, for example the attribute xmlns:prefix1="uri1"
 */
- (jboolean)getShouldOutputNSAttr;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerToSAXHandler)

J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerToSAXHandler, m_saxHandler_, id<OrgXmlSaxContentHandler>)
J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerToSAXHandler, m_lexHandler_, id<OrgXmlSaxExtLexicalHandler>)
J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerToSAXHandler, m_state_, id<OrgApacheXmlSerializerTransformStateSetter>)

FOUNDATION_EXPORT void OrgApacheXmlSerializerToSAXHandler_init(OrgApacheXmlSerializerToSAXHandler *self);

FOUNDATION_EXPORT void OrgApacheXmlSerializerToSAXHandler_initWithOrgXmlSaxContentHandler_withOrgXmlSaxExtLexicalHandler_withNSString_(OrgApacheXmlSerializerToSAXHandler *self, id<OrgXmlSaxContentHandler> hdlr, id<OrgXmlSaxExtLexicalHandler> lex, NSString *encoding);

FOUNDATION_EXPORT void OrgApacheXmlSerializerToSAXHandler_initWithOrgXmlSaxContentHandler_withNSString_(OrgApacheXmlSerializerToSAXHandler *self, id<OrgXmlSaxContentHandler> handler, NSString *encoding);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerToSAXHandler)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerToSAXHandler")
