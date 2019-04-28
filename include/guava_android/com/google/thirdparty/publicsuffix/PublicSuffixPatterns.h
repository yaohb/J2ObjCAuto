//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/com/google/thirdparty/publicsuffix/PublicSuffixPatterns.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleThirdpartyPublicsuffixPublicSuffixPatterns")
#ifdef RESTRICT_ComGoogleThirdpartyPublicsuffixPublicSuffixPatterns
#define INCLUDE_ALL_ComGoogleThirdpartyPublicsuffixPublicSuffixPatterns 0
#else
#define INCLUDE_ALL_ComGoogleThirdpartyPublicsuffixPublicSuffixPatterns 1
#endif
#undef RESTRICT_ComGoogleThirdpartyPublicsuffixPublicSuffixPatterns

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleThirdpartyPublicsuffixPublicSuffixPatterns_) && (INCLUDE_ALL_ComGoogleThirdpartyPublicsuffixPublicSuffixPatterns || defined(INCLUDE_ComGoogleThirdpartyPublicsuffixPublicSuffixPatterns))
#define ComGoogleThirdpartyPublicsuffixPublicSuffixPatterns_

@class ComGoogleCommonCollectImmutableMap;

/*!
 @brief <b>Do not use this class directly.For access to public-suffix information,
  use <code>com.google.common.net.InternetDomainName</code>.
 </b>
  A generated static class containing public members which provide domain
  name patterns used in determining whether a given domain name is an
  effective top-level domain (public suffix). 
 <p>Because this class is used in GWT, the data members are stored in
  a space-efficient manner. {@@see TrieParser}.
 @since 16.0
 */
@interface ComGoogleThirdpartyPublicsuffixPublicSuffixPatterns : NSObject
@property (readonly, class, strong) ComGoogleCommonCollectImmutableMap *EXACT NS_SWIFT_NAME(EXACT);
@property (readonly, class, strong) ComGoogleCommonCollectImmutableMap *UNDER NS_SWIFT_NAME(UNDER);
@property (readonly, class, strong) ComGoogleCommonCollectImmutableMap *EXCLUDED NS_SWIFT_NAME(EXCLUDED);

+ (ComGoogleCommonCollectImmutableMap *)EXACT;

+ (ComGoogleCommonCollectImmutableMap *)UNDER;

+ (ComGoogleCommonCollectImmutableMap *)EXCLUDED;

@end

J2OBJC_STATIC_INIT(ComGoogleThirdpartyPublicsuffixPublicSuffixPatterns)

/*!
 @brief If a hostname is contained as a key in this map, it is a public suffix.
 */
inline ComGoogleCommonCollectImmutableMap *ComGoogleThirdpartyPublicsuffixPublicSuffixPatterns_get_EXACT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleThirdpartyPublicsuffixPublicSuffixPatterns_EXACT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleThirdpartyPublicsuffixPublicSuffixPatterns, EXACT, ComGoogleCommonCollectImmutableMap *)

/*!
 @brief If a hostname is not a key in the EXCLUDE map, and if removing its
  leftmost component results in a name which is a key in this map, it is a
  public suffix.
 */
inline ComGoogleCommonCollectImmutableMap *ComGoogleThirdpartyPublicsuffixPublicSuffixPatterns_get_UNDER(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleThirdpartyPublicsuffixPublicSuffixPatterns_UNDER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleThirdpartyPublicsuffixPublicSuffixPatterns, UNDER, ComGoogleCommonCollectImmutableMap *)

/*!
 @brief The elements in this map would pass the UNDER test, but are known not to
  be public suffixes and are thus excluded from consideration.Since it
  refers to elements in UNDER of the same type, the type is actually not
  important here.
 The map is simply used for consistency reasons.
 */
inline ComGoogleCommonCollectImmutableMap *ComGoogleThirdpartyPublicsuffixPublicSuffixPatterns_get_EXCLUDED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleThirdpartyPublicsuffixPublicSuffixPatterns_EXCLUDED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleThirdpartyPublicsuffixPublicSuffixPatterns, EXCLUDED, ComGoogleCommonCollectImmutableMap *)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleThirdpartyPublicsuffixPublicSuffixPatterns)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleThirdpartyPublicsuffixPublicSuffixPatterns")