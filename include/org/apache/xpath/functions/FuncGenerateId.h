//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/FuncGenerateId.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncGenerateId")
#ifdef RESTRICT_OrgApacheXpathFunctionsFuncGenerateId
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncGenerateId 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncGenerateId 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFuncGenerateId

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathFunctionsFuncGenerateId_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFuncGenerateId || defined(INCLUDE_OrgApacheXpathFunctionsFuncGenerateId))
#define OrgApacheXpathFunctionsFuncGenerateId_

#define RESTRICT_OrgApacheXpathFunctionsFunctionDef1Arg 1
#define INCLUDE_OrgApacheXpathFunctionsFunctionDef1Arg 1
#include "org/apache/xpath/functions/FunctionDef1Arg.h"

@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

/*!
 @brief Execute the GenerateId() function.
 */
@interface OrgApacheXpathFunctionsFuncGenerateId : OrgApacheXpathFunctionsFunctionDef1Arg
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

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFuncGenerateId)

inline jlong OrgApacheXpathFunctionsFuncGenerateId_get_serialVersionUID(void);
#define OrgApacheXpathFunctionsFuncGenerateId_serialVersionUID 973544842091724273LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFuncGenerateId, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFuncGenerateId_init(OrgApacheXpathFunctionsFuncGenerateId *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncGenerateId *new_OrgApacheXpathFunctionsFuncGenerateId_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncGenerateId *create_OrgApacheXpathFunctionsFuncGenerateId_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFuncGenerateId)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncGenerateId")
