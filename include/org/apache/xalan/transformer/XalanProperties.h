//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/transformer/XalanProperties.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTransformerXalanProperties")
#ifdef RESTRICT_OrgApacheXalanTransformerXalanProperties
#define INCLUDE_ALL_OrgApacheXalanTransformerXalanProperties 0
#else
#define INCLUDE_ALL_OrgApacheXalanTransformerXalanProperties 1
#endif
#undef RESTRICT_OrgApacheXalanTransformerXalanProperties

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanTransformerXalanProperties_) && (INCLUDE_ALL_OrgApacheXalanTransformerXalanProperties || defined(INCLUDE_OrgApacheXalanTransformerXalanProperties))
#define OrgApacheXalanTransformerXalanProperties_

/*!
 @brief <code>XalanProperties</code> defines the features understood by
  Xalan.
 @author <a href="mailto:ovidiu@@cup.hp.com">Ovidiu Predescu</a>
 @since May 23, 2001
 */
@interface OrgApacheXalanTransformerXalanProperties : NSObject
@property (readonly, copy, class) NSString *SOURCE_LOCATION NS_SWIFT_NAME(SOURCE_LOCATION);

+ (NSString *)SOURCE_LOCATION;

#pragma mark Public

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTransformerXalanProperties)

inline NSString *OrgApacheXalanTransformerXalanProperties_get_SOURCE_LOCATION(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXalanTransformerXalanProperties_SOURCE_LOCATION;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXalanTransformerXalanProperties, SOURCE_LOCATION, NSString *)

FOUNDATION_EXPORT void OrgApacheXalanTransformerXalanProperties_init(OrgApacheXalanTransformerXalanProperties *self);

FOUNDATION_EXPORT OrgApacheXalanTransformerXalanProperties *new_OrgApacheXalanTransformerXalanProperties_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTransformerXalanProperties *create_OrgApacheXalanTransformerXalanProperties_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTransformerXalanProperties)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTransformerXalanProperties")
