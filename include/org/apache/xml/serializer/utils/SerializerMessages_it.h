//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/utils/SerializerMessages_it.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerUtilsSerializerMessages_it")
#ifdef RESTRICT_OrgApacheXmlSerializerUtilsSerializerMessages_it
#define INCLUDE_ALL_OrgApacheXmlSerializerUtilsSerializerMessages_it 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerUtilsSerializerMessages_it 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerUtilsSerializerMessages_it

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlSerializerUtilsSerializerMessages_it_) && (INCLUDE_ALL_OrgApacheXmlSerializerUtilsSerializerMessages_it || defined(INCLUDE_OrgApacheXmlSerializerUtilsSerializerMessages_it))
#define OrgApacheXmlSerializerUtilsSerializerMessages_it_

#define RESTRICT_JavaUtilListResourceBundle 1
#define INCLUDE_JavaUtilListResourceBundle 1
#include "java/util/ListResourceBundle.h"

@class IOSObjectArray;

/*!
 @brief An instance of this class is a ListResourceBundle that
  has the required getContents() method that returns
  an array of message-key/message associations.
 <p>
  The message keys are defined in <code>MsgKey</code>. The
  messages that those keys map to are defined here. 
 <p>
  The messages in the English version are intended to be
  translated.
  This class is not a public API, it is only public because it is
  used in org.apache.xml.serializer.
 */
@interface OrgApacheXmlSerializerUtilsSerializerMessages_it : JavaUtilListResourceBundle

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief The lookup table for error messages.
 */
- (IOSObjectArray *)getContents;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerUtilsSerializerMessages_it)

FOUNDATION_EXPORT void OrgApacheXmlSerializerUtilsSerializerMessages_it_init(OrgApacheXmlSerializerUtilsSerializerMessages_it *self);

FOUNDATION_EXPORT OrgApacheXmlSerializerUtilsSerializerMessages_it *new_OrgApacheXmlSerializerUtilsSerializerMessages_it_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerUtilsSerializerMessages_it *create_OrgApacheXmlSerializerUtilsSerializerMessages_it_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerUtilsSerializerMessages_it)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerUtilsSerializerMessages_it")
