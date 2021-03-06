//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/EnumBiMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectEnumBiMap")
#ifdef RESTRICT_ComGoogleCommonCollectEnumBiMap
#define INCLUDE_ALL_ComGoogleCommonCollectEnumBiMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectEnumBiMap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectEnumBiMap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectEnumBiMap_) && (INCLUDE_ALL_ComGoogleCommonCollectEnumBiMap || defined(INCLUDE_ComGoogleCommonCollectEnumBiMap))
#define ComGoogleCommonCollectEnumBiMap_

#define RESTRICT_ComGoogleCommonCollectAbstractBiMap 1
#define INCLUDE_ComGoogleCommonCollectAbstractBiMap 1
#include "com/google/common/collect/AbstractBiMap.h"

@class IOSClass;
@class JavaLangEnum;
@protocol JavaUtilFunctionBiFunction;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilMap;

/*!
 @brief A <code>BiMap</code> backed by two <code>EnumMap</code> instances.Null keys and values are not permitted.
 An <code>EnumBiMap</code> and its inverse are both serializable. 
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/NewCollectionTypesExplained#bimap">
  <code>BiMap</code></a>.
 @author Mike Bostock
 @since 2.0
 */
@interface ComGoogleCommonCollectEnumBiMap : ComGoogleCommonCollectAbstractBiMap

#pragma mark Public

- (JavaLangEnum *)computeIfAbsentWithId:(JavaLangEnum *)arg0
           withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)arg1;

- (JavaLangEnum *)computeIfPresentWithId:(JavaLangEnum *)arg0
          withJavaUtilFunctionBiFunction:(id<JavaUtilFunctionBiFunction>)arg1;

- (JavaLangEnum *)computeWithId:(JavaLangEnum *)arg0
 withJavaUtilFunctionBiFunction:(id<JavaUtilFunctionBiFunction>)arg1;

/*!
 @brief Returns a new, empty <code>EnumBiMap</code> using the specified key and value types.
 @param keyType the key type
 @param valueType the value type
 */
+ (ComGoogleCommonCollectEnumBiMap *)createWithIOSClass:(IOSClass *)keyType
                                           withIOSClass:(IOSClass *)valueType;

/*!
 @brief Returns a new bimap with the same mappings as the specified map.If the specified map is an 
 <code>EnumBiMap</code>, the new bimap has the same types as the provided map.
 Otherwise, the
  specified map must contain at least one mapping, in order to determine the key and value types.
 @param map the map whose mappings are to be placed in this map
 @throw IllegalArgumentExceptionif map is not an <code>EnumBiMap</code> instance and contains no
      mappings
 */
+ (ComGoogleCommonCollectEnumBiMap *)createWithJavaUtilMap:(id<JavaUtilMap>)map;

- (JavaLangEnum *)forcePutWithId:(JavaLangEnum *)arg0
                          withId:(JavaLangEnum *)arg1;

- (JavaLangEnum *)getOrDefaultWithId:(id)arg0
                              withId:(JavaLangEnum *)arg1;

- (JavaLangEnum *)getWithId:(id)arg0;

/*!
 @brief Returns the associated key type.
 */
- (IOSClass *)keyType;

- (JavaLangEnum *)mergeWithId:(JavaLangEnum *)arg0
                       withId:(JavaLangEnum *)arg1
withJavaUtilFunctionBiFunction:(id<JavaUtilFunctionBiFunction>)arg2;

- (JavaLangEnum *)putIfAbsentWithId:(JavaLangEnum *)arg0
                             withId:(JavaLangEnum *)arg1;

- (JavaLangEnum *)putWithId:(JavaLangEnum *)arg0
                     withId:(JavaLangEnum *)arg1;

- (JavaLangEnum *)removeWithId:(id)arg0;

- (JavaLangEnum *)replaceWithId:(JavaLangEnum *)arg0
                         withId:(JavaLangEnum *)arg1;

/*!
 @brief Returns the associated value type.
 */
- (IOSClass *)valueType;

#pragma mark Protected

- (JavaLangEnum *)standardRemoveWithId:(id)arg0;

#pragma mark Package-Private

- (JavaLangEnum *)checkKeyWithId:(JavaLangEnum *)key;

- (JavaLangEnum *)checkValueWithId:(JavaLangEnum *)value;

+ (IOSClass *)inferKeyTypeWithJavaUtilMap:(id<JavaUtilMap>)map;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaUtilMap:(id<JavaUtilMap>)arg0
                              withJavaUtilMap:(id<JavaUtilMap>)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectEnumBiMap)

FOUNDATION_EXPORT ComGoogleCommonCollectEnumBiMap *ComGoogleCommonCollectEnumBiMap_createWithIOSClass_withIOSClass_(IOSClass *keyType, IOSClass *valueType);

FOUNDATION_EXPORT ComGoogleCommonCollectEnumBiMap *ComGoogleCommonCollectEnumBiMap_createWithJavaUtilMap_(id<JavaUtilMap> map);

FOUNDATION_EXPORT IOSClass *ComGoogleCommonCollectEnumBiMap_inferKeyTypeWithJavaUtilMap_(id<JavaUtilMap> map);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectEnumBiMap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectEnumBiMap")
