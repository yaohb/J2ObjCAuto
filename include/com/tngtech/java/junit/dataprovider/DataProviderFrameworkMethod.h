//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/junit/build_result/java/com/tngtech/java/junit/dataprovider/DataProviderFrameworkMethod.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod")
#ifdef RESTRICT_ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod
#define INCLUDE_ALL_ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod 0
#else
#define INCLUDE_ALL_ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod 1
#endif
#undef RESTRICT_ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod_) && (INCLUDE_ALL_ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod || defined(INCLUDE_ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod))
#define ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod_

#define RESTRICT_OrgJunitRunnersModelFrameworkMethod 1
#define INCLUDE_OrgJunitRunnersModelFrameworkMethod 1
#include "org/junit/runners/model/FrameworkMethod.h"

@class IOSObjectArray;
@class JavaLangReflectMethod;

/*!
 @brief A special framework method that allows the usage of parameters for the test method.
 */
@interface ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod : OrgJunitRunnersModelFrameworkMethod {
 @public
  /*!
   @brief Index of exploded test method such that each get a unique name.
   <p>
  This field is package private (= visible) for testing. 
 </p>
   */
  jint idx_;
  /*!
   @brief Parameters to invoke the test method.
   <p>
  This field is package private (= visible) for testing. 
 </p>
   */
  IOSObjectArray *parameters_;
  /*!
   @brief Format of test method name.
   <p>
  This field is package private (= visible) for testing. 
 </p>
   */
  NSString *nameFormat_;
}

#pragma mark Public

/*!
 @brief Create a <code>FrameworkMethod</code> extended with special attributes for using this test with a dataprovider.
 @param method test method for which the <code>FrameworkMethod</code>  is created
 @param idx the index (row) of the used dataprovider
 @param parameters used for invoking this test method
 @param nameFormat defines the format of the test method name according to <code>@@</code><code>DataProvider.format()</code>
 */
- (instancetype __nonnull)initWithJavaLangReflectMethod:(JavaLangReflectMethod *)method
                                                withInt:(jint)idx
                                      withNSObjectArray:(IOSObjectArray *)parameters
                                           withNSString:(NSString *)nameFormat;

- (jboolean)isEqual:(id)obj;

- (NSString *)getName;

- (NSUInteger)hash;

- (id)invokeExplosivelyWithId:(id)target
            withNSObjectArray:(IOSObjectArray *)params;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangReflectMethod:(JavaLangReflectMethod *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod)

J2OBJC_FIELD_SETTER(ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod, parameters_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod, nameFormat_, NSString *)

FOUNDATION_EXPORT void ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod_initWithJavaLangReflectMethod_withInt_withNSObjectArray_withNSString_(ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod *self, JavaLangReflectMethod *method, jint idx, IOSObjectArray *parameters, NSString *nameFormat);

FOUNDATION_EXPORT ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod *new_ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod_initWithJavaLangReflectMethod_withInt_withNSObjectArray_withNSString_(JavaLangReflectMethod *method, jint idx, IOSObjectArray *parameters, NSString *nameFormat) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod *create_ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod_initWithJavaLangReflectMethod_withInt_withNSObjectArray_withNSString_(JavaLangReflectMethod *method, jint idx, IOSObjectArray *parameters, NSString *nameFormat);

J2OBJC_TYPE_LITERAL_HEADER(ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod")
