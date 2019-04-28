//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/org/checkerframework/framework/qual/PostconditionAnnotation.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgCheckerframeworkFrameworkQualPostconditionAnnotation")
#ifdef RESTRICT_OrgCheckerframeworkFrameworkQualPostconditionAnnotation
#define INCLUDE_ALL_OrgCheckerframeworkFrameworkQualPostconditionAnnotation 0
#else
#define INCLUDE_ALL_OrgCheckerframeworkFrameworkQualPostconditionAnnotation 1
#endif
#undef RESTRICT_OrgCheckerframeworkFrameworkQualPostconditionAnnotation

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgCheckerframeworkFrameworkQualPostconditionAnnotation_) && (INCLUDE_ALL_OrgCheckerframeworkFrameworkQualPostconditionAnnotation || defined(INCLUDE_OrgCheckerframeworkFrameworkQualPostconditionAnnotation))
#define OrgCheckerframeworkFrameworkQualPostconditionAnnotation_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief A meta-annotation that indicates that an annotation is a postcondition
  annotation, i.e., a type-specialized version of <code>EnsuresQualifier</code>.
 The annotation that is annotated as <code>PostconditionAnnotation</code> must have
  a value called <code>value</code> that is an array of <code>String</code>s of the same
  format and with the same meaning as the value <code>expression</code> in 
 <code>EnsuresQualifier</code>.
  
 <p>
  The value <code>qualifier</code> that is necessary for a postcondition specified
  with <code>EnsuresQualifier</code> is hard-coded here with the value 
 <code>qualifier</code>.
 @author Stefan Heule
 - seealso: EnsuresQualifier
 */
@protocol OrgCheckerframeworkFrameworkQualPostconditionAnnotation < JavaLangAnnotationAnnotation >

@property (readonly) IOSClass *qualifier;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface OrgCheckerframeworkFrameworkQualPostconditionAnnotation : NSObject < OrgCheckerframeworkFrameworkQualPostconditionAnnotation > {
 @public
  IOSClass *qualifier_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(OrgCheckerframeworkFrameworkQualPostconditionAnnotation)

FOUNDATION_EXPORT id<OrgCheckerframeworkFrameworkQualPostconditionAnnotation> create_OrgCheckerframeworkFrameworkQualPostconditionAnnotation(IOSClass *qualifier);

J2OBJC_TYPE_LITERAL_HEADER(OrgCheckerframeworkFrameworkQualPostconditionAnnotation)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgCheckerframeworkFrameworkQualPostconditionAnnotation")
