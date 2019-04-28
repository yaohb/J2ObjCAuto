//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/com/google/common/hash/AbstractHasher.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonHashAbstractHasher")
#ifdef RESTRICT_ComGoogleCommonHashAbstractHasher
#define INCLUDE_ALL_ComGoogleCommonHashAbstractHasher 0
#else
#define INCLUDE_ALL_ComGoogleCommonHashAbstractHasher 1
#endif
#undef RESTRICT_ComGoogleCommonHashAbstractHasher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonHashAbstractHasher_) && (INCLUDE_ALL_ComGoogleCommonHashAbstractHasher || defined(INCLUDE_ComGoogleCommonHashAbstractHasher))
#define ComGoogleCommonHashAbstractHasher_

#define RESTRICT_ComGoogleCommonHashHasher 1
#define INCLUDE_ComGoogleCommonHashHasher 1
#include "com/google/common/hash/Hasher.h"

@class IOSByteArray;
@class JavaNioByteBuffer;
@class JavaNioCharsetCharset;
@protocol ComGoogleCommonHashFunnel;
@protocol JavaLangCharSequence;

/*!
 @brief An abstract implementation of <code>Hasher</code>, which only requires subtypes to implement <code>putByte</code>
 .Subtypes may provide more efficient implementations, however.
 @author Dimitris Andreou
 */
@interface ComGoogleCommonHashAbstractHasher : NSObject < ComGoogleCommonHashHasher >

#pragma mark Public

- (id<ComGoogleCommonHashHasher>)putBooleanWithBoolean:(jboolean)b;

- (id<ComGoogleCommonHashHasher>)putBytesWithByteArray:(IOSByteArray *)bytes;

- (id<ComGoogleCommonHashHasher>)putBytesWithByteArray:(IOSByteArray *)bytes
                                               withInt:(jint)off
                                               withInt:(jint)len;

- (id<ComGoogleCommonHashHasher>)putBytesWithJavaNioByteBuffer:(JavaNioByteBuffer *)b;

- (id<ComGoogleCommonHashHasher>)putCharWithChar:(jchar)c;

- (id<ComGoogleCommonHashHasher>)putDoubleWithDouble:(jdouble)d;

- (id<ComGoogleCommonHashHasher>)putFloatWithFloat:(jfloat)f;

- (id<ComGoogleCommonHashHasher>)putIntWithInt:(jint)i;

- (id<ComGoogleCommonHashHasher>)putLongWithLong:(jlong)l;

- (id<ComGoogleCommonHashHasher>)putObjectWithId:(id)instance
                   withComGoogleCommonHashFunnel:(id<ComGoogleCommonHashFunnel>)funnel;

- (id<ComGoogleCommonHashHasher>)putShortWithShort:(jshort)s;

- (id<ComGoogleCommonHashHasher>)putStringWithJavaLangCharSequence:(id<JavaLangCharSequence>)charSequence
                                         withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

- (id<ComGoogleCommonHashHasher>)putUnencodedCharsWithJavaLangCharSequence:(id<JavaLangCharSequence>)charSequence;

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashAbstractHasher)

FOUNDATION_EXPORT void ComGoogleCommonHashAbstractHasher_init(ComGoogleCommonHashAbstractHasher *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashAbstractHasher)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonHashAbstractHasher")
