//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/DOM3Serializer.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerDOM3Serializer")
#ifdef RESTRICT_OrgApacheXmlSerializerDOM3Serializer
#define INCLUDE_ALL_OrgApacheXmlSerializerDOM3Serializer 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerDOM3Serializer 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerDOM3Serializer

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlSerializerDOM3Serializer_) && (INCLUDE_ALL_OrgApacheXmlSerializerDOM3Serializer || defined(INCLUDE_OrgApacheXmlSerializerDOM3Serializer))
#define OrgApacheXmlSerializerDOM3Serializer_

@class IOSCharArray;
@protocol OrgW3cDomDOMErrorHandler;
@protocol OrgW3cDomLsLSSerializerFilter;
@protocol OrgW3cDomNode;

/*!
 @brief This interface is not intended to be used
  by an end user, but rather by an XML parser that is implementing the DOM 
  Level 3 Load and Save APIs.
 <p>
  
  See the DOM Level 3 Load and Save interface at <a href="http://www.w3.org/TR/2004/REC-DOM-Level-3-LS-20040407/load-save.html#LS-LSSerializer">LSSeializer</a>.
  
  For a list of configuration parameters for DOM Level 3 see <a href="http://www.w3.org/TR/2004/REC-DOM-Level-3-Core-20040407/core.html#DOMConfiguration">DOMConfiguration</a>.
  For additional configuration parameters available with the DOM Level 3 Load and Save API LSSerializer see 
 <a href="http://www.w3.org/TR/2004/REC-DOM-Level-3-LS-20040407/load-save.html#LS-LSSerializer-config">LSerializer config</a>.
  <p>
  The following example uses a DOM3Serializer indirectly, through an an XML
  parser that uses this class as part of its implementation of the DOM Level 3
  Load and Save APIs, and is the prefered way to serialize with DOM Level 3 APIs. 
 <p>
  Example: 
 @code

     public class TestDOM3 {
     public static void main(String args[]) throws Exception {
         // Get document to serialize
         TestDOM3 test = new TestDOM3();        
         // Serialize using standard DOM Level 3 Load/Save APIs        
         System.out.println(test.testDOM3LS());
     }
     public org.w3c.dom.Document getDocument() throws Exception {
         // Create a simple DOM Document.
         javax.xml.parsers.DocumentBuilderFactory factory = 
             javax.xml.parsers.DocumentBuilderFactory.newInstance();
         javax.xml.parsers.DocumentBuilder builder = factory.newDocumentBuilder();
         byte[] bytes = "<parent><child></parent>".getBytes();
         java.io.InputStream is = new java.io.ByteArrayInputStream(bytes);
         org.w3c.dom.Document doc = builder.parse(is);
         return doc;
     }    
     //
     // This method uses standard DOM Level 3 Load Save APIs:
     //   org.w3c.dom.bootstrap.DOMImplementationRegistry
     //   org.w3c.dom.ls.DOMImplementationLS    //   org.w3c.dom.ls.DOMImplementationLS
     //   org.w3c.dom.ls.LSSerializer
     //   org.w3c.dom.DOMConfiguration    //   
     // The only thing non-standard in this method is the value set for the
     // name of the class implementing the DOM Level 3 Load Save APIs,
     // which in this case is:
     //   org.apache.xerces.dom.DOMImplementationSourceImpl    //
     public String testDOM3LS() throws Exception {
         
         // Get a simple DOM Document that will be serialized.
         org.w3c.dom.Document docToSerialize = getDocument();
         // Get a factory (DOMImplementationLS) for creating a Load and Save object.
         org.w3c.dom.ls.DOMImplementationLS impl = 
             (org.w3c.dom.ls.DOMImplementationLS) 
             org.w3c.dom.bootstrap.DOMImplementationRegistry.newInstance().getDOMImplementation("LS");
         // Use the factory to create an object (LSSerializer) used to 
         // write out or save the document.
         org.w3c.dom.ls.LSSerializer writer = impl.createLSSerializer();
         org.w3c.dom.DOMConfiguration config = writer.getDomConfig();
         config.setParameter("format-pretty-print", Boolean.TRUE);        
         // Use the LSSerializer to write out or serialize the document to a String.
         String serializedXML = writer.writeToString(docToSerialize);
         return serializedXML;
     }    
     }  // end of class TestDOM3 
  
@endcode
 - seealso: <a href="http://www.w3.org/TR/2004/REC-DOM-Level-3-Core-20040407/core.html#DOMConfiguration">DOMConfiguration</a>
 - seealso: <a href="http://www.w3.org/TR/2004/REC-DOM-Level-3-LS-20040407/load-save.html#LS-LSSerializer-config">LSSerializer</a>
 - seealso: org.apache.xml.serializer.Serializer
 - seealso: org.apache.xml.serializer.DOMSerializer
 */
@protocol OrgApacheXmlSerializerDOM3Serializer < JavaObject >

/*!
 @brief Serializes the Level 3 DOM node.Throws an exception only if an I/O
  exception occured while serializing.
 This interface is a public API.
 @param node the Level 3 DOM node to serialize
 @throw IOExceptionif an I/O exception occured while serializing
 */
- (void)serializeDOM3WithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

/*!
 @brief Sets a DOMErrorHandler on the DOM Level 3 Serializer.
 This interface is a public API.
 @param handler the Level 3 DOMErrorHandler
 */
- (void)setErrorHandlerWithOrgW3cDomDOMErrorHandler:(id<OrgW3cDomDOMErrorHandler>)handler;

/*!
 @brief Returns a DOMErrorHandler set on the DOM Level 3 Serializer.
 This interface is a public API.
 @return A Level 3 DOMErrorHandler
 */
- (id<OrgW3cDomDOMErrorHandler>)getErrorHandler;

/*!
 @brief Sets a LSSerializerFilter on the DOM Level 3 Serializer to filter nodes
  during serialization.
 This interface is a public API.
 @param filter the Level 3 LSSerializerFilter
 */
- (void)setNodeFilterWithOrgW3cDomLsLSSerializerFilter:(id<OrgW3cDomLsLSSerializerFilter>)filter;

/*!
 @brief Returns a LSSerializerFilter set on the DOM Level 3 Serializer to filter nodes
  during serialization.
 This interface is a public API.
 @return The Level 3 LSSerializerFilter
 */
- (id<OrgW3cDomLsLSSerializerFilter>)getNodeFilter;

/*!
 @brief Sets the end-of-line sequence of characters to be used during serialization
 @param newLine The end-of-line sequence of characters to be used during serialization
 */
- (void)setNewLineWithCharArray:(IOSCharArray *)newLine;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerDOM3Serializer)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerDOM3Serializer)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerDOM3Serializer")
