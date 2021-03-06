//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/text/Annotation.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaTextAnnotation")
#ifdef RESTRICT_JavaTextAnnotation
#define INCLUDE_ALL_JavaTextAnnotation 0
#else
#define INCLUDE_ALL_JavaTextAnnotation 1
#endif
#undef RESTRICT_JavaTextAnnotation

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaTextAnnotation_) && (INCLUDE_ALL_JavaTextAnnotation || defined(INCLUDE_JavaTextAnnotation))
#define JavaTextAnnotation_

/*!
 @brief Wrapper for a text attribute value which represents an annotation.An
  annotation has two special aspects: 
 <ol>
  <li>it is connected to a range of main text; if this range or the main text
  is changed then the annotation becomes invalid,</li>
  <li>it can not be joined with adjacent annotations even if the text attribute
  value is the same.
 </li>
  </ol>
  <p>
  By wrapping text attribute values into an <code>Annotation</code>, these aspects
  will be taken into account when handling annotation text and the
  corresponding main text. 
 <p>
  Note: There is no semantic connection between this annotation class and the 
 <code>java.lang.annotation</code> package.
 */
@interface JavaTextAnnotation : NSObject

#pragma mark Public

/*!
 @brief Constructs a new <code>Annotation</code>.
 @param attribute the attribute attached to this annotation. This may be         
 <code>null</code> .
 */
- (instancetype __nonnull)initWithId:(id)attribute;

/*!
 @brief Returns the value of this annotation.The value may be <code>null</code>.
 @return the value of this annotation or <code>null</code>.
 */
- (id)getValue;

/*!
 @brief Returns this annotation in string representation.
 @return the string representation of this annotation.
 */
- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTextAnnotation)

FOUNDATION_EXPORT void JavaTextAnnotation_initWithId_(JavaTextAnnotation *self, id attribute);

FOUNDATION_EXPORT JavaTextAnnotation *new_JavaTextAnnotation_initWithId_(id attribute) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTextAnnotation *create_JavaTextAnnotation_initWithId_(id attribute);

J2OBJC_TYPE_LITERAL_HEADER(JavaTextAnnotation)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaTextAnnotation")
