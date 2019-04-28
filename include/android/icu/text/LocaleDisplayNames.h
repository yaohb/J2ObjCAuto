//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/external/icu/android_icu4j/src/main/java/android/icu/text/LocaleDisplayNames.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidIcuTextLocaleDisplayNames")
#ifdef RESTRICT_AndroidIcuTextLocaleDisplayNames
#define INCLUDE_ALL_AndroidIcuTextLocaleDisplayNames 0
#else
#define INCLUDE_ALL_AndroidIcuTextLocaleDisplayNames 1
#endif
#undef RESTRICT_AndroidIcuTextLocaleDisplayNames

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AndroidIcuTextLocaleDisplayNames_) && (INCLUDE_ALL_AndroidIcuTextLocaleDisplayNames || defined(INCLUDE_AndroidIcuTextLocaleDisplayNames))
#define AndroidIcuTextLocaleDisplayNames_

@class AndroidIcuTextDisplayContext;
@class AndroidIcuTextDisplayContext_Type;
@class AndroidIcuTextLocaleDisplayNames_DialectHandling;
@class AndroidIcuUtilULocale;
@class IOSObjectArray;
@class JavaUtilLocale;
@protocol JavaUtilComparator;
@protocol JavaUtilList;
@protocol JavaUtilSet;

/*!
 @brief Returns display names of ULocales and components of ULocales.For
  more information on language, script, region, variant, key, and
  values, see <code>android.icu.util.ULocale</code>.
 */
@interface AndroidIcuTextLocaleDisplayNames : NSObject

#pragma mark Public

/*!
 @brief Returns the current value for a specified DisplayContext.Type.
 @param type the DisplayContext.Type whose value to return
 @return the current DisplayContext setting for the specified type
 */
- (AndroidIcuTextDisplayContext *)getContextWithAndroidIcuTextDisplayContext_Type:(AndroidIcuTextDisplayContext_Type *)type;

/*!
 @brief Returns the dialect handling used in the display names.
 @return the dialect handling enum
 */
- (AndroidIcuTextLocaleDisplayNames_DialectHandling *)getDialectHandling;

/*!
 @brief Convenience overload of <code>getInstance(Locale, DisplayContext...)
 </code> that specifies 
 <code>DisplayContext.STANDARD_NAMES</code>.
 @param locale the display <code>java.util.Locale</code>
 @return a LocaleDisplayNames instance
 */
+ (AndroidIcuTextLocaleDisplayNames *)getInstanceWithJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Returns an instance of LocaleDisplayNames that returns names formatted for the provided 
 <code>java.util.Locale</code>, using the provided DisplayContext settings
 @param locale the display <code>java.util.Locale</code>
 @param contexts one or more context settings (e.g. for dialect               handling, capitalization, etc.
 @return a LocaleDisplayNames instance
 */
+ (AndroidIcuTextLocaleDisplayNames *)getInstanceWithJavaUtilLocale:(JavaUtilLocale *)locale
                              withAndroidIcuTextDisplayContextArray:(IOSObjectArray *)contexts;

/*!
 @brief Convenience overload of <code>getInstance(ULocale, DialectHandling)</code> that specifies
  STANDARD dialect handling.
 @param locale the display locale
 @return a LocaleDisplayNames instance
 */
+ (AndroidIcuTextLocaleDisplayNames *)getInstanceWithAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)locale;

/*!
 @brief Returns an instance of LocaleDisplayNames that returns names formatted for the provided locale,
  using the provided dialectHandling.
 @param locale the display locale
 @param dialectHandling how to select names for locales
 @return a LocaleDisplayNames instance
 */
+ (AndroidIcuTextLocaleDisplayNames *)getInstanceWithAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)locale
                      withAndroidIcuTextLocaleDisplayNames_DialectHandling:(AndroidIcuTextLocaleDisplayNames_DialectHandling *)dialectHandling;

/*!
 @brief Returns an instance of LocaleDisplayNames that returns names formatted for the provided locale,
  using the provided DisplayContext settings
 @param locale the display locale
 @param contexts one or more context settings (e.g. for dialect               handling, capitalization, etc.
 @return a LocaleDisplayNames instance
 */
+ (AndroidIcuTextLocaleDisplayNames *)getInstanceWithAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)locale
                                     withAndroidIcuTextDisplayContextArray:(IOSObjectArray *)contexts;

/*!
 @brief Returns the locale used to determine the display names.This is not necessarily the same
  locale passed to <code>getInstance</code>.
 @return the display locale
 */
- (AndroidIcuUtilULocale *)getLocale;

/*!
 @brief Return a list of information used to construct a UI list of locale names.
 @param collator how to collate—should normally be Collator.getInstance(getDisplayLocale())
 @param inSelf if true, compares the nameInSelf, otherwise the nameInDisplayLocale.  Set depending on which field (displayLocale vs self) is to show up in the UI.
   If both are to show up in the UI, then it should be the one used for the primary sort order.
 @param localeSet a list of locales to present in a UI list. The casing uses the settings in the LocaleDisplayNames instance.
 @return an ordered list of UiListItems.
 @throw IllformedLocaleExceptionif any of the locales in localeSet are malformed.
 */
- (id<JavaUtilList>)getUiListWithJavaUtilSet:(id<JavaUtilSet>)localeSet
                                 withBoolean:(jboolean)inSelf
                      withJavaUtilComparator:(id<JavaUtilComparator>)collator;

/*!
 @brief Return a list of information used to construct a UI list of locale names, providing more access to control the sorting.
 Normally use getUiList instead.
 @param comparator how to sort the UiListItems in the result.
 @param localeSet a list of locales to present in a UI list. The casing uses the settings in the LocaleDisplayNames instance.
 @return an ordered list of UiListItems.
 @throw IllformedLocaleExceptionif any of the locales in localeSet are malformed.
 */
- (id<JavaUtilList>)getUiListCompareWholeItemsWithJavaUtilSet:(id<JavaUtilSet>)localeSet
                                       withJavaUtilComparator:(id<JavaUtilComparator>)comparator;

/*!
 @brief Returns the display name of the provided locale key.
 @param key the locale key name
 @return the display name of the provided locale key
 */
- (NSString *)keyDisplayNameWithNSString:(NSString *)key;

/*!
 @brief Returns the display name of the provided value (used with the provided key).
 @param key the locale key name
 @param value the locale key's value
 @return the display name of the provided value
 */
- (NSString *)keyValueDisplayNameWithNSString:(NSString *)key
                                 withNSString:(NSString *)value;

/*!
 @brief Returns the display name of the provided language code.
 @param lang the language code
 @return the display name of the provided language code
 */
- (NSString *)languageDisplayNameWithNSString:(NSString *)lang;

/*!
 @brief Returns the display name of the provided locale.
 When no display names are available for all or portions
  of the original locale ID, those portions may be
  used directly (possibly in a more canonical form) as
  part of the  returned display name.
 @param locale the locale whose display name to return
 @return the display name of the provided locale
 */
- (NSString *)localeDisplayNameWithJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Returns the display name of the provided locale id.
 When no display names are available for all or portions
  of the original locale ID, those portions may be
  used directly (possibly in a more canonical form) as
  part of the  returned display name.
 @param localeId the id of the locale whose display name to return
 @return the display name of the provided locale
 */
- (NSString *)localeDisplayNameWithNSString:(NSString *)localeId;

/*!
 @brief Returns the display name of the provided ulocale.
 When no display names are available for all or portions
  of the original locale ID, those portions may be
  used directly (possibly in a more canonical form) as
  part of the  returned display name.
 @param locale the locale whose display name to return
 @return the display name of the provided locale
 */
- (NSString *)localeDisplayNameWithAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)locale;

/*!
 @brief Returns the display name of the provided region code.
 @param region the region code
 @return the display name of the provided region code
 */
- (NSString *)regionDisplayNameWithNSString:(NSString *)region;

/*!
 @brief Returns the display name of the provided script code.See
  <code>android.icu.lang.UScript</code> for recognized script codes.
 @param scriptCode the script code number
 @return the display name of the provided script code
 */
- (NSString *)scriptDisplayNameWithInt:(jint)scriptCode;

/*!
 @brief Returns the display name of the provided script code.
 @param script the script code
 @return the display name of the provided script code
 */
- (NSString *)scriptDisplayNameWithNSString:(NSString *)script;

/*!
 @brief Returns the display name of the provided script code
  when used in the context of a full locale name.
 @param script the script code
 @return the display name of the provided script code
 */
- (NSString *)scriptDisplayNameInContextWithNSString:(NSString *)script __attribute__((deprecated));

/*!
 @brief Returns the display name of the provided variant.
 @param variant the variant string
 @return the display name of the provided variant
 */
- (NSString *)variantDisplayNameWithNSString:(NSString *)variant;

#pragma mark Protected

/*!
 @brief Sole constructor.
 (For invocation by subclass constructors,
  typically implicit.)
 */
- (instancetype __nonnull)init __attribute__((deprecated));

@end

J2OBJC_STATIC_INIT(AndroidIcuTextLocaleDisplayNames)

FOUNDATION_EXPORT AndroidIcuTextLocaleDisplayNames *AndroidIcuTextLocaleDisplayNames_getInstanceWithAndroidIcuUtilULocale_(AndroidIcuUtilULocale *locale);

FOUNDATION_EXPORT AndroidIcuTextLocaleDisplayNames *AndroidIcuTextLocaleDisplayNames_getInstanceWithJavaUtilLocale_(JavaUtilLocale *locale);

FOUNDATION_EXPORT AndroidIcuTextLocaleDisplayNames *AndroidIcuTextLocaleDisplayNames_getInstanceWithAndroidIcuUtilULocale_withAndroidIcuTextLocaleDisplayNames_DialectHandling_(AndroidIcuUtilULocale *locale, AndroidIcuTextLocaleDisplayNames_DialectHandling *dialectHandling);

FOUNDATION_EXPORT AndroidIcuTextLocaleDisplayNames *AndroidIcuTextLocaleDisplayNames_getInstanceWithAndroidIcuUtilULocale_withAndroidIcuTextDisplayContextArray_(AndroidIcuUtilULocale *locale, IOSObjectArray *contexts);

FOUNDATION_EXPORT AndroidIcuTextLocaleDisplayNames *AndroidIcuTextLocaleDisplayNames_getInstanceWithJavaUtilLocale_withAndroidIcuTextDisplayContextArray_(JavaUtilLocale *locale, IOSObjectArray *contexts);

FOUNDATION_EXPORT void AndroidIcuTextLocaleDisplayNames_init(AndroidIcuTextLocaleDisplayNames *self);

J2OBJC_TYPE_LITERAL_HEADER(AndroidIcuTextLocaleDisplayNames)

#endif

#if !defined (AndroidIcuTextLocaleDisplayNames_DialectHandling_) && (INCLUDE_ALL_AndroidIcuTextLocaleDisplayNames || defined(INCLUDE_AndroidIcuTextLocaleDisplayNames_DialectHandling))
#define AndroidIcuTextLocaleDisplayNames_DialectHandling_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, AndroidIcuTextLocaleDisplayNames_DialectHandling_Enum) {
  AndroidIcuTextLocaleDisplayNames_DialectHandling_Enum_STANDARD_NAMES = 0,
  AndroidIcuTextLocaleDisplayNames_DialectHandling_Enum_DIALECT_NAMES = 1,
};

/*!
 @brief Enum used in <code>getInstance(ULocale, DialectHandling)</code>.
 */
@interface AndroidIcuTextLocaleDisplayNames_DialectHandling : JavaLangEnum

@property (readonly, class, nonnull) AndroidIcuTextLocaleDisplayNames_DialectHandling *STANDARD_NAMES NS_SWIFT_NAME(STANDARD_NAMES);
@property (readonly, class, nonnull) AndroidIcuTextLocaleDisplayNames_DialectHandling *DIALECT_NAMES NS_SWIFT_NAME(DIALECT_NAMES);
+ (AndroidIcuTextLocaleDisplayNames_DialectHandling * __nonnull)STANDARD_NAMES;

+ (AndroidIcuTextLocaleDisplayNames_DialectHandling * __nonnull)DIALECT_NAMES;

#pragma mark Public

+ (AndroidIcuTextLocaleDisplayNames_DialectHandling *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (AndroidIcuTextLocaleDisplayNames_DialectHandling_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(AndroidIcuTextLocaleDisplayNames_DialectHandling)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT AndroidIcuTextLocaleDisplayNames_DialectHandling *AndroidIcuTextLocaleDisplayNames_DialectHandling_values_[];

/*!
 @brief Use standard names when generating a locale name,
  e.g.en_GB displays as 'English (United Kingdom)'.
 */
inline AndroidIcuTextLocaleDisplayNames_DialectHandling *AndroidIcuTextLocaleDisplayNames_DialectHandling_get_STANDARD_NAMES(void);
J2OBJC_ENUM_CONSTANT(AndroidIcuTextLocaleDisplayNames_DialectHandling, STANDARD_NAMES)

/*!
 @brief Use dialect names when generating a locale name,
  e.g.en_GB displays as 'British English'.
 */
inline AndroidIcuTextLocaleDisplayNames_DialectHandling *AndroidIcuTextLocaleDisplayNames_DialectHandling_get_DIALECT_NAMES(void);
J2OBJC_ENUM_CONSTANT(AndroidIcuTextLocaleDisplayNames_DialectHandling, DIALECT_NAMES)

FOUNDATION_EXPORT IOSObjectArray *AndroidIcuTextLocaleDisplayNames_DialectHandling_values(void);

FOUNDATION_EXPORT AndroidIcuTextLocaleDisplayNames_DialectHandling *AndroidIcuTextLocaleDisplayNames_DialectHandling_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT AndroidIcuTextLocaleDisplayNames_DialectHandling *AndroidIcuTextLocaleDisplayNames_DialectHandling_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(AndroidIcuTextLocaleDisplayNames_DialectHandling)

#endif

#if !defined (AndroidIcuTextLocaleDisplayNames_UiListItem_) && (INCLUDE_ALL_AndroidIcuTextLocaleDisplayNames || defined(INCLUDE_AndroidIcuTextLocaleDisplayNames_UiListItem))
#define AndroidIcuTextLocaleDisplayNames_UiListItem_

@class AndroidIcuUtilULocale;
@protocol JavaUtilComparator;

/*!
 @brief Struct-like class used to return information for constructing a UI list, each corresponding to a locale.
 */
@interface AndroidIcuTextLocaleDisplayNames_UiListItem : NSObject {
 @public
  /*!
   @brief Returns the minimized locale for an input locale, such as sr-Cyrl → sr
   */
  AndroidIcuUtilULocale *minimized_;
  /*!
   @brief Returns the modified locale for an input locale, such as sr → sr-Cyrl, where there is also an sr-Latn in the list
   */
  AndroidIcuUtilULocale *modified_;
  /*!
   @brief Returns the name of the modified locale in the display locale, such as "Englisch (VS)" (for 'en-US', where the display locale is 'de').
   */
  NSString *nameInDisplayLocale_;
  /*!
   @brief Returns the name of the modified locale in itself, such as "English (US)" (for 'en-US').
   */
  NSString *nameInSelf_;
}

#pragma mark Public

/*!
 @brief Constructor, normally only called internally.
 @param minimized locale for an input locale
 @param modified modified for an input locale
 @param nameInDisplayLocale name of the modified locale in the display locale
 @param nameInSelf name of the modified locale in itself
 */
- (instancetype __nonnull)initWithAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)minimized
                              withAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)modified
                                           withNSString:(NSString *)nameInDisplayLocale
                                           withNSString:(NSString *)nameInSelf;

/*!
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Return a comparator that compares the locale names for the display locale or the in-self names,
  depending on an input parameter.
 @param inSelf if true, compares the nameInSelf, otherwise the nameInDisplayLocale
 @param comparator (meant for strings, but because Java Collator doesn't have  &lt; String &gt; ...)
 @return UiListItem comparator
 */
+ (id<JavaUtilComparator>)getComparatorWithJavaUtilComparator:(id<JavaUtilComparator>)comparator
                                                  withBoolean:(jboolean)inSelf;

/*!
 */
- (NSUInteger)hash;

/*!
 */
- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidIcuTextLocaleDisplayNames_UiListItem)

J2OBJC_FIELD_SETTER(AndroidIcuTextLocaleDisplayNames_UiListItem, minimized_, AndroidIcuUtilULocale *)
J2OBJC_FIELD_SETTER(AndroidIcuTextLocaleDisplayNames_UiListItem, modified_, AndroidIcuUtilULocale *)
J2OBJC_FIELD_SETTER(AndroidIcuTextLocaleDisplayNames_UiListItem, nameInDisplayLocale_, NSString *)
J2OBJC_FIELD_SETTER(AndroidIcuTextLocaleDisplayNames_UiListItem, nameInSelf_, NSString *)

FOUNDATION_EXPORT void AndroidIcuTextLocaleDisplayNames_UiListItem_initWithAndroidIcuUtilULocale_withAndroidIcuUtilULocale_withNSString_withNSString_(AndroidIcuTextLocaleDisplayNames_UiListItem *self, AndroidIcuUtilULocale *minimized, AndroidIcuUtilULocale *modified, NSString *nameInDisplayLocale, NSString *nameInSelf);

FOUNDATION_EXPORT AndroidIcuTextLocaleDisplayNames_UiListItem *new_AndroidIcuTextLocaleDisplayNames_UiListItem_initWithAndroidIcuUtilULocale_withAndroidIcuUtilULocale_withNSString_withNSString_(AndroidIcuUtilULocale *minimized, AndroidIcuUtilULocale *modified, NSString *nameInDisplayLocale, NSString *nameInSelf) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuTextLocaleDisplayNames_UiListItem *create_AndroidIcuTextLocaleDisplayNames_UiListItem_initWithAndroidIcuUtilULocale_withAndroidIcuUtilULocale_withNSString_withNSString_(AndroidIcuUtilULocale *minimized, AndroidIcuUtilULocale *modified, NSString *nameInDisplayLocale, NSString *nameInSelf);

FOUNDATION_EXPORT id<JavaUtilComparator> AndroidIcuTextLocaleDisplayNames_UiListItem_getComparatorWithJavaUtilComparator_withBoolean_(id<JavaUtilComparator> comparator, jboolean inSelf);

J2OBJC_TYPE_LITERAL_HEADER(AndroidIcuTextLocaleDisplayNames_UiListItem)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_AndroidIcuTextLocaleDisplayNames")
