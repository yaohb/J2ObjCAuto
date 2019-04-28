//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/errorprone/annotations/RestrictedApi.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleErrorproneAnnotationsRestrictedApi")
#ifdef RESTRICT_ComGoogleErrorproneAnnotationsRestrictedApi
#define INCLUDE_ALL_ComGoogleErrorproneAnnotationsRestrictedApi 0
#else
#define INCLUDE_ALL_ComGoogleErrorproneAnnotationsRestrictedApi 1
#endif
#undef RESTRICT_ComGoogleErrorproneAnnotationsRestrictedApi

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleErrorproneAnnotationsRestrictedApi_) && (INCLUDE_ALL_ComGoogleErrorproneAnnotationsRestrictedApi || defined(INCLUDE_ComGoogleErrorproneAnnotationsRestrictedApi))
#define ComGoogleErrorproneAnnotationsRestrictedApi_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class IOSObjectArray;

/*!
 @brief Restrict this method to callsites with a whitelist annotation.
 <p>Callers that are not whitelisted will cause a configurable compiler diagnostic. Whitelisting
  can either allow the call outright, or make the compiler emit a warning when the API is called.
  Paths matching a regular expression, e.g. unit tests, can also be excluded. 
 <p>The following example shows a hypothetical, potentially unsafe <code>Foo.bar</code> method. It is
  marked with the <code>@@RestrictedApi</code> annotations such that callers annotated with 
 <code>@@LegacyUnsafeFooBar</code> raise a warning, whereas the <code>@@ReviewedFooBar</code> annotation
  silently allows the call. 
 <p>The <code>@@LegacyUnsafeFooBar</code> annotation can be used to allow existing call sites until they
  are refactored, while prohibiting new call-sites. Call-sites determined to be acceptable, for
  example through code review, could be marked <code>@@ReviewedFooBar</code>.
  
 @code
 public {@@literal @@}interface LegacyUnsafeFooBar{}
  public {@@literal @@}interface ReviewedFooBar{
   public string reviewer();
   public string comments();
  }
  public class Foo {
    {@@literal @@}RestrictedApi(
       explanation="You could shoot yourself in the foot with Foo.bar if you aren't careful",
       link="http://edsger.dijkstra/foo_bar_consider_harmful.html",
       allowedOnPath="testsuite/.*", // Unsafe behavior in tests is ok.
       whitelistAnnotations = {ReviewedFooBar.class},
       whitelistWithWarningAnnotations = {LegacyUnsafeFooBar.class})
    public void bar() {
       if (complicatedCondition) {
           shoot_your_foot();
       } else {
           solve_your_problem();
       }     }
    boolean complicatedCondition = true;
    {@@literal @@}ReviewedFooBar(
       reviewer="bangert",
       comments="Makes sure complicatedCondition isn't true, so bar is safe!"
    )
    public void safeBar() {
       if (!complicatedCondition) {
           bar();
       }     }
    {@@literal @@}LegacyUnsafeFooBar
    public void someOldCode() {
       // ...
       bar()
       // ...
    }  }  
 
@endcode
 */
@protocol ComGoogleErrorproneAnnotationsRestrictedApi < JavaLangAnnotationAnnotation >

@property (readonly) NSString *checkerName;
@property (readonly) NSString *explanation;
@property (readonly) NSString *link;
@property (readonly) NSString *allowedOnPath;
@property (readonly) IOSObjectArray *whitelistAnnotations;
@property (readonly) IOSObjectArray *whitelistWithWarningAnnotations;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface ComGoogleErrorproneAnnotationsRestrictedApi : NSObject < ComGoogleErrorproneAnnotationsRestrictedApi > {
 @public
  NSString *checkerName_;
  NSString *explanation_;
  NSString *link_;
  NSString *allowedOnPath_;
  IOSObjectArray *whitelistAnnotations_;
  IOSObjectArray *whitelistWithWarningAnnotations_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleErrorproneAnnotationsRestrictedApi)

FOUNDATION_EXPORT id<ComGoogleErrorproneAnnotationsRestrictedApi> create_ComGoogleErrorproneAnnotationsRestrictedApi(NSString *allowedOnPath, NSString *checkerName, NSString *explanation, NSString *link, IOSObjectArray *whitelistAnnotations, IOSObjectArray *whitelistWithWarningAnnotations);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleErrorproneAnnotationsRestrictedApi)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleErrorproneAnnotationsRestrictedApi")
