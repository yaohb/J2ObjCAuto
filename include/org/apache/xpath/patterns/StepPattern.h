//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/patterns/StepPattern.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathPatternsStepPattern")
#ifdef RESTRICT_OrgApacheXpathPatternsStepPattern
#define INCLUDE_ALL_OrgApacheXpathPatternsStepPattern 0
#else
#define INCLUDE_ALL_OrgApacheXpathPatternsStepPattern 1
#endif
#undef RESTRICT_OrgApacheXpathPatternsStepPattern

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathPatternsStepPattern_) && (INCLUDE_ALL_OrgApacheXpathPatternsStepPattern || defined(INCLUDE_OrgApacheXpathPatternsStepPattern))
#define OrgApacheXpathPatternsStepPattern_

#define RESTRICT_OrgApacheXpathPatternsNodeTest 1
#define INCLUDE_OrgApacheXpathPatternsNodeTest 1
#include "org/apache/xpath/patterns/NodeTest.h"

#define RESTRICT_OrgApacheXpathAxesSubContextList 1
#define INCLUDE_OrgApacheXpathAxesSubContextList 1
#include "org/apache/xpath/axes/SubContextList.h"

#define RESTRICT_OrgApacheXpathExpressionOwner 1
#define INCLUDE_OrgApacheXpathExpressionOwner 1
#include "org/apache/xpath/ExpressionOwner.h"

@class IOSObjectArray;
@class JavaUtilVector;
@class OrgApacheXpathExpression;
@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;
@class OrgApacheXpathXPathVisitor;
@protocol OrgApacheXmlDtmDTM;

/*!
 @brief This class represents a single pattern match step.
 */
@interface OrgApacheXpathPatternsStepPattern : OrgApacheXpathPatternsNodeTest < OrgApacheXpathAxesSubContextList, OrgApacheXpathExpressionOwner > {
 @public
  /*!
   @brief The axis for this test.
   */
  jint m_axis_;
  /*!
   @brief The target local name or psuedo name, for hash table lookup optimization.
   */
  NSString *m_targetString_;
  /*!
   @brief Reference to nodetest and predicate for
  parent or ancestor.
   */
  OrgApacheXpathPatternsStepPattern *m_relativePathPattern_;
  /*!
   @brief The list of predicate expressions for this pattern step.
   */
  IOSObjectArray *m_predicates_;
}
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Construct a StepPattern that doesn't test for node names.
 @param whatToShow Bit set defined mainly by <code>org.w3c.dom.traversal.NodeFilter</code> .
 @param axis The Axis for this test, one of of Axes.ANCESTORORSELF, etc.
 @param axisForPredicate No longer used.
 */
- (instancetype __nonnull)initWithInt:(jint)whatToShow
                              withInt:(jint)axis
                              withInt:(jint)axisForPredicate;

/*!
 @brief Construct a StepPattern that tests for namespaces and node names.
 @param whatToShow Bit set defined mainly by <code>org.w3c.dom.traversal.NodeFilter</code> .
 @param namespace_ The namespace to be tested.
 @param name The local name to be tested.
 @param axis The Axis for this test, one of of Axes.ANCESTORORSELF, etc.
 @param axisForPredicate No longer used.
 */
- (instancetype __nonnull)initWithInt:(jint)whatToShow
                         withNSString:(NSString *)namespace_
                         withNSString:(NSString *)name
                              withInt:(jint)axis
                              withInt:(jint)axisForPredicate;

/*!
 @brief Static calc of match score.
 */
- (void)calcScore;

/*!
 @brief Calculate the local name or psuedo name of the node that this pattern will test,
  for hash table lookup optimization.
 - seealso: org.apache.xpath.compiler.PsuedoNames
 */
- (void)calcTargetString;

/*!
 - seealso: org.apache.xpath.XPathVisitable#callVisitors(ExpressionOwner, XPathVisitor)
 */
- (void)callVisitorsWithOrgApacheXpathExpressionOwner:(id<OrgApacheXpathExpressionOwner>)owner
                       withOrgApacheXpathXPathVisitor:(OrgApacheXpathXPathVisitor *)visitor;

