//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/function/ToLongBiFunction.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFunctionToLongBiFunction")
#ifdef RESTRICT_JavaUtilFunctionToLongBiFunction
#define INCLUDE_ALL_JavaUtilFunctionToLongBiFunction 0
#else
#define INCLUDE_ALL_JavaUtilFunctionToLongBiFunction 1
#endif
#undef RESTRICT_JavaUtilFunctionToLongBiFunction

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilFunctionToLongBiFunction_) && (INCLUDE_ALL_JavaUtilFunctionToLongBiFunction || defined(INCLUDE_JavaUtilFunctionToLongBiFunction))
#define JavaUtilFunctionToLongBiFunction_

/*!
 @brief Represents a function that accepts two arguments and produces a long-valued
  result.This is the <code>long</code>-producing primitive specialization for 
 <code>BiFunction</code>.
 <p>This is a <a href="package-summary.html">functional interface</a>
  whose functional method is <code>applyAsLong(Object, Object)</code>.
 - seealso: BiFunction
 @since 1.8
 */
@protocol JavaUtilFunctionToLongBiFunction < JavaObject >

/*!
 @brief Applies this function to the given arguments.
 @param t the first function argument
 @param u the second function argument
 @return the function result
 */
- (jlong)applyAsLongWithId:(id)t
                    withId:(id)u;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFunctionToLongBiFunction)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFunctionToLongBiFunction)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilFunctionToLongBiFunction")
