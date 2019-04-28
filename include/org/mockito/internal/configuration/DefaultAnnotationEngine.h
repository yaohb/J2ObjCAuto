//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/internal/configuration/DefaultAnnotationEngine.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationDefaultAnnotationEngine")
#ifdef RESTRICT_OrgMockitoInternalConfigurationDefaultAnnotationEngine
#define INCLUDE_ALL_OrgMockitoInternalConfigurationDefaultAnnotationEngine 0
#else
#define INCLUDE_ALL_OrgMockitoInternalConfigurationDefaultAnnotationEngine 1
#endif
#undef RESTRICT_OrgMockitoInternalConfigurationDefaultAnnotationEngine

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalConfigurationDefaultAnnotationEngine_) && (INCLUDE_ALL_OrgMockitoInternalConfigurationDefaultAnnotationEngine || defined(INCLUDE_OrgMockitoInternalConfigurationDefaultAnnotationEngine))
#define OrgMockitoInternalConfigurationDefaultAnnotationEngine_

#define RESTRICT_OrgMockitoConfigurationAnnotationEngine 1
#define INCLUDE_OrgMockitoConfigurationAnnotationEngine 1
#include "org/mockito/configuration/AnnotationEngine.h"

@class IOSClass;
@class JavaLangReflectField;
@protocol JavaLangAnnotationAnnotation;

/*!
 @brief Initializes fields annotated with &#64;<code>org.mockito.Mock</code> or &#64;<code>org.mockito.Captor</code>.
 <p>
  The <code>process(Class, Object)</code> method implementation <strong>does not</strong> process super classes!
 - seealso: MockitoAnnotations
 */
@interface OrgMockitoInternalConfigurationDefaultAnnotationEngine : NSObject < OrgMockitoConfigurationAnnotationEngine >

#pragma mark Public

- (instancetype __nonnull)init;

- (id)createMockForWithJavaLangAnnotationAnnotation:(id<JavaLangAnnotationAnnotation>)annotation
                           withJavaLangReflectField:(JavaLangReflectField *)field;

- (void)processWithIOSClass:(IOSClass *)clazz
                     withId:(id)testInstance;

#pragma mark Package-Private

- (void)throwIfAlreadyAssignedWithJavaLangReflectField:(JavaLangReflectField *)field
                                           withBoolean:(jboolean)alreadyAssigned;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationDefaultAnnotationEngine)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationDefaultAnnotationEngine_init(OrgMockitoInternalConfigurationDefaultAnnotationEngine *self);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationDefaultAnnotationEngine *new_OrgMockitoInternalConfigurationDefaultAnnotationEngine_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalConfigurationDefaultAnnotationEngine *create_OrgMockitoInternalConfigurationDefaultAnnotationEngine_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationDefaultAnnotationEngine)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationDefaultAnnotationEngine")
