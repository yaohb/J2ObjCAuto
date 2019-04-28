//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/XPathFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathXPathFactory")
#ifdef RESTRICT_OrgApacheXpathXPathFactory
#define INCLUDE_ALL_OrgApacheXpathXPathFactory 0
#else
#define INCLUDE_ALL_OrgApacheXpathXPathFactory 1
#endif
#undef RESTRICT_OrgApacheXpathXPathFactory

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathXPathFactory_) && (INCLUDE_ALL_OrgApacheXpathXPathFactory || defined(INCLUDE_OrgApacheXpathXPathFactory))
#define OrgApacheXpathXPathFactory_

@class OrgApacheXpathXPath;
@protocol JavaxXmlTransformSourceLocator;
@protocol OrgApacheXmlUtilsPrefixResolver;

/*!
 @brief Factory class for creating an XPath.Implementors of XPath derivatives
  will need to make a derived class of this.
 */
@protocol OrgApacheXpathXPathFactory < JavaObject >

/*!
 @brief Create an XPath.
 @param exprString The XPath expression string.
 @param locator The location of the expression string, mainly for diagnostic                 purposes.
 @param prefixResolver This will be called in order to resolve prefixes          to namespace URIs.
 @param type One of <code>org.apache.xpath.XPath.SELECT</code>  or 
               <code>org.apache.xpath.XPath.MATCH</code> .
 @return an XPath ready for execution.
 */
- (OrgApacheXpathXPath *)createWithNSString:(NSString *)exprString
         withJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)locator
        withOrgApacheXmlUtilsPrefixResolver:(id<OrgApacheXmlUtilsPrefixResolver>)prefixResolver
                                    withInt:(jint)type;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathXPathFactory)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathXPathFactory)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathXPathFactory")
