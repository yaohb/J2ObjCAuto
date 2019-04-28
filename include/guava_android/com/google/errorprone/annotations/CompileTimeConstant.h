//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/com/google/errorprone/annotations/CompileTimeConstant.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleErrorproneAnnotationsCompileTimeConstant")
#ifdef RESTRICT_ComGoogleErrorproneAnnotationsCompileTimeConstant
#define INCLUDE_ALL_ComGoogleErrorproneAnnotationsCompileTimeConstant 0
#else
#define INCLUDE_ALL_ComGoogleErrorproneAnnotationsCompileTimeConstant 1
#endif
#undef RESTRICT_ComGoogleErrorproneAnnotationsCompileTimeConstant

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleErrorproneAnnotationsCompileTimeConstant_) && (INCLUDE_ALL_ComGoogleErrorproneAnnotationsCompileTimeConstant || defined(INCLUDE_ComGoogleErrorproneAnnotationsCompileTimeConstant))
#define ComGoogleErrorproneAnnotationsCompileTimeConstant_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief Annotation for method parameter declarations, which denotes that corresponding actual parameters
  must be compile-time constant expressions.
 <p>When the formal parameter of a method or constructor is annotated with the <code>CompileTimeConstant</code>
  type annotation, the corresponding actual parameter must be an expression
  that satisfies one of the following conditions: 
 <ol>
    <li>The expression is one for which the Java compiler can determine a constant value at compile
        time, or   
 <li>the expression consists of the literal <code>null</code>, or
    <li>the expression consists of a single identifier, where the identifier is a formal method
        parameter that is declared <code>final</code> and has the <code>CompileTimeConstant</code>
        annotation. 
 </ol>
  
 <p>This constraint on call sites of methods or constructors that have one or more formal
  parameters with this annotation is enforced by <a href="http://errorprone.info">error-prone</a>.
  
 <p>For example, the following code snippet is legal: 
 @code
 public class C {
    private static final S = "Hello";
    void m(@@CompileTimeConstant final String s) { }
    void n(@@CompileTimeConstant final String t) {
      m(S + " World!");
      m(null);
      m(t);
    }  }  
 
@endcode
  
 <p>In contrast, the following is illegal: 
 @code
 public class C {
    void m(@@CompileTimeConstant final String s) { }
    void n(String t) {
      m(t);
    }  }  
 
@endcode
  
 <p>Compile-time constant values are implicitly under the control of the trust domain of the
  application whose source code they are part of. Hence, this annotation is useful to constrain the
  use of APIs that may only be safely called with values that are under application control. 
 <p>The current implementation of the @@CompileTimeConstant checker cannot reason about more
  complex scenarios, for example, returning compile-time-constant values from a method, or storing
  compile-time-constant values in a collection. APIs will typically accommodate such use cases via
  domain-specific types that capture domain-specific aspects of trustworthiness that arise from
  values being under application control.
 */
@protocol ComGoogleErrorproneAnnotationsCompileTimeConstant < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface ComGoogleErrorproneAnnotationsCompileTimeConstant : NSObject < ComGoogleErrorproneAnnotationsCompileTimeConstant >

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleErrorproneAnnotationsCompileTimeConstant)

FOUNDATION_EXPORT id<ComGoogleErrorproneAnnotationsCompileTimeConstant> create_ComGoogleErrorproneAnnotationsCompileTimeConstant(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleErrorproneAnnotationsCompileTimeConstant)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleErrorproneAnnotationsCompileTimeConstant")
