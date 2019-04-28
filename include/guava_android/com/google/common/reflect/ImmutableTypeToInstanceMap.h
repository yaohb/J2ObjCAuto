//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/com/google/common/reflect/ImmutableTypeToInstanceMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonReflectImmutableTypeToInstanceMap")
#ifdef RESTRICT_ComGoogleCommonReflectImmutableTypeToInstanceMap
#define INCLUDE_ALL_ComGoogleCommonReflectImmutableTypeToInstanceMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonReflectImmutableTypeToInstanceMap 1
#endif
#undef RESTRICT_ComGoogleCommonReflectImmutableTypeToInstanceMap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonReflectImmutableTypeToInstanceMap_) && (INCLUDE_ALL_ComGoogleCommonReflectImmutableTypeToInstanceMap || defined(INCLUDE_ComGoogleCommonReflectImmutableTypeToInstanceMap))
#define ComGoogleCommonReflectImmutableTypeToInstanceMap_

#define RESTRICT_ComGoogleCommonCollectForwardingMap 1
#define INCLUDE_ComGoogleCommonCollectForwardingMap 1
#include "com/google/common/collect/ForwardingMap.h"

#define RESTRICT_ComGoogleCommonReflectTypeToInstanceMap 1
#define INCLUDE_ComGoogleCommonReflectTypeToInstanceMap 1
#include "com/google/common/reflect/TypeToInstanceMap.h"

@class ComGoogleCommonReflectImmutableTypeToInstanceMap_Builder;
@class ComGoogleCommonReflectTypeToken;
@class IOSClass;
@protocol JavaUtilMap;

/*!
 @brief A type-to-instance map backed by an <code>ImmutableMap</code>.See also <code>MutableTypeToInstanceMap</code>
 .
 @author Ben Yu
 @since 13.0
 */
@interface ComGoogleCommonReflectImmutableTypeToInstanceMap : ComGoogleCommonCollectForwardingMap < ComGoogleCommonReflectTypeToInstanceMap >

#pragma mark Public

/*!
 @brief Returns a new builder.
 */
+ (ComGoogleCommonReflectImmutableTypeToInstanceMap_Builder *)builder;

- (id)getInstanceWithIOSClass:(IOSClass *)type;

- (id)getInstanceWithComGoogleCommonReflectTypeToken:(ComGoogleCommonReflectTypeToken *)type;

/*!
 @brief Returns an empty type to instance map.
 */
+ (ComGoogleCommonReflectImmutableTypeToInstanceMap *)of;

/*!
 @brief Guaranteed to throw an exception and leave the map unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (id)putWithId:(ComGoogleCommonReflectTypeToken *)key
         withId:(id)value __attribute__((deprecated));

/*!
 @brief Guaranteed to throw an exception and leave the map unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)map __attribute__((deprecated));

/*!
 @brief Guaranteed to throw an exception and leave the map unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (id)putInstanceWithIOSClass:(IOSClass *)type
                       withId:(id)value __attribute__((deprecated));

/*!
 @brief Guaranteed to throw an exception and leave the map unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (id)putInstanceWithComGoogleCommonReflectTypeToken:(ComGoogleCommonReflectTypeToken *)type
                                              withId:(id)value __attribute__((deprecated));

#pragma mark Protected

- (id<JavaUtilMap>)delegate;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonReflectImmutableTypeToInstanceMap)

FOUNDATION_EXPORT ComGoogleCommonReflectImmutableTypeToInstanceMap *ComGoogleCommonReflectImmutableTypeToInstanceMap_of(void);

FOUNDATION_EXPORT ComGoogleCommonReflectImmutableTypeToInstanceMap_Builder *ComGoogleCommonReflectImmutableTypeToInstanceMap_builder(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectImmutableTypeToInstanceMap)

#endif

#if !defined (ComGoogleCommonReflectImmutableTypeToInstanceMap_Builder_) && (INCLUDE_ALL_ComGoogleCommonReflectImmutableTypeToInstanceMap || defined(INCLUDE_ComGoogleCommonReflectImmutableTypeToInstanceMap_Builder))
#define ComGoogleCommonReflectImmutableTypeToInstanceMap_Builder_

@class ComGoogleCommonReflectImmutableTypeToInstanceMap;
@class ComGoogleCommonReflectTypeToken;
@class IOSClass;

/*!
 @brief A builder for creating immutable type-to-instance maps.Example:
  
 @code
 static final ImmutableTypeToInstanceMap<Handler<?
 >> HANDLERS =
      ImmutableTypeToInstanceMap.<Handler<?>>builder()
          .put(new TypeToken<Handler<Foo>>() {}, new FooHandler())
          .put(new TypeToken<Handler<Bar>>() {}, new SubBarHandler())
          .build(); 
 
@endcode
  
 <p>After invoking <code>build()</code> it is still possible to add more entries and build again.
  Thus each map generated by this builder will be a superset of any map generated before it.
 @since 13.0
 */
@interface ComGoogleCommonReflectImmutableTypeToInstanceMap_Builder : NSObject

#pragma mark Public

/*!
 @brief Returns a new immutable type-to-instance map containing the entries provided to this builder.
 @throw IllegalArgumentExceptionif duplicate keys were added
 */
- (ComGoogleCommonReflectImmutableTypeToInstanceMap *)build;

/*!
 @brief Associates <code>key</code> with <code>value</code> in the built map.Duplicate keys are not allowed,
  and will cause <code>build</code> to fail.
 */
- (ComGoogleCommonReflectImmutableTypeToInstanceMap_Builder *)putWithIOSClass:(IOSClass *)key
                                                                       withId:(id)value;

/*!
 @brief Associates <code>key</code> with <code>value</code> in the built map.Duplicate keys are not allowed,
  and will cause <code>build</code> to fail.
 */
- (ComGoogleCommonReflectImmutableTypeToInstanceMap_Builder *)putWithComGoogleCommonReflectTypeToken:(ComGoogleCommonReflectTypeToken *)key
                                                                                              withId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonReflectImmutableTypeToInstanceMap_Builder)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectImmutableTypeToInstanceMap_Builder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonReflectImmutableTypeToInstanceMap")
