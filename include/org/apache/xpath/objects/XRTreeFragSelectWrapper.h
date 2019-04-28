//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/objects/XRTreeFragSelectWrapper.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathObjectsXRTreeFragSelectWrapper")
#ifdef RESTRICT_OrgApacheXpathObjectsXRTreeFragSelectWrapper
#define INCLUDE_ALL_OrgApacheXpathObjectsXRTreeFragSelectWrapper 0
#else
#define INCLUDE_ALL_OrgApacheXpathObjectsXRTreeFragSelectWrapper 1
#endif
#undef RESTRICT_OrgApacheXpathObjectsXRTreeFragSelectWrapper

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathObjectsXRTreeFragSelectWrapper_) && (INCLUDE_ALL_OrgApacheXpathObjectsXRTreeFragSelectWrapper || defined(INCLUDE_OrgApacheXpathObjectsXRTreeFragSelectWrapper))
#define OrgApacheXpathObjectsXRTreeFragSelectWrapper_

#define RESTRICT_OrgApacheXpathObjectsXRTreeFrag 1
#define INCLUDE_OrgApacheXpathObjectsXRTreeFrag 1
#include "org/apache/xpath/objects/XRTreeFrag.h"

@class JavaUtilVector;
@class OrgApacheXpathExpression;
@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;
@protocol OrgApacheXmlDtmDTMIterator;
@protocol OrgApacheXmlUtilsXMLString;
@protocol OrgApacheXpathExpressionNode;

/*!
 @brief This class makes an select statement act like an result tree fragment.
 */
@interface OrgApacheXpathObjectsXRTreeFragSelectWrapper : OrgApacheXpathObjectsXRTreeFrag < NSCopying >
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype __nonnull)initWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)expr;

/*!
 @brief Cast result object to a DTMIterator.
 @return The document fragment as a DTMIterator
 */
- (id<OrgApacheXmlDtmDTMIterator>)asNodeIterator;

/*!
 @brief Detaches the <code>DTMIterator</code> from the set which it iterated
  over, releasing any computational resources and placing the iterator
  in the INVALID state.After <code>detach</code> has been invoked,
  calls to <code>nextNode</code> or <code>previousNode</code> will
  raise a runtime exception.
 In general, detach should only be called once on the object.
 */
- (void)detach;

/*!
 @brief For support of literal objects in xpaths.
 @param xctxt The XPath execution context.
 @return the result of executing the select expression
 @throw javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

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
 @brief Tell what kind of class this is.
 @return the string type
 */
- (jint)getType;

/*!
 @brief Cast result object to a number.
 @return The result tree fragment as a number or NaN
 */
- (jdouble)num;

/*!
 @brief Cast result object to a result tree fragment.
 @return The document fragment this wraps
 */
- (jint)rtf;

/*!
 @brief Cast result object to a string.
 @return The document fragment node data or the empty string.
 */
- (NSString *)str;

/*!
 @brief Cast result object to an XMLString.
 @return The document fragment node data or the empty string.
 */
- (id<OrgApacheXmlUtilsXMLString>)xstr;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithInt:(jint)arg0
       withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithInt:(jint)arg0
       withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)arg1
     withOrgApacheXpathExpressionNode:(id<OrgApacheXpathExpressionNode>)arg2 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathObjectsXRTreeFragSelectWrapper)

inline jlong OrgApacheXpathObjectsXRTreeFragSelectWrapper_get_serialVersionUID(void);
#define OrgApacheXpathObjectsXRTreeFragSelectWrapper_serialVersionUID -6526177905590461251LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathObjectsXRTreeFragSelectWrapper, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathObjectsXRTreeFragSelectWrapper_initWithOrgApacheXpathExpression_(OrgApacheXpathObjectsXRTreeFragSelectWrapper *self, OrgApacheXpathExpression *expr);

FOUNDATION_EXPORT OrgApacheXpathObjectsXRTreeFragSelectWrapper *new_OrgApacheXpathObjectsXRTreeFragSelectWrapper_initWithOrgApacheXpathExpression_(OrgApacheXpathExpression *expr) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsXRTreeFragSelectWrapper *create_OrgApacheXpathObjectsXRTreeFragSelectWrapper_initWithOrgApacheXpathExpression_(OrgApacheXpathExpression *expr);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathObjectsXRTreeFragSelectWrapper)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathObjectsXRTreeFragSelectWrapper")
