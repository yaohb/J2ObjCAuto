//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/hash/AbstractHashFunction.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonHashAbstractHashFunction")
#ifdef RESTRICT_ComGoogleCommonHashAbstractHashFunction
#define INCLUDE_ALL_ComGoogleCommonHashAbstractHashFunction 0
#else
#define INCLUDE_ALL_ComGoogleCommonHashAbstractHashFunction 1
#endif
#undef RESTRICT_ComGoogleCommonHashAbstractHashFunction

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonHashAbstractHashFunction_) && (INCLUDE_ALL_ComGoogleCommonHashAbstractHashFunction || defined(INCLUDE_ComGoogleCommonHashAbstractHashFunction))
#define ComGoogleCommonHashAbstractHashFunction_

#define RESTRICT_ComGoogleCommonHashHashFunction 1
#define INCLUDE_ComGoogleCommonHashHashFunction 1
#include "com/google/common/hash/HashFunction.h"

@class ComGoogleCommonHashHashCode;
@class IOSByteArray;
@class JavaNioByteBuffer;
@class JavaNioCharsetCharset;
@protocol ComGoogleCommonHashFunnel;
@protocol ComGoogleCommonHashHasher;
@protocol JavaLangCharSequence;

/*!
 @brief Skeleton implementation of <code>HashFunction</code> in terms of <code>newHasher()</code>.
 <p>TODO(lowasser): make public
 */
@interface ComGoogleCommonHashAbstractHashFunction : NSObject < ComGoogleCommonHashHashFunction >

#pragma mark Public

- (ComGoogleCommonHashHashCode *)hashBytesWithByteArray:(IOSByteArray *)input;

- (ComGoogleCommonHashHashCode *)hashBytesWithByteArray:(IOSByteArray *)input
                                                withInt:(jint)off
                                                withInt:(jint)len;

- (ComGoogleCommonHashHashCode *)hashBytesWithJavaNioByteBuffer:(JavaNioByteBuffer *)input;

- (ComGoogleCommonHashHashCode *)hashIntWithInt:(jint)input;

- (ComGoogleCommonHashHashCode *)hashLongWithLong:(jlong)input;

- (ComGoogleCommonHashHashCode *)hashObjectWithId:(id)instance
                    withComGoogleCommonHashFunnel:(id<ComGoogleCommonHashFunnel>)funnel;

- (ComGoogleCommonHashHashCode *)hashStringWithJavaLangCharSequence:(id<JavaLangCharSequence>)input
                                          withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

- (ComGoogleCommonHashHashCode *)hashUnencodedCharsWithJavaLangCharSequence:(id<JavaLangCharSequence>)input;

- (id<ComGoogleCommonHashHasher>)newHasherWithInt:(jint)expectedInputSize OBJC_METHOD_FAMILY_NONE;

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashAbstractHashFunction)

FOUNDATION_EXPORT void ComGoogleCommonHashAbstractHashFunction_init(ComGoogleCommonHashAbstractHashFunction *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashAbstractHashFunction)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonHashAbstractHashFunction")
