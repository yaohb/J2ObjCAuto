//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/FuncDoclocation.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncDoclocation")
#ifdef RESTRICT_OrgApacheXpathFunctionsFuncDoclocation
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncDoclocation 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncDoclocation 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFuncDoclocation

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathFunctionsFuncDoclocation_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFuncDoclocation || defined(INCLUDE_OrgApacheXpathFunctionsFuncDoclocation))
#define OrgApacheXpathFunctionsFuncDoclocation_

#define RESTRICT_OrgApacheXpathFunctionsFunctionDef1Arg 1
#define INCLUDE_OrgApacheXpathFunctionsFunctionDef1Arg 1
#include "org/apache/xpath/functions/FunctionDef1Arg.h"

@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

/*!
 @brief Execute the proprietary document-location() function, which returns
  a node set of documents.
 */
@interface OrgApacheXpathFunctionsFuncDoclocation : OrgApacheXpathFunctionsFunctionDef1Arg
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Execute the function.The function must return
  a valid object.
 @param xctxt The current execution context.
 @return A valid XObject.
 @throw javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFuncDoclocation)

inline jlong OrgApacheXpathFunctionsFuncDoclocation_get_serialVersionUID(void);
#define OrgApacheXpathFunctionsFuncDoclocation_serialVersionUID 7469213946343568769LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFuncDoclocation, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFuncDoclocation_init(OrgApacheXpathFunctionsFuncDoclocation *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncDoclocation *new_OrgApacheXpathFunctionsFuncDoclocation_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncDoclocation *create_OrgApacheXpathFunctionsFuncDoclocation_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFuncDoclocation)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncDoclocation")