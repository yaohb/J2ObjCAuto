//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/junit/build_result/java/org/junit/experimental/categories/Categories.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitExperimentalCategoriesCategories")
#ifdef RESTRICT_OrgJunitExperimentalCategoriesCategories
#define INCLUDE_ALL_OrgJunitExperimentalCategoriesCategories 0
#else
#define INCLUDE_ALL_OrgJunitExperimentalCategoriesCategories 1
#endif
#undef RESTRICT_OrgJunitExperimentalCategoriesCategories

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitExperimentalCategoriesCategories_) && (INCLUDE_ALL_OrgJunitExperimentalCategoriesCategories || defined(INCLUDE_OrgJunitExperimentalCategoriesCategories))
#define OrgJunitExperimentalCategoriesCategories_

#define RESTRICT_OrgJunitRunnersSuite 1
#define INCLUDE_OrgJunitRunnersSuite 1
#include "org/junit/runners/Suite.h"

@class IOSClass;
@class IOSObjectArray;
@class OrgJunitRunnersModelRunnerBuilder;
@protocol JavaUtilList;

/*!
 @brief From a given set of test classes, runs only the classes and methods that are
  annotated with either the category given with the @@IncludeCategory
  annotation, or a subtype of that category.
 Note that, for now, annotating suites with <code>@@Category</code> has no effect.
  Categories must be annotated on the direct method or class.
  Example: 
 @code

  public interface FastTests {
  }
  public interface SlowTests {
  }
  public static class A {
    &#064;Test
   public void a() {
       fail();
      }  
  &#064;Category(SlowTests.class)
    &#064;Test
   public void b() {
      }    }    
  &#064;Category( { SlowTests.class, FastTests.class })
  public static class B {
    &#064;Test
   public void c() {
      }    }    
  &#064;RunWith(Categories.class)
   &#064;IncludeCategory(SlowTests.class)
   &#064;SuiteClasses( { A.class, B.class })
  // Note that Categories is a kind of Suite
  public static class SlowTestSuite {
  } 
  
@endcode
 */
@interface OrgJunitExperimentalCategoriesCategories : OrgJunitRunnersSuite

#pragma mark Public

- (instancetype __nonnull)initWithIOSClass:(IOSClass *)klass
     withOrgJunitRunnersModelRunnerBuilder:(OrgJunitRunnersModelRunnerBuilder *)builder;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithIOSClass:(IOSClass *)arg0
                         withIOSClassArray:(IOSObjectArray *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithIOSClass:(IOSClass *)arg0
                          withJavaUtilList:(id<JavaUtilList>)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithOrgJunitRunnersModelRunnerBuilder:(OrgJunitRunnersModelRunnerBuilder *)arg0
                                                       withIOSClass:(IOSClass *)arg1
                                                  withIOSClassArray:(IOSObjectArray *)arg2 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithOrgJunitRunnersModelRunnerBuilder:(OrgJunitRunnersModelRunnerBuilder *)arg0
                                                  withIOSClassArray:(IOSObjectArray *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalCategoriesCategories)

FOUNDATION_EXPORT void OrgJunitExperimentalCategoriesCategories_initWithIOSClass_withOrgJunitRunnersModelRunnerBuilder_(OrgJunitExperimentalCategoriesCategories *self, IOSClass *klass, OrgJunitRunnersModelRunnerBuilder *builder);

FOUNDATION_EXPORT OrgJunitExperimentalCategoriesCategories *new_OrgJunitExperimentalCategoriesCategories_initWithIOSClass_withOrgJunitRunnersModelRunnerBuilder_(IOSClass *klass, OrgJunitRunnersModelRunnerBuilder *builder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitExperimentalCategoriesCategories *create_OrgJunitExperimentalCategoriesCategories_initWithIOSClass_withOrgJunitRunnersModelRunnerBuilder_(IOSClass *klass, OrgJunitRunnersModelRunnerBuilder *builder);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalCategoriesCategories)

#endif

#if !defined (OrgJunitExperimentalCategoriesCategories_IncludeCategory_) && (INCLUDE_ALL_OrgJunitExperimentalCategoriesCategories || defined(INCLUDE_OrgJunitExperimentalCategoriesCategories_IncludeCategory))
#define OrgJunitExperimentalCategoriesCategories_IncludeCategory_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol OrgJunitExperimentalCategoriesCategories_IncludeCategory < JavaLangAnnotationAnnotation >

@property (readonly) IOSClass *value;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface OrgJunitExperimentalCategoriesCategories_IncludeCategory : NSObject < OrgJunitExperimentalCategoriesCategories_IncludeCategory > {
 @public
  IOSClass *value_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalCategoriesCategories_IncludeCategory)

FOUNDATION_EXPORT id<OrgJunitExperimentalCategoriesCategories_IncludeCategory> create_OrgJunitExperimentalCategoriesCategories_IncludeCategory(IOSClass *value);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalCategoriesCategories_IncludeCategory)

#endif

#if !defined (OrgJunitExperimentalCategoriesCategories_ExcludeCategory_) && (INCLUDE_ALL_OrgJunitExperimentalCategoriesCategories || defined(INCLUDE_OrgJunitExperimentalCategoriesCategories_ExcludeCategory))
#define OrgJunitExperimentalCategoriesCategories_ExcludeCategory_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol OrgJunitExperimentalCategoriesCategories_ExcludeCategory < JavaLangAnnotationAnnotation >

@property (readonly) IOSClass *value;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface OrgJunitExperimentalCategoriesCategories_ExcludeCategory : NSObject < OrgJunitExperimentalCategoriesCategories_ExcludeCategory > {
 @public
  IOSClass *value_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalCategoriesCategories_ExcludeCategory)

FOUNDATION_EXPORT id<OrgJunitExperimentalCategoriesCategories_ExcludeCategory> create_OrgJunitExperimentalCategoriesCategories_ExcludeCategory(IOSClass *value);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalCategoriesCategories_ExcludeCategory)

#endif

#if !defined (OrgJunitExperimentalCategoriesCategories_CategoryFilter_) && (INCLUDE_ALL_OrgJunitExperimentalCategoriesCategories || defined(INCLUDE_OrgJunitExperimentalCategoriesCategories_CategoryFilter))
#define OrgJunitExperimentalCategoriesCategories_CategoryFilter_

#define RESTRICT_OrgJunitRunnerManipulationFilter 1
#define INCLUDE_OrgJunitRunnerManipulationFilter 1
#include "org/junit/runner/manipulation/Filter.h"

@class IOSClass;
@class OrgJunitRunnerDescription;

@interface OrgJunitExperimentalCategoriesCategories_CategoryFilter : OrgJunitRunnerManipulationFilter

#pragma mark Public

- (instancetype __nonnull)initWithIOSClass:(IOSClass *)includedCategory
                              withIOSClass:(IOSClass *)excludedCategory;

- (NSString *)describe;

+ (OrgJunitExperimentalCategoriesCategories_CategoryFilter *)includeWithIOSClass:(IOSClass *)categoryType;

- (jboolean)shouldRunWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalCategoriesCategories_CategoryFilter)

FOUNDATION_EXPORT OrgJunitExperimentalCategoriesCategories_CategoryFilter *OrgJunitExperimentalCategoriesCategories_CategoryFilter_includeWithIOSClass_(IOSClass *categoryType);

FOUNDATION_EXPORT void OrgJunitExperimentalCategoriesCategories_CategoryFilter_initWithIOSClass_withIOSClass_(OrgJunitExperimentalCategoriesCategories_CategoryFilter *self, IOSClass *includedCategory, IOSClass *excludedCategory);

FOUNDATION_EXPORT OrgJunitExperimentalCategoriesCategories_CategoryFilter *new_OrgJunitExperimentalCategoriesCategories_CategoryFilter_initWithIOSClass_withIOSClass_(IOSClass *includedCategory, IOSClass *excludedCategory) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitExperimentalCategoriesCategories_CategoryFilter *create_OrgJunitExperimentalCategoriesCategories_CategoryFilter_initWithIOSClass_withIOSClass_(IOSClass *includedCategory, IOSClass *excludedCategory);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalCategoriesCategories_CategoryFilter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitExperimentalCategoriesCategories")
