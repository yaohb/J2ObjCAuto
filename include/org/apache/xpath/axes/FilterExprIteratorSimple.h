//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/axes/FilterExprIteratorSimple.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathAxesFilterExprIteratorSimple")
#ifdef RESTRICT_OrgApacheXpathAxesFilterExprIteratorSimple
#define INCLUDE_ALL_OrgApacheXpathAxesFilterExprIteratorSimple 0
#else
#define INCLUDE_ALL_OrgApacheXpathAxesFilterExprIteratorSimple 1
#endif
#undef RESTRICT_OrgApacheXpathAxesFilterExprIteratorSimple

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathAxesFilterExprIteratorSimple_) && (INCLUDE_ALL_OrgApacheXpathAxesFilterExprIteratorSimple || defined(INCLUDE_OrgApacheXpathAxesFilterExprIteratorSimple))
#define OrgApacheXpathAxesFilterExprIteratorSimple_

#define RESTRICT_OrgApacheXpathAxesLocPathIterator 1
#define INCLUDE_OrgApacheXpathAxesLocPathIterator 1
#include "org/apache/xpath/axes/LocPathIterator.h"

@class JavaUtilVector;
@class OrgApacheXpathCompilerCompiler;
@class OrgApacheXpathExpression;
@class OrgApacheXpathObjectsXNodeSet;
@class OrgApacheXpathXPathContext;
@class OrgApacheXpathXPathVisitor;
@protocol OrgApacheXmlUtilsPrefixResolver;

/*!
 @brief Class to use for one-step iteration that doesn't have a predicate, and 
  doesn't need to set the context.
 */
@interface OrgApacheXpathAxesFilterExprIteratorSimple : OrgApacheXpathAxesLocPathIterator
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Create a FilterExprIteratorSimple object.
 */
- (instancetype __nonnull)init;

/*!
 @brief Create a FilterExprIteratorSimple object.
 */
- (instancetype __nonnull)initWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)expr;

/*!
 @brief This will traverse the heararchy, calling the visitor for 
  each member.If the called visitor method returns 
  false, the subtree should not be called.
 @param visitor The visitor whose appropriate method will be called.
 */
- (void)callPredicateVisitorsWithOrgApacheXpathXPathVisitor:(OrgApacheXpathXPathVisitor *)visitor;

/*!
 - seealso: Expression#deepEquals(Expression)
 */
- (jboolean)deepEqualsWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)expr;

/*!
 @brief Detaches the walker from the set which it iterated over, releasing
  any computational resources and placing the iterator in the INVALID
  state.
 */
- (void)detach;

/*!
 @brief Execute the expression.Meant for reuse by other FilterExpr iterators 
  that are not derived from this object.
 */
+ (OrgApacheXpathObjectsXNodeSet *)executeFilterExprWithInt:(jint)context
                             withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                        withOrgApacheXmlUtilsPrefixResolver:(id<OrgApacheXmlUtilsPrefixResolver>)prefixResolver
                                                withBoolean:(jboolean)isTopLevel
                                                    withInt:(jint)stackFrame
                               withOrgApacheXpathExpression:(OrgApacheXpathExpression *)expr;

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
 @brief Get the analysis bits for this walker, as defined in the WalkerFactory.
 @return One of WalkerFactory#BIT_DESCENDANT, etc.
 */
- (jint)getAnalysisBits;

/*!
 @brief Returns the axis being iterated, if it is known.
 @return Axis.CHILD, etc., or -1 if the axis is not known or is of multiple 
  types.
 */
- (jint)getAxis;

/*!
 @brief Get the inner contained expression of this filter.
 */
- (OrgApacheXpathExpression *)getInnerExpression;

/*!
 @brief Returns true if all the nodes in the iteration well be returned in document 
  order.
 Warning: This can only be called after setRoot has been called!
 @return true as a default.
 */
- (jboolean)isDocOrdered;

/*!
 @brief Returns the next node in the set and advances the position of the
  iterator in the set.After a NodeIterator is created, the first call
  to nextNode() returns the first node in the set.
 @return The next <code>Node</code> in the set being iterated over, or
    <code>null</code> if there are no more members in that set.
 */
- (jint)nextNode;

/*!
 @brief Set the inner contained expression of this filter.
 */
- (void)setInnerExpressionWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)expr;

/*!
 @brief Initialize the context values for this expression
  after it is cloned.
 @param context The XPath runtime context for this  transformation.
 */
