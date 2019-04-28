//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/extensions/ExtensionHandler.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanExtensionsExtensionHandler")
#ifdef RESTRICT_OrgApacheXalanExtensionsExtensionHandler
#define INCLUDE_ALL_OrgApacheXalanExtensionsExtensionHandler 0
#else
#define INCLUDE_ALL_OrgApacheXalanExtensionsExtensionHandler 1
#endif
#undef RESTRICT_OrgApacheXalanExtensionsExtensionHandler

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanExtensionsExtensionHandler_) && (INCLUDE_ALL_OrgApacheXalanExtensionsExtensionHandler || defined(INCLUDE_OrgApacheXalanExtensionsExtensionHandler))
#define OrgApacheXalanExtensionsExtensionHandler_

@class IOSClass;
@class JavaUtilVector;
@class OrgApacheXalanTemplatesElemTemplateElement;
@class OrgApacheXalanTemplatesStylesheet;
@class OrgApacheXalanTransformerTransformerImpl;
@class OrgApacheXpathFunctionsFuncExtFunction;
@protocol OrgApacheXalanExtensionsExpressionContext;

/*!
 @brief Abstract base class for handling an extension namespace for XPath.
 Provides functions to test a function's existence and call a function.
  Also provides functions for calling an element and testing for
  an element's existence.
 @author Sanjiva Weerawarana (sanjiva@@watson.ibm.com)
 */
@interface OrgApacheXalanExtensionsExtensionHandler : NSObject {
 @public
  /*!
   @brief uri of the extension namespace
   */
  NSString *m_namespaceUri_;
  /*!
   @brief scripting language of implementation
   */
  NSString *m_scriptLang_;
}

#pragma mark Public

/*!
 @brief Process a call to a function.
 @param extFunction The XPath extension function.
 @param args The arguments of the function call.
 @param exprContext The context in which this expression is being executed.
 @return the return value of the function evaluation.
 @throw TransformerExceptionif parsing trouble
 */
- (id)callFunctionWithOrgApacheXpathFunctionsFuncExtFunction:(OrgApacheXpathFunctionsFuncExtFunction *)extFunction
                                          withJavaUtilVector:(JavaUtilVector *)args
               withOrgApacheXalanExtensionsExpressionContext:(id<OrgApacheXalanExtensionsExpressionContext>)exprContext;

/*!
 @brief Process a call to a function.
 @param funcName Function name.
 @param args The arguments of the function call.
 @param methodKey A key that uniquely identifies this class and method call.
 @param exprContext The context in which this expression is being executed.
 @return the return value of the function evaluation.
 @throw TransformerExceptionif parsing trouble
 */
- (id)callFunctionWithNSString:(NSString *)funcName
            withJavaUtilVector:(JavaUtilVector *)args
                        withId:(id)methodKey
withOrgApacheXalanExtensionsExpressionContext:(id<OrgApacheXalanExtensionsExpressionContext>)exprContext;

/*!
 @brief Tests whether a certain element name is known within this namespace.
 @param element Name of element to check
 @return true if its known, false if not.
 */
- (jboolean)isElementAvailableWithNSString:(NSString *)element;

/*!
 @brief Tests whether a certain function name is known within this namespace.
 @param function name of the function being tested
 @return true if its known, false if not.
 */
- (jboolean)isFunctionAvailableWithNSString:(NSString *)function;

/*!
 @brief Process a call to this extension namespace via an element.As a side
  effect, the results are sent to the TransformerImpl's result tree.
 @param localPart Element name's local part.
 @param element The extension element being processed.
 @param transformer Handle to TransformerImpl.
 @param stylesheetTree The compiled stylesheet tree.
 @param methodKey A key that uniquely identifies this class and method call.
 @throw XSLProcessorExceptionthrown if something goes wrong
             while running the extension handler.
 @throw MalformedURLExceptionif loading trouble
 @throw FileNotFoundExceptionif loading trouble
 @throw IOExceptionif loading trouble
 @throw TransformerExceptionif parsing trouble
 */
- (void)processElementWithNSString:(NSString *)localPart
withOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)element
withOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer
withOrgApacheXalanTemplatesStylesheet:(OrgApacheXalanTemplatesStylesheet *)stylesheetTree
                            withId:(id)methodKey;

#pragma mark Protected

/*!
 @brief Construct a new extension namespace handler given all the information
  needed.
 @param namespaceUri the extension namespace URI that I'm implementing
 @param scriptLang language of code implementing the extension
 */
- (instancetype __nonnull)initWithNSString:(NSString *)namespaceUri
                              withNSString:(NSString *)scriptLang;

#pragma mark Package-Private

/*!
 @brief This method loads a class using the context class loader if we're
  running under Java2 or higher.
 @param className_ Name of the class to load
 */
+ (IOSClass *)getClassForNameWithNSString:(NSString *)className_;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanExtensionsExtensionHandler)

J2OBJC_FIELD_SETTER(OrgApacheXalanExtensionsExtensionHandler, m_namespaceUri_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXalanExtensionsExtensionHandler, m_scriptLang_, NSString *)

FOUNDATION_EXPORT IOSClass *OrgApacheXalanExtensionsExtensionHandler_getClassForNameWithNSString_(NSString *className_);

FOUNDATION_EXPORT void OrgApacheXalanExtensionsExtensionHandler_initWithNSString_withNSString_(OrgApacheXalanExtensionsExtensionHandler *self, NSString *namespaceUri, NSString *scriptLang);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanExtensionsExtensionHandler)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanExtensionsExtensionHandler")