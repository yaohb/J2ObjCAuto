//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/org/codehaus/mojo/animal_sniffer/IgnoreJRERequirement.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgCodehausMojoAnimal_snifferIgnoreJRERequirement")
#ifdef RESTRICT_OrgCodehausMojoAnimal_snifferIgnoreJRERequirement
#define INCLUDE_ALL_OrgCodehausMojoAnimal_snifferIgnoreJRERequirement 0
#else
#define INCLUDE_ALL_OrgCodehausMojoAnimal_snifferIgnoreJRERequirement 1
#endif
#undef RESTRICT_OrgCodehausMojoAnimal_snifferIgnoreJRERequirement

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgCodehausMojoAnimal_snifferIgnoreJRERequirement_) && (INCLUDE_ALL_OrgCodehausMojoAnimal_snifferIgnoreJRERequirement || defined(INCLUDE_OrgCodehausMojoAnimal_snifferIgnoreJRERequirement))
#define OrgCodehausMojoAnimal_snifferIgnoreJRERequirement_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @author Kohsuke Kawaguchi
 */
@protocol OrgCodehausMojoAnimal_snifferIgnoreJRERequirement < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface OrgCodehausMojoAnimal_snifferIgnoreJRERequirement : NSObject < OrgCodehausMojoAnimal_snifferIgnoreJRERequirement >

@end

J2OBJC_EMPTY_STATIC_INIT(OrgCodehausMojoAnimal_snifferIgnoreJRERequirement)

FOUNDATION_EXPORT id<OrgCodehausMojoAnimal_snifferIgnoreJRERequirement> create_OrgCodehausMojoAnimal_snifferIgnoreJRERequirement(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgCodehausMojoAnimal_snifferIgnoreJRERequirement)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgCodehausMojoAnimal_snifferIgnoreJRERequirement")