/*!
 @brief Tell if this expression or it's subexpressions can traverse outside
  the current subtree.
 NOTE: Ancestors tests with predicates are problematic, and will require
  special treatment.
 @return true if traversal outside the context node's subtree can occur.
 */
- (jboolean)canTraverseOutsideSubtree;

/*!
 - seealso: Expression#deepEquals(Expression)
 */
- (jboolean)deepEqualsWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)expr;

/*!
 @brief Execute this pattern step, including predicates.
 @param xctxt XPath runtime context.
 @return <code>org.apache.xpath.patterns.NodeTest.SCORE_NODETEST</code>,
          <code>org.apache.xpath.patterns.NodeTest.SCORE_NONE</code>,
          <code>org.apache.xpath.patterns.NodeTest.SCORE_NSWILD</code>,
          <code>org.apache.xpath.patterns.NodeTest.SCORE_QNAME</code>, or
          <code>org.apache.xpath.patterns.NodeTest.SCORE_OTHER</code>.
 @throw javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Execute this pattern step, including predicates.
 @param xctxt XPath runtime context.
 @param currentNode The current node context.
 @return <code>org.apache.xpath.patterns.NodeTest.SCORE_NODETEST</code>,
          <code>org.apache.xpath.patterns.NodeTest.SCORE_NONE</code>,
          <code>org.apache.xpath.patterns.NodeTest.SCORE_NSWILD</code>,
          <code>org.apache.xpath.patterns.NodeTest.SCORE_QNAME</code>, or
          <code>org.apache.xpath.patterns.NodeTest.SCORE_OTHER</code>.
 @throw javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                                withInt:(jint)currentNode;

/*!
 @brief Execute an expression in the XPath runtime context, and return the
  result of the expression.
 @param xctxt The XPath runtime context.
 @param currentNode The currentNode.
 @param dtm The DTM of the current node.
 @param expType The expanded type ID of the current node.
 @return The result of the expression in the form of a <code>XObject</code>.
 @throw javax.xml.transform.TransformerExceptionif a runtime exception
          occurs.
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                                withInt:(jint)currentNode
                                                 withOrgApacheXmlDtmDTM:(id<OrgApacheXmlDtmDTM>)dtm
                                                                withInt:(jint)expType;

/*!
 @brief This function is used to fixup variables from QNames to stack frame
  indexes at stylesheet build time.
 @param vars List of QNames that correspond to variables.  This list  should be searched backwards for the first qualified name that
   corresponds to the variable reference qname.  The position of the
   QName in the vector from the start of the vector will be its position
   in the stack frame (but variables above the globalsTop value will need
   to be offset to the current stack frame).
 @param globalsSize The number of variables in the global variable area.
 */
- (void)fixupVariablesWithJavaUtilVector:(JavaUtilVector *)vars
                                 withInt:(jint)globalsSize;

/*!
 @brief Get the axis that this step follows.
 @return The Axis for this test, one of of Axes.ANCESTORORSELF, etc.
 */
- (jint)getAxis;

/*!
 - seealso: ExpressionOwner#getExpression()
 */
- (OrgApacheXpathExpression *)getExpression;

/*!
 @brief Get the count of the nodes that match the test, which is the proximity
  position of the last node that can pass this test in the sub context
  selection.In XSLT 1-based indexing, this count is the index of the last
  node.
 @param xctxt XPath runtime context.
 @return the count of the nodes that match the test.
 */
- (jint)getLastPosWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Get the match score of the given node.
 @param xctxt The XPath runtime context.
 @param context The node to be tested.
 @return <code>org.apache.xpath.patterns.NodeTest.SCORE_NODETEST</code>,
          <code>org.apache.xpath.patterns.NodeTest.SCORE_NONE</code>,
          <code>org.apache.xpath.patterns.NodeTest.SCORE_NSWILD</code>,
          <code>org.apache.xpath.patterns.NodeTest.SCORE_QNAME</code>, or
          <code>org.apache.xpath.patterns.NodeTest.SCORE_OTHER</code>.
 @throw javax.xml.transform.TransformerException
 */
- (jdouble)getMatchScoreWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                               withInt:(jint)context;

/*!
 @brief Get a predicate expression.
 @param i The index of the predicate.
 @return A predicate expression.
 */
- (OrgApacheXpathExpression *)getPredicateWithInt:(jint)i;

/*!
 @brief Get the number of predicates for this match pattern step.
 @return the number of predicates for this match pattern step.
 */
- (jint)getPredicateCount;

/*!
 @brief Set the list of predicate expressions for this pattern step.
 @return List of expression objects.
 */
- (IOSObjectArray *)getPredicates;

/*!
 @brief Get the proximity position index of the current node based on this
  node test.
 @param xctxt XPath runtime context.
 @return the proximity position index of the current node based on the
          node test.
 */
- (jint)getProximityPositionWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Get the reference to nodetest and predicate for
  parent or ancestor.
 @return The relative pattern expression.
 */
- (OrgApacheXpathPatternsStepPattern *)getRelativePathPattern;

/*!
 @brief Get the local name or psuedo name of the node that this pattern will test,
  for hash table lookup optimization.
 @return local name or psuedo name of the node.
 - seealso: org.apache.xpath.compiler.PsuedoNames
 */
- (NSString *)getTargetString;

/*!
 @brief Set the axis that this step should follow.
 @param axis The Axis for this test, one of of Axes.ANCESTORORSELF, etc.
 */
- (void)setAxisWithInt:(jint)axis;

/*!
 - seealso: ExpressionOwner#setExpression(Expression)
 */
- (void)setExpressionWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)exp;

/*!
 @brief Set the predicates for this match pattern step.
 @param predicates An array of expressions that define predicates                    for this step.
 */
- (void)setPredicatesWithOrgApacheXpathExpressionArray:(IOSObjectArray *)predicates;

/*!
 @brief Set the reference to nodetest and predicate for
  parent or ancestor.
 @param expr The relative pattern expression.
 */
- (void)setRelativePathPatternWithOrgApacheXpathPatternsStepPattern:(OrgApacheXpathPatternsStepPattern *)expr;

/*!
 @brief Get the string represenentation of this step for diagnostic purposes.
 @return A string representation of this step, built by reverse-engineering 
  the contained info.
 */
- (NSString *)description;

#pragma mark Protected

/*!
 @brief Call the visitors on the subtree.Factored out from callVisitors 
  so it may be called by derived classes.
 */
- (void)callSubtreeVisitorsWithOrgApacheXpathXPathVisitor:(OrgApacheXpathXPathVisitor *)visitor;

/*!
 @brief Execute the predicates on this step to determine if the current node 
  should be filtered or accepted.
 @param xctxt The XPath runtime context.
 @param dtm The DTM of the current node.
 @param currentNode The current node context.
 @return true if the node should be accepted, false otherwise.
 @throw javax.xml.transform.TransformerException
 */
- (jboolean)executePredicatesWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                     withOrgApacheXmlDtmDTM:(id<OrgApacheXmlDtmDTM>)dtm
                                                    withInt:(jint)currentNode;

/*!
 @brief Execute the match pattern step relative to another step.
 @param xctxt The XPath runtime context.
 @param dtm The DTM of the current node.
 @param currentNode The current node context.
 @return <code>org.apache.xpath.patterns.NodeTest.SCORE_NODETEST</code>,
          <code>org.apache.xpath.patterns.NodeTest.SCORE_NONE</code>,
          <code>org.apache.xpath.patterns.NodeTest.SCORE_NSWILD</code>,
          <code>org.apache.xpath.patterns.NodeTest.SCORE_QNAME</code>, or
          <code>org.apache.xpath.patterns.NodeTest.SCORE_OTHER</code>.
 @throw javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)executeRelativePathPatternWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                                    withOrgApacheXmlDtmDTM:(id<OrgApacheXmlDtmDTM>)dtm
                                                                                   withInt:(jint)currentNode;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithInt:(jint)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithInt:(jint)arg0
                         withNSString:(NSString *)arg1
                         withNSString:(NSString *)arg2 NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(OrgApacheXpathPatternsStepPattern)

J2OBJC_FIELD_SETTER(OrgApacheXpathPatternsStepPattern, m_targetString_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXpathPatternsStepPattern, m_relativePathPattern_, OrgApacheXpathPatternsStepPattern *)
J2OBJC_FIELD_SETTER(OrgApacheXpathPatternsStepPattern, m_predicates_, IOSObjectArray *)

inline jlong OrgApacheXpathPatternsStepPattern_get_serialVersionUID(void);
#define OrgApacheXpathPatternsStepPattern_serialVersionUID 9071668960168152644LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathPatternsStepPattern, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathPatternsStepPattern_initWithInt_withNSString_withNSString_withInt_withInt_(OrgApacheXpathPatternsStepPattern *self, jint whatToShow, NSString *namespace_, NSString *name, jint axis, jint axisForPredicate);

FOUNDATION_EXPORT OrgApacheXpathPatternsStepPattern *new_OrgApacheXpathPatternsStepPattern_initWithInt_withNSString_withNSString_withInt_withInt_(jint whatToShow, NSString *namespace_, NSString *name, jint axis, jint axisForPredicate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathPatternsStepPattern *create_OrgApacheXpathPatternsStepPattern_initWithInt_withNSString_withNSString_withInt_withInt_(jint whatToShow, NSString *namespace_, NSString *name, jint axis, jint axisForPredicate);

FOUNDATION_EXPORT void OrgApacheXpathPatternsStepPattern_initWithInt_withInt_withInt_(OrgApacheXpathPatternsStepPattern *self, jint whatToShow, jint axis, jint axisForPredicate);

FOUNDATION_EXPORT OrgApacheXpathPatternsStepPattern *new_OrgApacheXpathPatternsStepPattern_initWithInt_withInt_withInt_(jint whatToShow, jint axis, jint axisForPredicate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathPatternsStepPattern *create_OrgApacheXpathPatternsStepPattern_initWithInt_withInt_withInt_(jint whatToShow, jint axis, jint axisForPredicate);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathPatternsStepPattern)

#endif

#if !defined (OrgApacheXpathPatternsStepPattern_PredOwner_) && (INCLUDE_ALL_OrgApacheXpathPatternsStepPattern || defined(INCLUDE_OrgApacheXpathPatternsStepPattern_PredOwner))
#define OrgApacheXpathPatternsStepPattern_PredOwner_

#define RESTRICT_OrgApacheXpathExpressionOwner 1
#define INCLUDE_OrgApacheXpathExpressionOwner 1
#include "org/apache/xpath/ExpressionOwner.h"

@class OrgApacheXpathExpression;
@class OrgApacheXpathPatternsStepPattern;

@interface OrgApacheXpathPatternsStepPattern_PredOwner : NSObject < OrgApacheXpathExpressionOwner > {
 @public
  jint m_index_;
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

- (instancetype __nonnull)initWithOrgApacheXpathPatternsStepPattern:(OrgApacheXpathPatternsStepPattern *)outer$
                                                            withInt:(jint)index;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathPatternsStepPattern_PredOwner)

FOUNDATION_EXPORT void OrgApacheXpathPatternsStepPattern_PredOwner_initWithOrgApacheXpathPatternsStepPattern_withInt_(OrgApacheXpathPatternsStepPattern_PredOwner *self, OrgApacheXpathPatternsStepPattern *outer$, jint index);

FOUNDATION_EXPORT OrgApacheXpathPatternsStepPattern_PredOwner *new_OrgApacheXpathPatternsStepPattern_PredOwner_initWithOrgApacheXpathPatternsStepPattern_withInt_(OrgApacheXpathPatternsStepPattern *outer$, jint index) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathPatternsStepPattern_PredOwner *create_OrgApacheXpathPatternsStepPattern_PredOwner_initWithOrgApacheXpathPatternsStepPattern_withInt_(OrgApacheXpathPatternsStepPattern *outer$, jint index);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathPatternsStepPattern_PredOwner)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathPatternsStepPattern")
