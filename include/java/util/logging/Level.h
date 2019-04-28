//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/logging/Level.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilLoggingLevel")
#ifdef RESTRICT_JavaUtilLoggingLevel
#define INCLUDE_ALL_JavaUtilLoggingLevel 0
#else
#define INCLUDE_ALL_JavaUtilLoggingLevel 1
#endif
#undef RESTRICT_JavaUtilLoggingLevel

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilLoggingLevel_) && (INCLUDE_ALL_JavaUtilLoggingLevel || defined(INCLUDE_JavaUtilLoggingLevel))
#define JavaUtilLoggingLevel_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

/*!
 @brief The Level class defines a set of standard logging levels that
  can be used to control logging output.The logging Level objects
  are ordered and are specified by ordered integers.
 Enabling logging
  at a given level also enables logging at all higher levels. 
 <p>
  Clients should normally use the predefined Level constants such
  as Level.SEVERE. 
 <p>
  The levels in descending order are: 
 <ul>
  <li>SEVERE (highest value) 
 <li>WARNING
  <li>INFO
  <li>CONFIG
  <li>FINE
  <li>FINER
  <li>FINEST  (lowest value) 
 </ul>
  In addition there is a level OFF that can be used to turn
  off logging, and a level ALL that can be used to enable
  logging of all messages. 
 <p>
  It is possible for third parties to define additional logging
  levels by subclassing Level.  In such cases subclasses should
  take care to chose unique integer level values and to ensure that
  they maintain the Object uniqueness property across serialization
  by defining a suitable readResolve method.
 @since 1.4
 */
@interface JavaUtilLoggingLevel : NSObject < JavaIoSerializable >
@property (readonly, class, strong) JavaUtilLoggingLevel *OFF NS_SWIFT_NAME(OFF);
@property (readonly, class, strong) JavaUtilLoggingLevel *SEVERE NS_SWIFT_NAME(SEVERE);
@property (readonly, class, strong) JavaUtilLoggingLevel *WARNING NS_SWIFT_NAME(WARNING);
@property (readonly, class, strong) JavaUtilLoggingLevel *INFO NS_SWIFT_NAME(INFO);
@property (readonly, class, strong) JavaUtilLoggingLevel *CONFIG NS_SWIFT_NAME(CONFIG);
@property (readonly, class, strong) JavaUtilLoggingLevel *FINE NS_SWIFT_NAME(FINE);
@property (readonly, class, strong) JavaUtilLoggingLevel *FINER NS_SWIFT_NAME(FINER);
@property (readonly, class, strong) JavaUtilLoggingLevel *FINEST NS_SWIFT_NAME(FINEST);
@property (readonly, class, strong) JavaUtilLoggingLevel *ALL NS_SWIFT_NAME(ALL);

+ (JavaUtilLoggingLevel *)OFF;

+ (JavaUtilLoggingLevel *)SEVERE;

+ (JavaUtilLoggingLevel *)WARNING;

+ (JavaUtilLoggingLevel *)INFO;

+ (JavaUtilLoggingLevel *)CONFIG;

+ (JavaUtilLoggingLevel *)FINE;

+ (JavaUtilLoggingLevel *)FINER;

+ (JavaUtilLoggingLevel *)FINEST;

+ (JavaUtilLoggingLevel *)ALL;

#pragma mark Public

/*!
 @brief Compare two objects for value equality.
 @return true if and only if the two objects have the same level value.
 */
- (jboolean)isEqual:(id)ox;

/*!
 @brief Return the localized string name of the Level, for
  the current default locale.
 <p>
  If no localization information is available, the
  non-localized name is returned.
 @return localized name
 */
- (NSString *)getLocalizedName;

/*!
 @brief Return the non-localized string name of the Level.
 @return non-localized name
 */
- (NSString *)getName;

/*!
 @brief Return the level's localization resource bundle name, or
  null if no localization bundle is defined.
 @return localization resource bundle name
 */
- (NSString *)getResourceBundleName;

/*!
 @brief Generate a hashcode.
 @return a hashcode based on the level value
 */
- (NSUInteger)hash;

/*!
 @brief Get the integer value for this level.This integer value
  can be used for efficient ordering comparisons between
  Level objects.
 @return the integer value for this level.
 */
- (jint)intValue;

/*!
 @brief Parse a level name string into a Level.
 <p>
  The argument string may consist of either a level name
  or an integer value. 
 <p>
  For example: 
 <ul>
  <li>     "SEVERE" 
 <li>     "1000" 
 </ul>
 @param name string to be parsed
 @throw NullPointerExceptionif the name is null
 @throw IllegalArgumentExceptionif the value is not valid.
  Valid values are integers between <CODE>Integer.MIN_VALUE</CODE>
  and <CODE>Integer.MAX_VALUE</CODE>, and all known level names.
  Known names are the levels defined by this class (e.g., <CODE>FINE</CODE>,
  <CODE>FINER</CODE>, <CODE>FINEST</CODE>), or created by this class with
  appropriate package access, or new levels defined or created
  by subclasses.
 @return The parsed value. Passing an integer that corresponds to a known name
  (e.g., 700) will return the associated name (e.g., <CODE>CONFIG</CODE>).
  Passing an integer that does not (e.g., 1) will return a new level name
  initialized to that value.
 */
+ (JavaUtilLoggingLevel *)parseWithNSString:(NSString *)name;

/*!
 @brief Returns a string representation of this Level.
 @return the non-localized name of the Level, for example "INFO".
 */
- (NSString *)description;

#pragma mark Protected

/*!
 @brief Create a named Level with a given integer value.
 <p>
  Note that this constructor is "protected" to allow subclassing.
  In general clients of logging should use one of the constant Level
  objects such as SEVERE or FINEST.  However, if clients need to
  add new logging levels, they may subclass Level and define new
  constants.
 @param name the name of the Level, for example "SEVERE".
 @param value an integer value for the level.
 @throw NullPointerExceptionif the name is null
 */
- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)value;

/*!
 @brief Create a named Level with a given integer value and a
  given localization resource name.
 <p>
 @param name the name of the Level, for example "SEVERE".
 @param value an integer value for the level.
 @param resourceBundleName name of a resource bundle to use in     localizing the given name. If the resourceBundleName is null
      or an empty string, it is ignored.
 @throw NullPointerExceptionif the name is null
 */
- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)value
                              withNSString:(NSString *)resourceBundleName;

#pragma mark Package-Private

+ (JavaUtilLoggingLevel *)findLevelWithNSString:(NSString *)name;

- (NSString *)getLevelName;

- (NSString *)getLocalizedLevelName;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaUtilLoggingLevel)

/*!
 @brief OFF is a special level that can be used to turn off logging.
 This level is initialized to <CODE>Integer.MAX_VALUE</CODE>.
 */
inline JavaUtilLoggingLevel *JavaUtilLoggingLevel_get_OFF(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaUtilLoggingLevel *JavaUtilLoggingLevel_OFF;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilLoggingLevel, OFF, JavaUtilLoggingLevel *)

/*!
 @brief SEVERE is a message level indicating a serious failure.
 <p>
  In general SEVERE messages should describe events that are
  of considerable importance and which will prevent normal
  program execution.   They should be reasonably intelligible
  to end users and to system administrators.
  This level is initialized to <CODE>1000</CODE>.
 */
inline JavaUtilLoggingLevel *JavaUtilLoggingLevel_get_SEVERE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaUtilLoggingLevel *JavaUtilLoggingLevel_SEVERE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilLoggingLevel, SEVERE, JavaUtilLoggingLevel *)

/*!
 @brief WARNING is a message level indicating a potential problem.
 <p>
  In general WARNING messages should describe events that will
  be of interest to end users or system managers, or which
  indicate potential problems.
  This level is initialized to <CODE>900</CODE>.
 */
inline JavaUtilLoggingLevel *JavaUtilLoggingLevel_get_WARNING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaUtilLoggingLevel *JavaUtilLoggingLevel_WARNING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilLoggingLevel, WARNING, JavaUtilLoggingLevel *)

/*!
 @brief INFO is a message level for informational messages.
 <p>
  Typically INFO messages will be written to the console
  or its equivalent.  So the INFO level should only be
  used for reasonably significant messages that will
  make sense to end users and system administrators.
  This level is initialized to <CODE>800</CODE>.
 */
inline JavaUtilLoggingLevel *JavaUtilLoggingLevel_get_INFO(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaUtilLoggingLevel *JavaUtilLoggingLevel_INFO;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilLoggingLevel, INFO, JavaUtilLoggingLevel *)

/*!
 @brief CONFIG is a message level for static configuration messages.
 <p>
  CONFIG messages are intended to provide a variety of static
  configuration information, to assist in debugging problems
  that may be associated with particular configurations.
  For example, CONFIG message might include the CPU type,
  the graphics depth, the GUI look-and-feel, etc.
  This level is initialized to <CODE>700</CODE>.
 */
inline JavaUtilLoggingLevel *JavaUtilLoggingLevel_get_CONFIG(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaUtilLoggingLevel *JavaUtilLoggingLevel_CONFIG;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilLoggingLevel, CONFIG, JavaUtilLoggingLevel *)

/*!
 @brief FINE is a message level providing tracing information.
 <p>
  All of FINE, FINER, and FINEST are intended for relatively
  detailed tracing.  The exact meaning of the three levels will
  vary between subsystems, but in general, FINEST should be used
  for the most voluminous detailed output, FINER for somewhat
  less detailed output, and FINE for the  lowest volume (and
  most important) messages. 
 <p>
  In general the FINE level should be used for information
  that will be broadly interesting to developers who do not have
  a specialized interest in the specific subsystem. 
 <p>
  FINE messages might include things like minor (recoverable)
  failures.  Issues indicating potential performance problems
  are also worth logging as FINE.
  This level is initialized to <CODE>500</CODE>.
 */
inline JavaUtilLoggingLevel *JavaUtilLoggingLevel_get_FINE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaUtilLoggingLevel *JavaUtilLoggingLevel_FINE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilLoggingLevel, FINE, JavaUtilLoggingLevel *)

/*!
 @brief FINER indicates a fairly detailed tracing message.
 By default logging calls for entering, returning, or throwing
  an exception are traced at this level.
  This level is initialized to <CODE>400</CODE>.
 */
inline JavaUtilLoggingLevel *JavaUtilLoggingLevel_get_FINER(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaUtilLoggingLevel *JavaUtilLoggingLevel_FINER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilLoggingLevel, FINER, JavaUtilLoggingLevel *)

/*!
 @brief FINEST indicates a highly detailed tracing message.
 This level is initialized to <CODE>300</CODE>.
 */
inline JavaUtilLoggingLevel *JavaUtilLoggingLevel_get_FINEST(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaUtilLoggingLevel *JavaUtilLoggingLevel_FINEST;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilLoggingLevel, FINEST, JavaUtilLoggingLevel *)

/*!
 @brief ALL indicates that all messages should be logged.
 This level is initialized to <CODE>Integer.MIN_VALUE</CODE>.
 */
inline JavaUtilLoggingLevel *JavaUtilLoggingLevel_get_ALL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaUtilLoggingLevel *JavaUtilLoggingLevel_ALL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilLoggingLevel, ALL, JavaUtilLoggingLevel *)

FOUNDATION_EXPORT void JavaUtilLoggingLevel_initWithNSString_withInt_(JavaUtilLoggingLevel *self, NSString *name, jint value);

FOUNDATION_EXPORT JavaUtilLoggingLevel *new_JavaUtilLoggingLevel_initWithNSString_withInt_(NSString *name, jint value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilLoggingLevel *create_JavaUtilLoggingLevel_initWithNSString_withInt_(NSString *name, jint value);

FOUNDATION_EXPORT void JavaUtilLoggingLevel_initWithNSString_withInt_withNSString_(JavaUtilLoggingLevel *self, NSString *name, jint value, NSString *resourceBundleName);

FOUNDATION_EXPORT JavaUtilLoggingLevel *new_JavaUtilLoggingLevel_initWithNSString_withInt_withNSString_(NSString *name, jint value, NSString *resourceBundleName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilLoggingLevel *create_JavaUtilLoggingLevel_initWithNSString_withInt_withNSString_(NSString *name, jint value, NSString *resourceBundleName);

FOUNDATION_EXPORT JavaUtilLoggingLevel *JavaUtilLoggingLevel_findLevelWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaUtilLoggingLevel *JavaUtilLoggingLevel_parseWithNSString_(NSString *name);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLoggingLevel)

#endif

#if !defined (JavaUtilLoggingLevel_KnownLevel_) && (INCLUDE_ALL_JavaUtilLoggingLevel || defined(INCLUDE_JavaUtilLoggingLevel_KnownLevel))
#define JavaUtilLoggingLevel_KnownLevel_

@class JavaUtilLoggingLevel;

@interface JavaUtilLoggingLevel_KnownLevel : NSObject {
 @public
  JavaUtilLoggingLevel *levelObject_;
  JavaUtilLoggingLevel *mirroredLevel_;
}

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)l;

+ (void)addWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)l;

+ (JavaUtilLoggingLevel_KnownLevel *)findByLocalizedLevelNameWithNSString:(NSString *)name;

+ (JavaUtilLoggingLevel_KnownLevel *)findByLocalizedNameWithNSString:(NSString *)name;

+ (JavaUtilLoggingLevel_KnownLevel *)findByNameWithNSString:(NSString *)name;

+ (JavaUtilLoggingLevel_KnownLevel *)findByValueWithInt:(jint)value;

+ (JavaUtilLoggingLevel_KnownLevel *)matchesWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)l;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaUtilLoggingLevel_KnownLevel)

J2OBJC_FIELD_SETTER(JavaUtilLoggingLevel_KnownLevel, levelObject_, JavaUtilLoggingLevel *)
J2OBJC_FIELD_SETTER(JavaUtilLoggingLevel_KnownLevel, mirroredLevel_, JavaUtilLoggingLevel *)

FOUNDATION_EXPORT void JavaUtilLoggingLevel_KnownLevel_initWithJavaUtilLoggingLevel_(JavaUtilLoggingLevel_KnownLevel *self, JavaUtilLoggingLevel *l);

FOUNDATION_EXPORT JavaUtilLoggingLevel_KnownLevel *new_JavaUtilLoggingLevel_KnownLevel_initWithJavaUtilLoggingLevel_(JavaUtilLoggingLevel *l) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilLoggingLevel_KnownLevel *create_JavaUtilLoggingLevel_KnownLevel_initWithJavaUtilLoggingLevel_(JavaUtilLoggingLevel *l);

FOUNDATION_EXPORT void JavaUtilLoggingLevel_KnownLevel_addWithJavaUtilLoggingLevel_(JavaUtilLoggingLevel *l);

FOUNDATION_EXPORT JavaUtilLoggingLevel_KnownLevel *JavaUtilLoggingLevel_KnownLevel_findByNameWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaUtilLoggingLevel_KnownLevel *JavaUtilLoggingLevel_KnownLevel_findByValueWithInt_(jint value);

FOUNDATION_EXPORT JavaUtilLoggingLevel_KnownLevel *JavaUtilLoggingLevel_KnownLevel_findByLocalizedLevelNameWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaUtilLoggingLevel_KnownLevel *JavaUtilLoggingLevel_KnownLevel_findByLocalizedNameWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaUtilLoggingLevel_KnownLevel *JavaUtilLoggingLevel_KnownLevel_matchesWithJavaUtilLoggingLevel_(JavaUtilLoggingLevel *l);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLoggingLevel_KnownLevel)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilLoggingLevel")
