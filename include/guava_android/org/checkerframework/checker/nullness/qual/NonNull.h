//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/org/checkerframework/checker/nullness/qual/NonNull.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgCheckerframeworkCheckerNullnessQualNonNull")
#ifdef RESTRICT_OrgCheckerframeworkCheckerNullnessQualNonNull
#define INCLUDE_ALL_OrgCheckerframeworkCheckerNullnessQualNonNull 0
#else
#define INCLUDE_ALL_OrgCheckerframeworkCheckerNullnessQualNonNull 1
#endif
#undef RESTRICT_OrgCheckerframeworkCheckerNullnessQualNonNull

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgCheckerframeworkCheckerNullnessQualNonNull_) && (INCLUDE_ALL_OrgCheckerframeworkCheckerNullnessQualNonNull || defined(INCLUDE_OrgCheckerframeworkCheckerNullnessQualNonNull))
#define OrgCheckerframeworkCheckerNullnessQualNonNull_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief <code>NonNull</code> is a type annotation that indicates that an expression is
  never <code>null</code>.
 <p>
  For fields of a class, the <code>NonNull</code> annotation indicates that this
  field is never <code>null</code>
  <em>after the class has been fully initialized</em>. Class initialization is
  controlled by the Freedom Before Commitment type system, see 
 <code>InitializationChecker</code> for more details. 
 <p>
  For static fields, the <code>NonNull</code> annotation indicates that this field
  is never <code>null</code> <em>after the containing class is initialized</em>.
  
 <p>
  This annotation is rarely written in source code, because it is the default. 
 <p>
  This annotation is associated with the <code>AbstractNullnessChecker</code>.
 - seealso: Nullable
 - seealso: MonotonicNonNull
 - seealso: AbstractNullnessChecker
 */
@protocol OrgCheckerframeworkCheckerNullnessQualNonNull < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface OrgCheckerframeworkCheckerNullnessQualNonNull : NSObject < OrgCheckerframeworkCheckerNullnessQualNonNull >

@end

J2OBJC_EMPTY_STATIC_INIT(OrgCheckerframeworkCheckerNullnessQualNonNull)

FOUNDATION_EXPORT id<OrgCheckerframeworkCheckerNullnessQualNonNull> create_OrgCheckerframeworkCheckerNullnessQualNonNull(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgCheckerframeworkCheckerNullnessQualNonNull)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgCheckerframeworkCheckerNullnessQualNonNull")
