//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/com/google/common/collect/ReverseNaturalOrdering.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectReverseNaturalOrdering")
#ifdef RESTRICT_ComGoogleCommonCollectReverseNaturalOrdering
#define INCLUDE_ALL_ComGoogleCommonCollectReverseNaturalOrdering 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectReverseNaturalOrdering 1
#endif
#undef RESTRICT_ComGoogleCommonCollectReverseNaturalOrdering

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectReverseNaturalOrdering_) && (INCLUDE_ALL_ComGoogleCommonCollectReverseNaturalOrdering || defined(INCLUDE_ComGoogleCommonCollectReverseNaturalOrdering))
#define ComGoogleCommonCollectReverseNaturalOrdering_

#define RESTRICT_ComGoogleCommonCollectOrdering 1
#define INCLUDE_ComGoogleCommonCollectOrdering 1
#include "com/google/common/collect/Ordering.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSObjectArray;
@protocol JavaLangComparable;
@protocol JavaLangIterable;
@protocol JavaUtilIterator;

/*!
 @brief An ordering that uses the reverse of the natural order of the values.
 */
@interface ComGoogleCommonCollectReverseNaturalOrdering : ComGoogleCommonCollectOrdering < JavaIoSerializable >
@property (readonly, class, strong) ComGoogleCommonCollectReverseNaturalOrdering *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (ComGoogleCommonCollectReverseNaturalOrdering *)INSTANCE;

#pragma mark Public

- (jint)compareWithId:(id<JavaLangComparable>)left
               withId:(id<JavaLangComparable>)right;

- (id<JavaLangComparable>)maxWithId:(id<JavaLangComparable>)a
                             withId:(id<JavaLangComparable>)b;

- (id<JavaLangComparable>)maxWithId:(id<JavaLangComparable>)a
                             withId:(id<JavaLangComparable>)b
                             withId:(id<JavaLangComparable>)c
                  withNSObjectArray:(IOSObjectArray *)rest;

- (id<JavaLangComparable>)maxWithJavaLangIterable:(id<JavaLangIterable>)iterable;

- (id<JavaLangComparable>)maxWithJavaUtilIterator:(id<JavaUtilIterator>)iterator;

- (id<JavaLangComparable>)minWithId:(id<JavaLangComparable>)a
                             withId:(id<JavaLangComparable>)b;

- (id<JavaLangComparable>)minWithId:(id<JavaLangComparable>)a
                             withId:(id<JavaLangComparable>)b
                             withId:(id<JavaLangComparable>)c
                  withNSObjectArray:(IOSObjectArray *)rest;

- (id<JavaLangComparable>)minWithJavaLangIterable:(id<JavaLangIterable>)iterable;

- (id<JavaLangComparable>)minWithJavaUtilIterator:(id<JavaUtilIterator>)iterator;

- (ComGoogleCommonCollectOrdering *)reverse;

- (NSString *)description;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectReverseNaturalOrdering)

inline ComGoogleCommonCollectReverseNaturalOrdering *ComGoogleCommonCollectReverseNaturalOrdering_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonCollectReverseNaturalOrdering *ComGoogleCommonCollectReverseNaturalOrdering_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonCollectReverseNaturalOrdering, INSTANCE, ComGoogleCommonCollectReverseNaturalOrdering *)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectReverseNaturalOrdering)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectReverseNaturalOrdering")