- (void)setRootWithInt:(jint)context
                withId:(id)environment;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithOrgApacheXmlUtilsPrefixResolver:(id<OrgApacheXmlUtilsPrefixResolver>)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithOrgApacheXpathCompilerCompiler:(OrgApacheXpathCompilerCompiler *)arg0
                                                         withInt:(jint)arg1
                                                         withInt:(jint)arg2 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithOrgApacheXpathCompilerCompiler:(OrgApacheXpathCompilerCompiler *)arg0
                                                         withInt:(jint)arg1
                                                         withInt:(jint)arg2
                                                     withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathAxesFilterExprIteratorSimple)

inline jlong OrgApacheXpathAxesFilterExprIteratorSimple_get_serialVersionUID(void);
#define OrgApacheXpathAxesFilterExprIteratorSimple_serialVersionUID -6978977187025375579LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathAxesFilterExprIteratorSimple, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathAxesFilterExprIteratorSimple_init(OrgApacheXpathAxesFilterExprIteratorSimple *self);

FOUNDATION_EXPORT OrgApacheXpathAxesFilterExprIteratorSimple *new_OrgApacheXpathAxesFilterExprIteratorSimple_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathAxesFilterExprIteratorSimple *create_OrgApacheXpathAxesFilterExprIteratorSimple_init(void);

FOUNDATION_EXPORT void OrgApacheXpathAxesFilterExprIteratorSimple_initWithOrgApacheXpathExpression_(OrgApacheXpathAxesFilterExprIteratorSimple *self, OrgApacheXpathExpression *expr);

FOUNDATION_EXPORT OrgApacheXpathAxesFilterExprIteratorSimple *new_OrgApacheXpathAxesFilterExprIteratorSimple_initWithOrgApacheXpathExpression_(OrgApacheXpathExpression *expr) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathAxesFilterExprIteratorSimple *create_OrgApacheXpathAxesFilterExprIteratorSimple_initWithOrgApacheXpathExpression_(OrgApacheXpathExpression *expr);

FOUNDATION_EXPORT OrgApacheXpathObjectsXNodeSet *OrgApacheXpathAxesFilterExprIteratorSimple_executeFilterExprWithInt_withOrgApacheXpathXPathContext_withOrgApacheXmlUtilsPrefixResolver_withBoolean_withInt_withOrgApacheXpathExpression_(jint context, OrgApacheXpathXPathContext *xctxt, id<OrgApacheXmlUtilsPrefixResolver> prefixResolver, jboolean isTopLevel, jint stackFrame, OrgApacheXpathExpression *expr);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathAxesFilterExprIteratorSimple)

#endif

#if !defined (OrgApacheXpathAxesFilterExprIteratorSimple_filterExprOwner_) && (INCLUDE_ALL_OrgApacheXpathAxesFilterExprIteratorSimple || defined(INCLUDE_OrgApacheXpathAxesFilterExprIteratorSimple_filterExprOwner))
#define OrgApacheXpathAxesFilterExprIteratorSimple_filterExprOwner_

#define RESTRICT_OrgApacheXpathExpressionOwner 1
#define INCLUDE_OrgApacheXpathExpressionOwner 1
#include "org/apache/xpath/ExpressionOwner.h"

@class OrgApacheXpathAxesFilterExprIteratorSimple;
@class OrgApacheXpathExpression;

@interface OrgApacheXpathAxesFilterExprIteratorSimple_filterExprOwner : NSObject < OrgApacheXpathExpressionOwner >

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

- (instancetype __nonnull)initWithOrgApacheXpathAxesFilterExprIteratorSimple:(OrgApacheXpathAxesFilterExprIteratorSimple *)outer$;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathAxesFilterExprIteratorSimple_filterExprOwner)

FOUNDATION_EXPORT void OrgApacheXpathAxesFilterExprIteratorSimple_filterExprOwner_initWithOrgApacheXpathAxesFilterExprIteratorSimple_(OrgApacheXpathAxesFilterExprIteratorSimple_filterExprOwner *self, OrgApacheXpathAxesFilterExprIteratorSimple *outer$);

FOUNDATION_EXPORT OrgApacheXpathAxesFilterExprIteratorSimple_filterExprOwner *new_OrgApacheXpathAxesFilterExprIteratorSimple_filterExprOwner_initWithOrgApacheXpathAxesFilterExprIteratorSimple_(OrgApacheXpathAxesFilterExprIteratorSimple *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathAxesFilterExprIteratorSimple_filterExprOwner *create_OrgApacheXpathAxesFilterExprIteratorSimple_filterExprOwner_initWithOrgApacheXpathAxesFilterExprIteratorSimple_(OrgApacheXpathAxesFilterExprIteratorSimple *outer$);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathAxesFilterExprIteratorSimple_filterExprOwner)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathAxesFilterExprIteratorSimple")
