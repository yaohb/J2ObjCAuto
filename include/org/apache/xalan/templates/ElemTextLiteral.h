//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemTextLiteral.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemTextLiteral")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemTextLiteral
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemTextLiteral 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemTextLiteral 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemTextLiteral

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanTemplatesElemTextLiteral_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemTextLiteral || defined(INCLUDE_OrgApacheXalanTemplatesElemTextLiteral))
#define OrgApacheXalanTemplatesElemTextLiteral_

#define RESTRICT_OrgApacheXalanTemplatesElemTemplateElement 1
#define INCLUDE_OrgApacheXalanTemplatesElemTemplateElement 1
#include "org/apache/xalan/templates/ElemTemplateElement.h"

@class IOSCharArray;
@class OrgApacheXalanTransformerTransformerImpl;

/*!
 @brief Implement a text literal.
 - seealso: <a href="http://www.w3.org/TR/xslt#section-Creating-Text">section-Creating-Text in XSLT Specification</a>
 */
@interface OrgApacheXalanTemplatesElemTextLiteral : OrgApacheXalanTemplatesElemTemplateElement
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Copy the text literal to the result tree.
 @param transformer non-null reference to the the current transform-time state.
 @throw TransformerException
 */
- (void)executeWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

/*!
 @brief Get the characters that will be output to the result tree..
 @return Array of characters that will be output to the result tree
 */
- (IOSCharArray *)getChars;

/*!
 @brief Get the "disable-output-escaping" attribute.
 Normally, the xml output method escapes & and < (and
  possibly other characters) when outputting text nodes.
  This ensures that the output is well-formed XML. However,
  it is sometimes convenient to be able to produce output
  that is almost, but not quite well-formed XML; for
  example, the output may include ill-formed sections
  which are intended to be transformed into well-formed
  XML by a subsequent non-XML aware process. For this reason,
  XSLT provides a mechanism for disabling output escaping.
  An xsl:value-of or xsl:text element may have a
  disable-output-escaping attribute; the allowed values
  are yes or no; the default is no; if the value is yes,
  then a text node generated by instantiating the xsl:value-of
  or xsl:text element should be output without any escaping.
 - seealso: <a href="http://www.w3.org/TR/xslt#disable-output-escaping">disable-output-escaping in XSLT Specification</a>
 @return Boolean value of "disable-output-escaping" attribute.
 */
- (jboolean)getDisableOutputEscaping;

/*!
 @brief Return the node name.
 @return The element's name
 */
- (NSString *)getNodeName;

/*!
 @brief Get the value of the node as a string.
 @return null
 */
- (NSString *)getNodeValue;

/*!
 @brief Get whether or not space should be preserved.
 @return Boolean flag indicating whether 
  or not space should be preserved
 */
- (jboolean)getPreserveSpace;

/*!
 @brief Get an integer representation of the element type.
 @return An integer representation of the element, defined in the
      Constants class.
 - seealso: org.apache.xalan.templates.Constants
 */
- (jint)getXSLToken;

/*!
 @brief Set the characters that will be output to the result tree..
 @param v Array of characters that will be output to the result tree
 */
- (void)setCharsWithCharArray:(IOSCharArray *)v;

/*!
 @brief Set the "disable-output-escaping" attribute.
 Normally, the xml output method escapes & and < (and
  possibly other characters) when outputting text nodes.
  This ensures that the output is well-formed XML. However,
  it is sometimes convenient to be able to produce output
  that is almost, but not quite well-formed XML; for
  example, the output may include ill-formed sections
  which are intended to be transformed into well-formed
  XML by a subsequent non-XML aware process. For this reason,
  XSLT provides a mechanism for disabling output escaping.
  An xsl:value-of or xsl:text element may have a
  disable-output-escaping attribute; the allowed values
  are yes or no; the default is no; if the value is yes,
  then a text node generated by instantiating the xsl:value-of
  or xsl:text element should be output without any escaping.
 - seealso: <a href="http://www.w3.org/TR/xslt#disable-output-escaping">disable-output-escaping in XSLT Specification</a>
 @param v Boolean value for "disable-output-escaping" attribute.
 */
- (void)setDisableOutputEscapingWithBoolean:(jboolean)v;

/*!
 @brief Set whether or not space should be preserved.
 @param v Boolean flag indicating whether   or not space should be preserved
 */
- (void)setPreserveSpaceWithBoolean:(jboolean)v;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemTextLiteral)

inline jlong OrgApacheXalanTemplatesElemTextLiteral_get_serialVersionUID(void);
#define OrgApacheXalanTemplatesElemTextLiteral_serialVersionUID -7872620006767660088LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemTextLiteral, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemTextLiteral_init(OrgApacheXalanTemplatesElemTextLiteral *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemTextLiteral *new_OrgApacheXalanTemplatesElemTextLiteral_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemTextLiteral *create_OrgApacheXalanTemplatesElemTextLiteral_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemTextLiteral)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemTextLiteral")
