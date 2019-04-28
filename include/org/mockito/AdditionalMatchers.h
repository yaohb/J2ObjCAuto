//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/AdditionalMatchers.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoAdditionalMatchers")
#ifdef RESTRICT_OrgMockitoAdditionalMatchers
#define INCLUDE_ALL_OrgMockitoAdditionalMatchers 0
#else
#define INCLUDE_ALL_OrgMockitoAdditionalMatchers 1
#endif
#undef RESTRICT_OrgMockitoAdditionalMatchers

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoAdditionalMatchers_) && (INCLUDE_ALL_OrgMockitoAdditionalMatchers || defined(INCLUDE_OrgMockitoAdditionalMatchers))
#define OrgMockitoAdditionalMatchers_

@class IOSBooleanArray;
@class IOSByteArray;
@class IOSCharArray;
@class IOSDoubleArray;
@class IOSFloatArray;
@class IOSIntArray;
@class IOSLongArray;
@class IOSObjectArray;
@class IOSShortArray;
@protocol JavaLangComparable;

/*!
 @brief See <code>Matchers</code> for general info about matchers.
 <p>
  AdditionalMatchers provides rarely used matchers, kept only for somewhat compatibility with EasyMock. 
  Use additional matchers very judiciously because they may impact readability of a test.
  It is recommended to use matchers from <code>Matchers</code> and keep stubbing and verification simple. 
 <p>
  Example of using logical and(), not(), or() matchers: 
    
 <pre class="code"><code class="java">
    //anything but not "ejb"
    mock.someMethod(not(eq("ejb")));   
    //not "ejb" and not "michael jackson"
    mock.someMethod(and(not(eq("ejb")), not(eq("michael jackson"))));   
    //1 or 10
    mock.someMethod(or(eq(1), eq(10))); 
 </code>
@endcode
  
  Scroll down to see all methods - full list of matchers.
 */
@interface OrgMockitoAdditionalMatchers : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief boolean argument that matches both given matchers.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param first placeholder for the first argument matcher.
 @param second placeholder for the second argument matcher.
 @return <code>false</code>.
 */
+ (jboolean)and__WithBoolean:(jboolean)first
                 withBoolean:(jboolean)second;

/*!
 @brief byte argument that matches both given argument matchers.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param first placeholder for the first argument matcher.
 @param second placeholder for the second argument matcher.
 @return <code>0</code>.
 */
+ (jbyte)and__WithByte:(jbyte)first
              withByte:(jbyte)second;

/*!
 @brief char argument that matches both given argument matchers.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param first placeholder for the first argument matcher.
 @param second placeholder for the second argument matcher.
 @return <code>0</code>.
 */
+ (jchar)and__WithChar:(jchar)first
              withChar:(jchar)second;

/*!
 @brief double argument that matches both given argument matchers.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param first placeholder for the first argument matcher.
 @param second placeholder for the second argument matcher.
 @return <code>0</code>.
 */
+ (jdouble)and__WithDouble:(jdouble)first
                withDouble:(jdouble)second;

/*!
 @brief float argument that matches both given argument matchers.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param first placeholder for the first argument matcher.
 @param second placeholder for the second argument matcher.
 @return <code>0</code>.
 */
+ (jfloat)and__WithFloat:(jfloat)first
               withFloat:(jfloat)second;

/*!
 @brief int argument that matches both given argument matchers.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param first placeholder for the first argument matcher.
 @param second placeholder for the second argument matcher.
 @return <code>0</code>.
 */
+ (jint)and__WithInt:(jint)first
             withInt:(jint)second;

/*!
 @brief long argument that matches both given argument matchers.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param first placeholder for the first argument matcher.
 @param second placeholder for the second argument matcher.
 @return <code>0</code>.
 */
+ (jlong)and__WithLong:(jlong)first
              withLong:(jlong)second;

/*!
 @brief short argument that matches both given argument matchers.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param first placeholder for the first argument matcher.
 @param second placeholder for the second argument matcher.
 @return <code>0</code>.
 */
+ (jshort)and__WithShort:(jshort)first
               withShort:(jshort)second;

/*!
 @brief Object argument that matches both given argument matchers.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param first placeholder for the first argument matcher.
 @param second placeholder for the second argument matcher.
 @return <code>null</code>.
 */
+ (id)and__WithId:(id)first
           withId:(id)second;

/*!
 @brief boolean array argument that is equal to the given array, i.e.it has to
  have the same length, and each element has to be equal.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given array.
 @return <code>null</code>.
 */
+ (IOSBooleanArray *)aryEqWithBooleanArray:(IOSBooleanArray *)value;

/*!
 @brief byte array argument that is equal to the given array, i.e.it has to have
  the same length, and each element has to be equal.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given array.
 @return <code>null</code>.
 */
+ (IOSByteArray *)aryEqWithByteArray:(IOSByteArray *)value;

/*!
 @brief char array argument that is equal to the given array, i.e.it has to have
  the same length, and each element has to be equal.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given array.
 @return <code>null</code>.
 */
+ (IOSCharArray *)aryEqWithCharArray:(IOSCharArray *)value;

/*!
 @brief double array argument that is equal to the given array, i.e.it has to
  have the same length, and each element has to be equal.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given array.
 @return <code>null</code>.
 */
+ (IOSDoubleArray *)aryEqWithDoubleArray:(IOSDoubleArray *)value;

/*!
 @brief float array argument that is equal to the given array, i.e.it has to
  have the same length, and each element has to be equal.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given array.
 @return <code>null</code>.
 */
+ (IOSFloatArray *)aryEqWithFloatArray:(IOSFloatArray *)value;

/*!
 @brief int array argument that is equal to the given array, i.e.it has to have
  the same length, and each element has to be equal.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given array.
 @return <code>null</code>.
 */
+ (IOSIntArray *)aryEqWithIntArray:(IOSIntArray *)value;

/*!
 @brief long array argument that is equal to the given array, i.e.it has to have
  the same length, and each element has to be equal.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given array.
 @return <code>null</code>.
 */
+ (IOSLongArray *)aryEqWithLongArray:(IOSLongArray *)value;

/*!
 @brief short array argument that is equal to the given array, i.e.it has to
  have the same length, and each element has to be equal.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given array.
 @return <code>null</code>.
 */
+ (IOSShortArray *)aryEqWithShortArray:(IOSShortArray *)value;

/*!
 @brief Object array argument that is equal to the given array, i.e.it has to
  have the same type, length, and each element has to be equal.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given array.
 @return <code>null</code>.
 */
+ (IOSObjectArray *)aryEqWithNSObjectArray:(IOSObjectArray *)value;

/*!
 @brief comparable argument equals to the given value according to their
  compareTo method.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given value.
 @return <code>null</code>.
 */
+ (id<JavaLangComparable>)cmpEqWithJavaLangComparable:(id<JavaLangComparable>)value;

/*!
 @brief double argument that has an absolute difference to the given value that
  is less than the given delta details.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given value.
 @param delta the given delta.
 @return <code>0</code>.
 */
+ (jdouble)eqWithDouble:(jdouble)value
             withDouble:(jdouble)delta;

/*!
 @brief float argument that has an absolute difference to the given value that is
  less than the given delta details.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given value.
 @param delta the given delta.
 @return <code>0</code>.
 */
+ (jfloat)eqWithFloat:(jfloat)value
            withFloat:(jfloat)delta;

/*!
 @brief String argument that contains a substring that matches the given regular
  expression.
 @param regex the regular expression.
 @return <code>null</code>.
 */
+ (NSString *)findWithNSString:(NSString *)regex;

/*!
 @brief byte argument greater than or equal to the given value.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given value.
 @return <code>0</code>.
 */
+ (jbyte)geqWithByte:(jbyte)value;

/*!
 @brief argument greater than or equal the given value.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given value.
 @return <code>null</code>.
 */
+ (id<JavaLangComparable>)geqWithJavaLangComparable:(id<JavaLangComparable>)value;

/*!
 @brief double argument greater than or equal to the given value.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given value.
 @return <code>0</code>.
 */
+ (jdouble)geqWithDouble:(jdouble)value;

/*!
 @brief float argument greater than or equal to the given value.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given value.
 @return <code>0</code>.
 */
+ (jfloat)geqWithFloat:(jfloat)value;

/*!
 @brief int argument greater than or equal to the given value.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given value.
 @return <code>0</code>.
 */
+ (jint)geqWithInt:(jint)value;

/*!
 @brief long argument greater than or equal to the given value.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given value.
 @return <code>0</code>.
 */
+ (jlong)geqWithLong:(jlong)value;

/*!
 @brief short argument greater than or equal to the given value.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given value.
 @return <code>0</code>.
 */
+ (jshort)geqWithShort:(jshort)value;

/*!
 @brief byte argument greater than the given value.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given value.
 @return <code>0</code>.
 */
+ (jbyte)gtWithByte:(jbyte)value;

/*!
 @brief comparable argument greater than the given value.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given value.
 @return <code>null</code>.
 */
+ (id<JavaLangComparable>)gtWithJavaLangComparable:(id<JavaLangComparable>)value;

/*!
 @brief double argument greater than the given value.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given value.
 @return <code>0</code>.
 */
+ (jdouble)gtWithDouble:(jdouble)value;

/*!
 @brief float argument greater than the given value.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given value.
 @return <code>0</code>.
 */
+ (jfloat)gtWithFloat:(jfloat)value;

/*!
 @brief int argument greater than the given value.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given value.
 @return <code>0</code>.
 */
+ (jint)gtWithInt:(jint)value;

/*!
 @brief long argument greater than the given value.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given value.
 @return <code>0</code>.
 */
+ (jlong)gtWithLong:(jlong)value;

/*!
 @brief short argument greater than the given value.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given value.
 @return <code>0</code>.
 */
+ (jshort)gtWithShort:(jshort)value;

/*!
 @brief byte argument less than or equal to the given value.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given value.
 @return <code>0</code>.
 */
+ (jbyte)leqWithByte:(jbyte)value;

/*!
 @brief comparable argument less than or equal the given value details.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given value.
 @return <code>null</code>.
 */
+ (id<JavaLangComparable>)leqWithJavaLangComparable:(id<JavaLangComparable>)value;

/*!
 @brief double argument less than or equal to the given value.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given value.
 @return <code>0</code>.
 */
+ (jdouble)leqWithDouble:(jdouble)value;

/*!
 @brief float argument less than or equal to the given value.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given value.
 @return <code>0</code>.
 */
+ (jfloat)leqWithFloat:(jfloat)value;

/*!
 @brief int argument less than or equal to the given value.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given value.
 @return <code>0</code>.
 */
+ (jint)leqWithInt:(jint)value;

/*!
 @brief long argument less than or equal to the given value.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given value.
 @return <code>0</code>.
 */
+ (jlong)leqWithLong:(jlong)value;

/*!
 @brief short argument less than or equal to the given value.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given value.
 @return <code>0</code>.
 */
+ (jshort)leqWithShort:(jshort)value;

/*!
 @brief byte argument less than the given value.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given value.
 @return <code>0</code>.
 */
+ (jbyte)ltWithByte:(jbyte)value;

/*!
 @brief comparable argument less than the given value.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given value.
 @return <code>null</code>.
 */
+ (id<JavaLangComparable>)ltWithJavaLangComparable:(id<JavaLangComparable>)value;

/*!
 @brief double argument less than the given value.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given value.
 @return <code>0</code>.
 */
+ (jdouble)ltWithDouble:(jdouble)value;

/*!
 @brief float argument less than the given value.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given value.
 @return <code>0</code>.
 */
+ (jfloat)ltWithFloat:(jfloat)value;

/*!
 @brief int argument less than the given value.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given value.
 @return <code>0</code>.
 */
+ (jint)ltWithInt:(jint)value;

/*!
 @brief long argument less than the given value.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given value.
 @return <code>0</code>.
 */
+ (jlong)ltWithLong:(jlong)value;

/*!
 @brief short argument less than the given value.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param value the given value.
 @return <code>0</code>.
 */
+ (jshort)ltWithShort:(jshort)value;

/*!
 @brief boolean argument that does not match the given argument matcher.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param first placeholder for the argument matcher.
 @return <code>false</code>.
 */
+ (jboolean)not__WithBoolean:(jboolean)first;

/*!
 @brief byte argument that does not match the given argument matcher.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param first placeholder for the argument matcher.
 @return <code>0</code>.
 */
+ (jbyte)not__WithByte:(jbyte)first;

/*!
 @brief char argument that does not match the given argument matcher.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param first placeholder for the argument matcher.
 @return <code>0</code>.
 */
+ (jchar)not__WithChar:(jchar)first;

/*!
 @brief double argument that does not match the given argument matcher.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param first placeholder for the argument matcher.
 @return <code>0</code>.
 */
+ (jdouble)not__WithDouble:(jdouble)first;

/*!
 @brief float argument that does not match the given argument matcher.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param first placeholder for the argument matcher.
 @return <code>0</code>.
 */
+ (jfloat)not__WithFloat:(jfloat)first;

/*!
 @brief int argument that does not match the given argument matcher.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param first placeholder for the argument matcher.
 @return <code>0</code>.
 */
+ (jint)not__WithInt:(jint)first;

/*!
 @brief long argument that does not match the given argument matcher.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param first placeholder for the argument matcher.
 @return <code>0</code>.
 */
+ (jlong)not__WithLong:(jlong)first;

/*!
 @brief short argument that does not match the given argument matcher.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param first placeholder for the argument matcher.
 @return <code>0</code>.
 */
+ (jshort)not__WithShort:(jshort)first;

/*!
 @brief Object argument that does not match the given argument matcher.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param first placeholder for the argument matcher.
 @return <code>null</code>.
 */
+ (id)not__WithId:(id)first;

/*!
 @brief boolean argument that matches any of the given argument matchers.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param first placeholder for the first argument matcher.
 @param second placeholder for the second argument matcher.
 @return <code>false</code>.
 */
+ (jboolean)or__WithBoolean:(jboolean)first
                withBoolean:(jboolean)second;

/*!
 @brief byte argument that matches any of the given argument matchers.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param first placeholder for the first argument matcher.
 @param second placeholder for the second argument matcher.
 @return <code>0</code>.
 */
+ (jbyte)or__WithByte:(jbyte)first
             withByte:(jbyte)second;

/*!
 @brief char argument that matches any of the given argument matchers.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param first placeholder for the first argument matcher.
 @param second placeholder for the second argument matcher.
 @return <code>0</code>.
 */
+ (jchar)or__WithChar:(jchar)first
             withChar:(jchar)second;

/*!
 @brief double argument that matches any of the given argument matchers.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param first placeholder for the first argument matcher.
 @param second placeholder for the second argument matcher.
 @return <code>0</code>.
 */
+ (jdouble)or__WithDouble:(jdouble)first
               withDouble:(jdouble)second;

/*!
 @brief float argument that matches any of the given argument matchers.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param first placeholder for the first argument matcher.
 @param second placeholder for the second argument matcher.
 @return <code>0</code>.
 */
+ (jfloat)or__WithFloat:(jfloat)first
              withFloat:(jfloat)second;

/*!
 @brief int argument that matches any of the given argument matchers.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param first placeholder for the first argument matcher.
 @param second placeholder for the second argument matcher.
 @return <code>0</code>.
 */
+ (jint)or__WithInt:(jint)first
            withInt:(jint)second;

/*!
 @brief long argument that matches any of the given argument matchers.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param first placeholder for the first argument matcher.
 @param second placeholder for the second argument matcher.
 @return <code>0</code>.
 */
+ (jlong)or__WithLong:(jlong)first
             withLong:(jlong)second;

/*!
 @brief short argument that matches any of the given argument matchers.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param first placeholder for the first argument matcher.
 @param second placeholder for the second argument matcher.
 @return <code>0</code>.
 */
+ (jshort)or__WithShort:(jshort)first
              withShort:(jshort)second;

/*!
 @brief Object argument that matches any of the given argument matchers.
 <p>
  See examples in javadoc for <code>AdditionalMatchers</code> class
 @param first placeholder for the first argument matcher.
 @param second placeholder for the second argument matcher.
 @return <code>null</code>.
 */
+ (id)or__WithId:(id)first
          withId:(id)second;

@end

J2OBJC_STATIC_INIT(OrgMockitoAdditionalMatchers)

FOUNDATION_EXPORT void OrgMockitoAdditionalMatchers_init(OrgMockitoAdditionalMatchers *self);

FOUNDATION_EXPORT OrgMockitoAdditionalMatchers *new_OrgMockitoAdditionalMatchers_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoAdditionalMatchers *create_OrgMockitoAdditionalMatchers_init(void);

FOUNDATION_EXPORT id<JavaLangComparable> OrgMockitoAdditionalMatchers_geqWithJavaLangComparable_(id<JavaLangComparable> value);

FOUNDATION_EXPORT jbyte OrgMockitoAdditionalMatchers_geqWithByte_(jbyte value);

FOUNDATION_EXPORT jdouble OrgMockitoAdditionalMatchers_geqWithDouble_(jdouble value);

FOUNDATION_EXPORT jfloat OrgMockitoAdditionalMatchers_geqWithFloat_(jfloat value);

FOUNDATION_EXPORT jint OrgMockitoAdditionalMatchers_geqWithInt_(jint value);

FOUNDATION_EXPORT jlong OrgMockitoAdditionalMatchers_geqWithLong_(jlong value);

FOUNDATION_EXPORT jshort OrgMockitoAdditionalMatchers_geqWithShort_(jshort value);

FOUNDATION_EXPORT id<JavaLangComparable> OrgMockitoAdditionalMatchers_leqWithJavaLangComparable_(id<JavaLangComparable> value);

FOUNDATION_EXPORT jbyte OrgMockitoAdditionalMatchers_leqWithByte_(jbyte value);

FOUNDATION_EXPORT jdouble OrgMockitoAdditionalMatchers_leqWithDouble_(jdouble value);

FOUNDATION_EXPORT jfloat OrgMockitoAdditionalMatchers_leqWithFloat_(jfloat value);

FOUNDATION_EXPORT jint OrgMockitoAdditionalMatchers_leqWithInt_(jint value);

FOUNDATION_EXPORT jlong OrgMockitoAdditionalMatchers_leqWithLong_(jlong value);

FOUNDATION_EXPORT jshort OrgMockitoAdditionalMatchers_leqWithShort_(jshort value);

FOUNDATION_EXPORT id<JavaLangComparable> OrgMockitoAdditionalMatchers_gtWithJavaLangComparable_(id<JavaLangComparable> value);

FOUNDATION_EXPORT jbyte OrgMockitoAdditionalMatchers_gtWithByte_(jbyte value);

FOUNDATION_EXPORT jdouble OrgMockitoAdditionalMatchers_gtWithDouble_(jdouble value);

FOUNDATION_EXPORT jfloat OrgMockitoAdditionalMatchers_gtWithFloat_(jfloat value);

FOUNDATION_EXPORT jint OrgMockitoAdditionalMatchers_gtWithInt_(jint value);

FOUNDATION_EXPORT jlong OrgMockitoAdditionalMatchers_gtWithLong_(jlong value);

FOUNDATION_EXPORT jshort OrgMockitoAdditionalMatchers_gtWithShort_(jshort value);

FOUNDATION_EXPORT id<JavaLangComparable> OrgMockitoAdditionalMatchers_ltWithJavaLangComparable_(id<JavaLangComparable> value);

FOUNDATION_EXPORT jbyte OrgMockitoAdditionalMatchers_ltWithByte_(jbyte value);

FOUNDATION_EXPORT jdouble OrgMockitoAdditionalMatchers_ltWithDouble_(jdouble value);

FOUNDATION_EXPORT jfloat OrgMockitoAdditionalMatchers_ltWithFloat_(jfloat value);

FOUNDATION_EXPORT jint OrgMockitoAdditionalMatchers_ltWithInt_(jint value);

FOUNDATION_EXPORT jlong OrgMockitoAdditionalMatchers_ltWithLong_(jlong value);

FOUNDATION_EXPORT jshort OrgMockitoAdditionalMatchers_ltWithShort_(jshort value);

FOUNDATION_EXPORT id<JavaLangComparable> OrgMockitoAdditionalMatchers_cmpEqWithJavaLangComparable_(id<JavaLangComparable> value);

FOUNDATION_EXPORT NSString *OrgMockitoAdditionalMatchers_findWithNSString_(NSString *regex);

FOUNDATION_EXPORT IOSObjectArray *OrgMockitoAdditionalMatchers_aryEqWithNSObjectArray_(IOSObjectArray *value);

FOUNDATION_EXPORT IOSShortArray *OrgMockitoAdditionalMatchers_aryEqWithShortArray_(IOSShortArray *value);

FOUNDATION_EXPORT IOSLongArray *OrgMockitoAdditionalMatchers_aryEqWithLongArray_(IOSLongArray *value);

FOUNDATION_EXPORT IOSIntArray *OrgMockitoAdditionalMatchers_aryEqWithIntArray_(IOSIntArray *value);

FOUNDATION_EXPORT IOSFloatArray *OrgMockitoAdditionalMatchers_aryEqWithFloatArray_(IOSFloatArray *value);

FOUNDATION_EXPORT IOSDoubleArray *OrgMockitoAdditionalMatchers_aryEqWithDoubleArray_(IOSDoubleArray *value);

FOUNDATION_EXPORT IOSCharArray *OrgMockitoAdditionalMatchers_aryEqWithCharArray_(IOSCharArray *value);

FOUNDATION_EXPORT IOSByteArray *OrgMockitoAdditionalMatchers_aryEqWithByteArray_(IOSByteArray *value);

FOUNDATION_EXPORT IOSBooleanArray *OrgMockitoAdditionalMatchers_aryEqWithBooleanArray_(IOSBooleanArray *value);

FOUNDATION_EXPORT jboolean OrgMockitoAdditionalMatchers_and__WithBoolean_withBoolean_(jboolean first, jboolean second);

FOUNDATION_EXPORT jbyte OrgMockitoAdditionalMatchers_and__WithByte_withByte_(jbyte first, jbyte second);

FOUNDATION_EXPORT jchar OrgMockitoAdditionalMatchers_and__WithChar_withChar_(jchar first, jchar second);

FOUNDATION_EXPORT jdouble OrgMockitoAdditionalMatchers_and__WithDouble_withDouble_(jdouble first, jdouble second);

FOUNDATION_EXPORT jfloat OrgMockitoAdditionalMatchers_and__WithFloat_withFloat_(jfloat first, jfloat second);

FOUNDATION_EXPORT jint OrgMockitoAdditionalMatchers_and__WithInt_withInt_(jint first, jint second);

FOUNDATION_EXPORT jlong OrgMockitoAdditionalMatchers_and__WithLong_withLong_(jlong first, jlong second);

FOUNDATION_EXPORT jshort OrgMockitoAdditionalMatchers_and__WithShort_withShort_(jshort first, jshort second);

FOUNDATION_EXPORT id OrgMockitoAdditionalMatchers_and__WithId_withId_(id first, id second);

FOUNDATION_EXPORT jboolean OrgMockitoAdditionalMatchers_or__WithBoolean_withBoolean_(jboolean first, jboolean second);

FOUNDATION_EXPORT id OrgMockitoAdditionalMatchers_or__WithId_withId_(id first, id second);

FOUNDATION_EXPORT jshort OrgMockitoAdditionalMatchers_or__WithShort_withShort_(jshort first, jshort second);

FOUNDATION_EXPORT jlong OrgMockitoAdditionalMatchers_or__WithLong_withLong_(jlong first, jlong second);

FOUNDATION_EXPORT jint OrgMockitoAdditionalMatchers_or__WithInt_withInt_(jint first, jint second);

FOUNDATION_EXPORT jfloat OrgMockitoAdditionalMatchers_or__WithFloat_withFloat_(jfloat first, jfloat second);

FOUNDATION_EXPORT jdouble OrgMockitoAdditionalMatchers_or__WithDouble_withDouble_(jdouble first, jdouble second);

FOUNDATION_EXPORT jchar OrgMockitoAdditionalMatchers_or__WithChar_withChar_(jchar first, jchar second);

FOUNDATION_EXPORT jbyte OrgMockitoAdditionalMatchers_or__WithByte_withByte_(jbyte first, jbyte second);

FOUNDATION_EXPORT id OrgMockitoAdditionalMatchers_not__WithId_(id first);

FOUNDATION_EXPORT jshort OrgMockitoAdditionalMatchers_not__WithShort_(jshort first);

FOUNDATION_EXPORT jint OrgMockitoAdditionalMatchers_not__WithInt_(jint first);

FOUNDATION_EXPORT jlong OrgMockitoAdditionalMatchers_not__WithLong_(jlong first);

FOUNDATION_EXPORT jfloat OrgMockitoAdditionalMatchers_not__WithFloat_(jfloat first);

FOUNDATION_EXPORT jdouble OrgMockitoAdditionalMatchers_not__WithDouble_(jdouble first);

FOUNDATION_EXPORT jchar OrgMockitoAdditionalMatchers_not__WithChar_(jchar first);

FOUNDATION_EXPORT jboolean OrgMockitoAdditionalMatchers_not__WithBoolean_(jboolean first);

FOUNDATION_EXPORT jbyte OrgMockitoAdditionalMatchers_not__WithByte_(jbyte first);

FOUNDATION_EXPORT jdouble OrgMockitoAdditionalMatchers_eqWithDouble_withDouble_(jdouble value, jdouble delta);

FOUNDATION_EXPORT jfloat OrgMockitoAdditionalMatchers_eqWithFloat_withFloat_(jfloat value, jfloat delta);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoAdditionalMatchers)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoAdditionalMatchers")
