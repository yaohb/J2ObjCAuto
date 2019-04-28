//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/reflect/TypeResolver.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonReflectTypeResolver")
#ifdef RESTRICT_ComGoogleCommonReflectTypeResolver
#define INCLUDE_ALL_ComGoogleCommonReflectTypeResolver 0
#else
#define INCLUDE_ALL_ComGoogleCommonReflectTypeResolver 1
#endif
#undef RESTRICT_ComGoogleCommonReflectTypeResolver

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonReflectTypeResolver_) && (INCLUDE_ALL_ComGoogleCommonReflectTypeResolver || defined(INCLUDE_ComGoogleCommonReflectTypeResolver))
#define ComGoogleCommonReflectTypeResolver_

@class IOSObjectArray;
@protocol JavaLangReflectType;
@protocol JavaUtilMap;

/*!
 @brief An object of this class encapsulates type mappings from type variables.Mappings are established
  with <code>where</code> and types are resolved using <code>resolveType</code>.
 <p>Note that usually type mappings are already implied by the static type hierarchy (for example, the 
 <code>E</code> type variable declared by class <code>List</code> naturally maps to <code>String</code> in
  the context of <code>class MyStringList implements List<String></code>. In such case, prefer to use 
 <code>TypeToken.resolveType</code> since it's simpler and more type safe. This class should only be
  used when the type mapping isn't implied by the static type hierarchy, but provided through other
  means such as an annotation or external configuration file.
 @author Ben Yu
 @since 15.0
 */
@interface ComGoogleCommonReflectTypeResolver : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Resolves all type variables in <code>type</code> and all downstream types and returns a
  corresponding type with type variables resolved.
 */
- (id<JavaLangReflectType>)resolveTypeWithJavaLangReflectType:(id<JavaLangReflectType>)type;

/*!
 @brief Returns a new <code>TypeResolver</code> with type variables in <code>formal</code> mapping to types in 
 <code>actual</code>.
 <p>For example, if <code>formal</code> is a <code>TypeVariable T</code>, and <code>actual</code> is <code>String.class</code>
 , then <code>new TypeResolver().where(formal, actual)</code> will resolve
  <code>ParameterizedType List<T></code> to <code>List<String></code>, and resolve 
 <code>Map<T, Something></code> to <code>Map<String, Something></code> etc. Similarly, <code>formal</code> and 
 <code>actual</code> can be <code>Map<K, V></code> and <code>Map<String, Integer></code> respectively, or they
  can be <code>E[]</code> and <code>String[]</code> respectively, or even any arbitrary combination
  thereof.
 @param formal The type whose type variables or itself is mapped to other type(s). It's almost      always a bug if 
 <code>formal</code>  isn't a type variable and contains no type variable. Make      sure you are passing the two parameters in the right order.
 @param actual The type that the formal type variable(s) are mapped to. It can be or contain yet      other type variables, in which case these type variables will be further resolved if
       corresponding mappings exist in the current 
 <code>TypeResolver</code>  instance.
 */
- (ComGoogleCommonReflectTypeResolver *)whereWithJavaLangReflectType:(id<JavaLangReflectType>)formal
                                             withJavaLangReflectType:(id<JavaLangReflectType>)actual;

#pragma mark Package-Private

/*!
 @brief Returns a resolver that resolves types "covariantly".
 <p>For example, when resolving <code>List<T></code> in the context of <code>ArrayList<?></code>,
  <code><T></code> is covariantly resolved to <code><?></code> such that return type of <code>List::get</code>
  is <code><?></code>.
 */
+ (ComGoogleCommonReflectTypeResolver *)covariantlyWithJavaLangReflectType:(id<JavaLangReflectType>)contextType;

/*!
 @brief Returns a resolver that resolves types "invariantly".
 <p>For example, when resolving <code>List<T></code> in the context of <code>ArrayList<?></code>,
  <code><T></code> cannot be invariantly resolved to <code><?></code> because otherwise the parameter type
  of <code>List::set</code> will be <code><?></code> and it'll falsely say any object can be passed into 
 <code>ArrayList<?>::set</code>.
  
 <p>Instead, <code><?></code> will be resolved to a capture in the form of a type variable 
 <code><capture-of-? extends Object></code>, effectively preventing <code>set</code> from accepting any
  type.
 */
+ (ComGoogleCommonReflectTypeResolver *)invariantlyWithJavaLangReflectType:(id<JavaLangReflectType>)contextType;

