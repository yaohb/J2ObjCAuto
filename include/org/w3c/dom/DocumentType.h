//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/org/w3c/dom/DocumentType.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgW3cDomDocumentType")
#ifdef RESTRICT_OrgW3cDomDocumentType
#define INCLUDE_ALL_OrgW3cDomDocumentType 0
#else
#define INCLUDE_ALL_OrgW3cDomDocumentType 1
#endif
#undef RESTRICT_OrgW3cDomDocumentType

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgW3cDomDocumentType_) && (INCLUDE_ALL_OrgW3cDomDocumentType || defined(INCLUDE_OrgW3cDomDocumentType))
#define OrgW3cDomDocumentType_

#define RESTRICT_OrgW3cDomNode 1
#define INCLUDE_OrgW3cDomNode 1
#include "org/w3c/dom/Node.h"

@protocol OrgW3cDomNamedNodeMap;

/*!
 @brief Each <code>Document</code> has a <code>doctype</code> attribute whose value
  is either <code>null</code> or a <code>DocumentType</code> object.The
  <code>DocumentType</code> interface in the DOM Core provides an interface
  to the list of entities that are defined for the document, and little
  else because the effect of namespaces and the various XML schema efforts
  on DTD representation are not clearly understood as of this writing.
 <p>DOM Level 3 doesn't support editing <code>DocumentType</code> nodes. 
 <code>DocumentType</code> nodes are read-only. 
 <p>See also the <a href='http://www.w3.org/TR/2004/REC-DOM-Level-3-Core-20040407'>Document Object Model (DOM) Level 3 Core Specification</a>.
 */
@protocol OrgW3cDomDocumentType < OrgW3cDomNode, JavaObject >

/*!
 @brief The name of DTD; i.e., the name immediately following the 
 <code>DOCTYPE</code> keyword.
 */
- (NSString *)getName;

/*!
 @brief A <code>NamedNodeMap</code> containing the general entities, both
  external and internal, declared in the DTD.Parameter entities are
  not contained.
 Duplicates are discarded. For example in: 
 @code
&lt;!DOCTYPE
  ex SYSTEM "ex.dtd" [ &lt;!ENTITY foo "foo"&gt; &lt;!ENTITY bar
  "bar"&gt; &lt;!ENTITY bar "bar2"&gt; &lt;!ENTITY % baz "baz"&gt;
  ]&gt; &lt;ex/&gt;
@endcode
   the interface provides access to <code>foo</code>
  and the first declaration of <code>bar</code> but not the second
  declaration of <code>bar</code> or <code>baz</code>. Every node in
  this map also implements the <code>Entity</code> interface. 
 <br>The DOM Level 2 does not support editing entities, therefore 
 <code>entities</code> cannot be altered in any way.
 */
- (id<OrgW3cDomNamedNodeMap>)getEntities;

/*!
 @brief A <code>NamedNodeMap</code> containing the notations declared in the
  DTD.Duplicates are discarded.
 Every node in this map also implements
  the <code>Notation</code> interface. 
 <br>The DOM Level 2 does not support editing notations, therefore 
 <code>notations</code> cannot be altered in any way.
 */
- (id<OrgW3cDomNamedNodeMap>)getNotations;

/*!
 @brief The public identifier of the external subset.
 @since DOM Level 2
 */
- (NSString *)getPublicId;

/*!
 @brief The system identifier of the external subset.This may be an absolute
  URI or not.
 @since DOM Level 2
 */
- (NSString *)getSystemId;

/*!
 @brief The internal subset as a string, or <code>null</code> if there is none.
 This is does not contain the delimiting square brackets. 
 <p><b>Note:</b> The actual content returned depends on how much
  information is available to the implementation. This may vary
  depending on various parameters, including the XML processor used to
  build the document.
 @since DOM Level 2
 */
- (NSString *)getInternalSubset;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomDocumentType)

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomDocumentType)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgW3cDomDocumentType")