//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/processor/ProcessorUnknown.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorUnknown")
#ifdef RESTRICT_OrgApacheXalanProcessorProcessorUnknown
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorUnknown 0
#else
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorUnknown 1
#endif
#undef RESTRICT_OrgApacheXalanProcessorProcessorUnknown

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanProcessorProcessorUnknown_) && (INCLUDE_ALL_OrgApacheXalanProcessorProcessorUnknown || defined(INCLUDE_OrgApacheXalanProcessorProcessorUnknown))
#define OrgApacheXalanProcessorProcessorUnknown_

#define RESTRICT_OrgApacheXalanProcessorProcessorLRE 1
#define INCLUDE_OrgApacheXalanProcessorProcessorLRE 1
#include "org/apache/xalan/processor/ProcessorLRE.h"

/*!
 @brief This class processes an unknown template element.It is used both 
  for unknown top-level elements, and for elements in the 
  xslt namespace when the version is higher than the version 
  of XSLT that we are set up to process.
 */
@interface OrgApacheXalanProcessorProcessorUnknown : OrgApacheXalanProcessorProcessorLRE
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanProcessorProcessorUnknown)

inline jlong OrgApacheXalanProcessorProcessorUnknown_get_serialVersionUID(void);
#define OrgApacheXalanProcessorProcessorUnknown_serialVersionUID 600521151487682248LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanProcessorProcessorUnknown, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanProcessorProcessorUnknown_init(OrgApacheXalanProcessorProcessorUnknown *self);

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorUnknown *new_OrgApacheXalanProcessorProcessorUnknown_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorUnknown *create_OrgApacheXalanProcessorProcessorUnknown_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanProcessorProcessorUnknown)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorUnknown")