- (IOSObjectArray *)resolveTypesInPlaceWithJavaLangReflectTypeArray:(IOSObjectArray *)types;

/*!
 @brief Returns a new <code>TypeResolver</code> with <code>variable</code> mapping to <code>type</code>.
 */
- (ComGoogleCommonReflectTypeResolver *)whereWithJavaUtilMap:(id<JavaUtilMap>)mappings;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonReflectTypeResolver)

FOUNDATION_EXPORT void ComGoogleCommonReflectTypeResolver_init(ComGoogleCommonReflectTypeResolver *self);

FOUNDATION_EXPORT ComGoogleCommonReflectTypeResolver *new_ComGoogleCommonReflectTypeResolver_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonReflectTypeResolver *create_ComGoogleCommonReflectTypeResolver_init(void);

FOUNDATION_EXPORT ComGoogleCommonReflectTypeResolver *ComGoogleCommonReflectTypeResolver_covariantlyWithJavaLangReflectType_(id<JavaLangReflectType> contextType);

FOUNDATION_EXPORT ComGoogleCommonReflectTypeResolver *ComGoogleCommonReflectTypeResolver_invariantlyWithJavaLangReflectType_(id<JavaLangReflectType> contextType);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectTypeResolver)

#endif

#if !defined (ComGoogleCommonReflectTypeResolver_TypeVariableKey_) && (INCLUDE_ALL_ComGoogleCommonReflectTypeResolver || defined(INCLUDE_ComGoogleCommonReflectTypeResolver_TypeVariableKey))
#define ComGoogleCommonReflectTypeResolver_TypeVariableKey_

@protocol JavaLangReflectType;
@protocol JavaLangReflectTypeVariable;

/*!
 @brief Wraps around <code>TypeVariable<?
 ></code> to ensure that any two type variables are equal as long as
  they are declared by the same <code>java.lang.reflect.GenericDeclaration</code> and have the same
  name, even if their bounds differ.
 <p>While resolving a type variable from a <code>var -> type</code> map, we don't care whether the
  type variable's bound has been partially resolved. As long as the type variable "identity"
  matches. 
 <p>On the other hand, if for example we are resolving <code>List<A extends B></code> to <code>List<A extends String></code>
 , we need to compare that <code><A extends B></code> is unequal to <code><A
  extends String></code>
  in order to decide to use the transformed type instead of the original type.
 */
@interface ComGoogleCommonReflectTypeResolver_TypeVariableKey : NSObject

#pragma mark Public

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaLangReflectTypeVariable:(id<JavaLangReflectTypeVariable>)var;

/*!
 @brief Returns true if <code>type</code> is a <code>TypeVariable</code> with the same name and declared by the same 
 <code>GenericDeclaration</code>.
 */
- (jboolean)equalsTypeWithJavaLangReflectType:(id<JavaLangReflectType>)type;

/*!
 @brief Wraps <code>t</code> in a <code>TypeVariableKey</code> if it's a type variable.
 */
+ (ComGoogleCommonReflectTypeResolver_TypeVariableKey *)forLookupWithJavaLangReflectType:(id<JavaLangReflectType>)t;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonReflectTypeResolver_TypeVariableKey)

FOUNDATION_EXPORT void ComGoogleCommonReflectTypeResolver_TypeVariableKey_initWithJavaLangReflectTypeVariable_(ComGoogleCommonReflectTypeResolver_TypeVariableKey *self, id<JavaLangReflectTypeVariable> var);

FOUNDATION_EXPORT ComGoogleCommonReflectTypeResolver_TypeVariableKey *new_ComGoogleCommonReflectTypeResolver_TypeVariableKey_initWithJavaLangReflectTypeVariable_(id<JavaLangReflectTypeVariable> var) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonReflectTypeResolver_TypeVariableKey *create_ComGoogleCommonReflectTypeResolver_TypeVariableKey_initWithJavaLangReflectTypeVariable_(id<JavaLangReflectTypeVariable> var);

FOUNDATION_EXPORT ComGoogleCommonReflectTypeResolver_TypeVariableKey *ComGoogleCommonReflectTypeResolver_TypeVariableKey_forLookupWithJavaLangReflectType_(id<JavaLangReflectType> t);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectTypeResolver_TypeVariableKey)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonReflectTypeResolver")
