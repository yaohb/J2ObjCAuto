//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/internal/configuration/GlobalConfiguration.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationGlobalConfiguration")
#ifdef RESTRICT_OrgMockitoInternalConfigurationGlobalConfiguration
#define INCLUDE_ALL_OrgMockitoInternalConfigurationGlobalConfiguration 0
#else
#define INCLUDE_ALL_OrgMockitoInternalConfigurationGlobalConfiguration 1
#endif
#undef RESTRICT_OrgMockitoInternalConfigurationGlobalConfiguration

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalConfigurationGlobalConfiguration_) && (INCLUDE_ALL_OrgMockitoInternalConfigurationGlobalConfiguration || defined(INCLUDE_OrgMockitoInternalConfigurationGlobalConfiguration))
#define OrgMockitoInternalConfigurationGlobalConfiguration_

#define RESTRICT_OrgMockitoConfigurationIMockitoConfiguration 1
#define INCLUDE_OrgMockitoConfigurationIMockitoConfiguration 1
#include "org/mockito/configuration/IMockitoConfiguration.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@protocol OrgMockitoConfigurationAnnotationEngine;
@protocol OrgMockitoReturnValues;
@protocol OrgMockitoStubbingAnswer;

/*!
 @brief Thread-safe wrapper on user-defined org.mockito.configuration.MockitoConfiguration implementation
 */
@interface OrgMockitoInternalConfigurationGlobalConfiguration : NSObject < OrgMockitoConfigurationIMockitoConfiguration, JavaIoSerializable >

#pragma mark Public

- (instancetype __nonnull)init;

- (jboolean)cleansStackTrace;

- (jboolean)enableClassCache;

- (id<OrgMockitoConfigurationAnnotationEngine>)getAnnotationEngine;

- (id<OrgMockitoStubbingAnswer>)getDefaultAnswer;

- (id<OrgMockitoReturnValues>)getReturnValues;

+ (void)validate;

#pragma mark Package-Private

- (id<OrgMockitoConfigurationIMockitoConfiguration>)getIt;

@end

J2OBJC_STATIC_INIT(OrgMockitoInternalConfigurationGlobalConfiguration)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationGlobalConfiguration_init(OrgMockitoInternalConfigurationGlobalConfiguration *self);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationGlobalConfiguration *new_OrgMockitoInternalConfigurationGlobalConfiguration_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalConfigurationGlobalConfiguration *create_OrgMockitoInternalConfigurationGlobalConfiguration_init(void);

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationGlobalConfiguration_validate(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationGlobalConfiguration)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationGlobalConfiguration")
