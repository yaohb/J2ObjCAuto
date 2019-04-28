//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/annotations/GwtCompatible.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonAnnotationsGwtCompatible")
#ifdef RESTRICT_ComGoogleCommonAnnotationsGwtCompatible
#define INCLUDE_ALL_ComGoogleCommonAnnotationsGwtCompatible 0
#else
#define INCLUDE_ALL_ComGoogleCommonAnnotationsGwtCompatible 1
#endif
#undef RESTRICT_ComGoogleCommonAnnotationsGwtCompatible

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonAnnotationsGwtCompatible_) && (INCLUDE_ALL_ComGoogleCommonAnnotationsGwtCompatible || defined(INCLUDE_ComGoogleCommonAnnotationsGwtCompatible))
#define ComGoogleCommonAnnotationsGwtCompatible_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief The presence of this annotation on a type indicates that the type may be used with the <a href="http://code.google.com/webtoolkit/">
 Google Web Toolkit</a> (GWT).When applied to a method,
  the return type of the method is GWT compatible.
 It's useful to indicate that an instance created
  by factory methods has a GWT serializable type. In the following example, 
 @code

  @@GwtCompatible
  class Lists {
    ...   
 @@GwtCompatible(serializable = true)
    static <E> List<E> newArrayList(E... elements) {
      ...
    }  }  
  
@endcode
  
 <p>The return value of <code>Lists.newArrayList(E[])</code> has GWT serializable type. It is also
  useful in specifying contracts of interface methods. In the following example, 
 @code

  @@GwtCompatible
  interface ListFactory {
    ...   
 @@GwtCompatible(serializable = true)
    <E> List<E> newArrayList(E... elements);
  } 
  
@endcode
  
 <p>The <code>newArrayList(E[])</code> method of all implementations of <code>ListFactory</code> is expected
  to return a value with a GWT serializable type. 
 <p>Note that a <code>GwtCompatible</code> type may have some <code>GwtIncompatible</code> methods.
 @author Charles Fry
 @author Hayward Chan
 */
@protocol ComGoogleCommonAnnotationsGwtCompatible < JavaLangAnnotationAnnotation >

@property (readonly) jboolean serializable;
@property (readonly) jboolean emulated;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface ComGoogleCommonAnnotationsGwtCompatible : NSObject < ComGoogleCommonAnnotationsGwtCompatible > {
 @public
  jboolean serializable_;
  jboolean emulated_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonAnnotationsGwtCompatible)

FOUNDATION_EXPORT id<ComGoogleCommonAnnotationsGwtCompatible> create_ComGoogleCommonAnnotationsGwtCompatible(jboolean emulated, jboolean serializable);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonAnnotationsGwtCompatible)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonAnnotationsGwtCompatible")
