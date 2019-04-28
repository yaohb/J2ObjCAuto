//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/jsr305/build_result/java/javax/annotation/concurrent/GuardedBy.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationConcurrentGuardedBy")
#ifdef RESTRICT_JavaxAnnotationConcurrentGuardedBy
#define INCLUDE_ALL_JavaxAnnotationConcurrentGuardedBy 0
#else
#define INCLUDE_ALL_JavaxAnnotationConcurrentGuardedBy 1
#endif
#undef RESTRICT_JavaxAnnotationConcurrentGuardedBy

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxAnnotationConcurrentGuardedBy_) && (INCLUDE_ALL_JavaxAnnotationConcurrentGuardedBy || defined(INCLUDE_JavaxAnnotationConcurrentGuardedBy))
#define JavaxAnnotationConcurrentGuardedBy_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief GuardedBy
  
  The field or method to which this annotation is applied can only be accessed
  when holding a particular lock, which may be a built-in (synchronization)
  lock, or may be an explicit java.util.concurrent.Lock.
 The argument determines which lock guards the annotated field or method: this :
  The string literal "this" means that this field is guarded by the class in
  which it is defined. class-name.this : For inner classes, it may be necessary
  to disambiguate 'this'; the class-name.this designation allows you to specify
  which 'this' reference is intended itself : For reference fields only; the
  object to which the field refers. field-name : The lock object is referenced
  by the (instance or static) field specified by field-name.
  class-name.field-name : The lock object is reference by the static field
  specified by class-name.field-name. method-name() : The lock object is
  returned by calling the named nil-ary method. class-name.class : The Class
  object for the specified class should be used as the lock object.
 */
@protocol JavaxAnnotationConcurrentGuardedBy < JavaLangAnnotationAnnotation >

@property (readonly) NSString *value;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationConcurrentGuardedBy : NSObject < JavaxAnnotationConcurrentGuardedBy > {
 @public
  NSString *value_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationConcurrentGuardedBy)

FOUNDATION_EXPORT id<JavaxAnnotationConcurrentGuardedBy> create_JavaxAnnotationConcurrentGuardedBy(NSString *value);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationConcurrentGuardedBy)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationConcurrentGuardedBy")
