//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/FuncNumber.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncNumber")
#ifdef RESTRICT_OrgApacheXpathFunctionsFuncNumber
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncNumber 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncNumber 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFuncNumber

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathFunctionsFuncNumber_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFuncNumber || defined(INCLUDE_OrgApacheXpathFunctionsFuncNumber))
#define OrgApacheXpathFunctionsFuncNumber_

#define RESTRICT_OrgApacheXpathFunctionsFunctionDef1Arg 1
#define INCLUDE_OrgApacheXpathFunctionsFunctionDef1Arg 1
#include "org/apache/xpath/functions/FunctionDef1Arg.h"

@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

/*!
 @brief Execute the Number() function.
 */
@interface OrgApacheXpathFunctionsFuncNumber : OrgApacheXpathFunctionsFunctionDef1Arg
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

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFuncNumber)

inline jlong OrgApacheXpathFunctionsFuncNumber_get_serialVersionUID(void);
#define OrgApacheXpathFunctionsFuncNumber_serialVersionUID 7266745342264153076LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFuncNumber, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFuncNumber_init(OrgApacheXpathFunctionsFuncNumber *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncNumber *new_OrgApacheXpathFunctionsFuncNumber_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncNumber *create_OrgApacheXpathFunctionsFuncNumber_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFuncNumber)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncNumber")
