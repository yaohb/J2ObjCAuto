//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/javax/annotation/PostConstruct.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationPostConstruct")
#ifdef RESTRICT_JavaxAnnotationPostConstruct
#define INCLUDE_ALL_JavaxAnnotationPostConstruct 0
#else
#define INCLUDE_ALL_JavaxAnnotationPostConstruct 1
#endif
#undef RESTRICT_JavaxAnnotationPostConstruct

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxAnnotationPostConstruct_) && (INCLUDE_ALL_JavaxAnnotationPostConstruct || defined(INCLUDE_JavaxAnnotationPostConstruct))
#define JavaxAnnotationPostConstruct_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief javax.annotation.PostConstruct annotation.No code was referenced,
  created using just its public API.
 */
@protocol JavaxAnnotationPostConstruct < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationPostConstruct : NSObject < JavaxAnnotationPostConstruct >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationPostConstruct)

FOUNDATION_EXPORT id<JavaxAnnotationPostConstruct> create_JavaxAnnotationPostConstruct(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationPostConstruct)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationPostConstruct")
