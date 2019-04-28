//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/FunctionMultiArgs.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFunctionMultiArgs")
#ifdef RESTRICT_OrgApacheXpathFunctionsFunctionMultiArgs
#define INCLUDE_ALL_OrgApacheXpathFunctionsFunctionMultiArgs 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFunctionMultiArgs 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFunctionMultiArgs

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathFunctionsFunctionMultiArgs_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFunctionMultiArgs || defined(INCLUDE_OrgApacheXpathFunctionsFunctionMultiArgs))
#define OrgApacheXpathFunctionsFunctionMultiArgs_

#define RESTRICT_OrgApacheXpathFunctionsFunction3Args 1
#define INCLUDE_OrgApacheXpathFunctionsFunction3Args 1
#include "org/apache/xpath/functions/Function3Args.h"

@class IOSObjectArray;
@class JavaUtilVector;
@class OrgApacheXpathExpression;
@class OrgApacheXpathXPathVisitor;

/*!
 @brief Base class for functions that accept an undetermined number of multiple
  arguments.
 */
@interface OrgApacheXpathFunctionsFunctionMultiArgs : OrgApacheXpathFunctionsFunction3Args {
 @public
  /*!
   @brief Argument expressions that are at index 3 or greater.
   */
  IOSObjectArray *m_args_;
}
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 - seealso: org.apache.xpath.XPathVisitable#callVisitors(ExpressionOwner, XPathVisitor)
 */
- (void)callArgVisitorsWithOrgApacheXpathXPathVisitor:(OrgApacheXpathXPathVisitor *)visitor;

/*!
 @brief Tell if this expression or it's subexpressions can traverse outside
  the current subtree.
 @return true if traversal outside the context node's subtree can occur.
 */
- (jboolean)canTraverseOutsideSubtree;

/*!
 @brief Check that the number of arguments passed to this function is correct.
 @param argNum The number of arguments that is being passed to the function.
 @throw WrongNumberArgsException
 */
- (void)checkNumberArgsWithInt:(jint)argNum;

/*!
 - seealso: Expression#deepEquals(Expression)
 */
- (jboolean)deepEqualsWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)expr;

/*!
 @brief This function is used to fixup variables from QNames to stack frame 
  indexes at stylesheet build time.
 @param vars List of QNames that correspond to variables.  This list   should be searched backwards for the first qualified name that 
   corresponds to the variable reference qname.  The position of the 
   QName in the vector from the start of the vector will be its position 
   in the stack frame (but variables above the globalsTop value will need 
   to be offset to the current stack frame).
 */
- (void)fixupVariablesWithJavaUtilVector:(JavaUtilVector *)vars
                                 withInt:(jint)globalsSize;

/*!
 @brief Return an expression array containing arguments at index 3 or greater.
 @return An array that contains the arguments at index 3 or greater.
 */
- (IOSObjectArray *)getArgs;

/*!
 @brief Set an argument expression for a function.This method is called by the
  XPath compiler.
 @param arg non-null expression that represents the argument.
 @param argNum The argument number index.
 @throw WrongNumberArgsExceptionIf a derived class determines that the
  number of arguments is incorrect.
 */
- (void)setArgWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)arg
                                   withInt:(jint)argNum;

#pragma mark Protected

/*!
 @brief Constructs and throws a WrongNumberArgException with the appropriate
  message for this function object.This class supports an arbitrary
  number of arguments, so this method must never be called.
 @throw WrongNumberArgsException
 */
- (void)reportWrongNumberArgs;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFunctionMultiArgs)

J2OBJC_FIELD_SETTER(OrgApacheXpathFunctionsFunctionMultiArgs, m_args_, IOSObjectArray *)

inline jlong OrgApacheXpathFunctionsFunctionMultiArgs_get_serialVersionUID(void);
#define OrgApacheXpathFunctionsFunctionMultiArgs_serialVersionUID 7117257746138417181LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFunctionMultiArgs, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFunctionMultiArgs_init(OrgApacheXpathFunctionsFunctionMultiArgs *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFunctionMultiArgs *new_OrgApacheXpathFunctionsFunctionMultiArgs_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFunctionMultiArgs *create_OrgApacheXpathFunctionsFunctionMultiArgs_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFunctionMultiArgs)

#endif

#if !defined (OrgApacheXpathFunctionsFunctionMultiArgs_ArgMultiOwner_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFunctionMultiArgs || defined(INCLUDE_OrgApacheXpathFunctionsFunctionMultiArgs_ArgMultiOwner))
#define OrgApacheXpathFunctionsFunctionMultiArgs_ArgMultiOwner_

#define RESTRICT_OrgApacheXpathExpressionOwner 1
#define INCLUDE_OrgApacheXpathExpressionOwner 1
#include "org/apache/xpath/ExpressionOwner.h"

@class OrgApacheXpathExpression;
@class OrgApacheXpathFunctionsFunctionMultiArgs;

@interface OrgApacheXpathFunctionsFunctionMultiArgs_ArgMultiOwner : NSObject < OrgApacheXpathExpressionOwner > {
 @public
  jint m_argIndex_;
}

#pragma mark Public

/*!
 - seealso: ExpressionOwner#getExpression()
 */
- (OrgApacheXpathExpression *)getExpression;

/*!
 - seealso: ExpressionOwner#setExpression(Expression)
 */
- (void)setExpressionWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)exp;

#pragma mark Package-Private

- (instancetype __nonnull)initWithOrgApacheXpathFunctionsFunctionMultiArgs:(OrgApacheXpathFunctionsFunctionMultiArgs *)outer$
                                                                   withInt:(jint)index;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFunctionMultiArgs_ArgMultiOwner)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFunctionMultiArgs_ArgMultiOwner_initWithOrgApacheXpathFunctionsFunctionMultiArgs_withInt_(OrgApacheXpathFunctionsFunctionMultiArgs_ArgMultiOwner *self, OrgApacheXpathFunctionsFunctionMultiArgs *outer$, jint index);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFunctionMultiArgs_ArgMultiOwner *new_OrgApacheXpathFunctionsFunctionMultiArgs_ArgMultiOwner_initWithOrgApacheXpathFunctionsFunctionMultiArgs_withInt_(OrgApacheXpathFunctionsFunctionMultiArgs *outer$, jint index) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFunctionMultiArgs_ArgMultiOwner *create_OrgApacheXpathFunctionsFunctionMultiArgs_ArgMultiOwner_initWithOrgApacheXpathFunctionsFunctionMultiArgs_withInt_(OrgApacheXpathFunctionsFunctionMultiArgs *outer$, jint index);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFunctionMultiArgs_ArgMultiOwner)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFunctionMultiArgs")
