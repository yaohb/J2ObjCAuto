//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/Function.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFunction")
#ifdef RESTRICT_OrgApacheXpathFunctionsFunction
#define INCLUDE_ALL_OrgApacheXpathFunctionsFunction 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFunction 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFunction

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathFunctionsFunction_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFunction || defined(INCLUDE_OrgApacheXpathFunctionsFunction))
#define OrgApacheXpathFunctionsFunction_

#define RESTRICT_OrgApacheXpathExpression 1
#define INCLUDE_OrgApacheXpathExpression 1
#include "org/apache/xpath/Expression.h"

@class OrgApacheXpathCompilerCompiler;
@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;
@class OrgApacheXpathXPathVisitor;
@protocol OrgApacheXpathExpressionOwner;

/*!
 @brief This is a superclass of all XPath functions.This allows two
  ways for the class to be called.
 One method is that the
  super class processes the arguments and hands the results to
  the derived class, the other method is that the derived
  class may process it's own arguments, which is faster since
  the arguments don't have to be added to an array, but causes
  a larger code footprint.
 */
@interface OrgApacheXpathFunctionsFunction : OrgApacheXpathExpression
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Call the visitors for the function arguments.
 */
- (void)callArgVisitorsWithOrgApacheXpathXPathVisitor:(OrgApacheXpathXPathVisitor *)visitor;

/*!
 - seealso: org.apache.xpath.XPathVisitable#callVisitors(ExpressionOwner, XPathVisitor)
 */
- (void)callVisitorsWithOrgApacheXpathExpressionOwner:(id<OrgApacheXpathExpressionOwner>)owner
                       withOrgApacheXpathXPathVisitor:(OrgApacheXpathXPathVisitor *)visitor;

/*!
 @brief Check that the number of arguments passed to this function is correct.
 This method is meant to be overloaded by derived classes, to check for 
  the number of arguments for a specific function type.  This method is 
  called by the compiler for static number of arguments checking.
 @param argNum The number of arguments that is being passed to the function.
 @throw WrongNumberArgsException
 */
- (void)checkNumberArgsWithInt:(jint)argNum;

/*!
 - seealso: Expression#deepEquals(Expression)
 */
- (jboolean)deepEqualsWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)expr;

/*!
 @brief Execute an XPath function object.The function must return
  a valid object.
 @param xctxt The execution current context.
 @return A valid XObject.
 @throw javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief This function is currently only being used by Position()
  and Last().See respective functions for more detail.
 */
- (void)postCompileStepWithOrgApacheXpathCompilerCompiler:(OrgApacheXpathCompilerCompiler *)compiler;

/*!
 @brief Set an argument expression for a function.This method is called by the 
  XPath compiler.
 @param arg non-null expression that represents the argument.
 @param argNum The argument number index.
 @throw WrongNumberArgsExceptionIf the argNum parameter is beyond what 
  is specified for this function.
 */
- (void)setArgWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)arg
                                   withInt:(jint)argNum;

#pragma mark Protected

/*!
 @brief Constructs and throws a WrongNumberArgException with the appropriate
  message for this function object.This method is meant to be overloaded
  by derived classes so that the message will be as specific as possible.
 @throw WrongNumberArgsException
 */
- (void)reportWrongNumberArgs;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFunction)

inline jlong OrgApacheXpathFunctionsFunction_get_serialVersionUID(void);
#define OrgApacheXpathFunctionsFunction_serialVersionUID 6927661240854599768LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFunction, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFunction_init(OrgApacheXpathFunctionsFunction *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFunction)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFunction")
