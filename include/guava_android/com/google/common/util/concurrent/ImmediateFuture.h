//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/com/google/common/util/concurrent/ImmediateFuture.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentImmediateFuture")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentImmediateFuture
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentImmediateFuture 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentImmediateFuture 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentImmediateFuture
#ifdef INCLUDE_ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedCheckedFuture
#define INCLUDE_ComGoogleCommonUtilConcurrentImmediateFuture 1
#endif
#ifdef INCLUDE_ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateSuccessfulCheckedFuture
#define INCLUDE_ComGoogleCommonUtilConcurrentImmediateFuture 1
#endif
#ifdef INCLUDE_ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateSuccessfulFuture
#define INCLUDE_ComGoogleCommonUtilConcurrentImmediateFuture 1
#endif

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentImmediateFuture_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentImmediateFuture || defined(INCLUDE_ComGoogleCommonUtilConcurrentImmediateFuture))
#define ComGoogleCommonUtilConcurrentImmediateFuture_

#define RESTRICT_ComGoogleCommonUtilConcurrentFluentFuture 1
#define INCLUDE_ComGoogleCommonUtilConcurrentFluentFuture 1
#include "com/google/common/util/concurrent/FluentFuture.h"

@class JavaUtilConcurrentTimeUnit;
@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentExecutor;

/*!
 @brief Implementations of <code>Futures.immediate*</code>.
 */
@interface ComGoogleCommonUtilConcurrentImmediateFuture : ComGoogleCommonUtilConcurrentFluentFuture

#pragma mark Public

- (void)addListenerWithJavaLangRunnable:(id<JavaLangRunnable>)listener
         withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

- (jboolean)cancelWithBoolean:(jboolean)mayInterruptIfRunning;

- (id)get;

- (id)getWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (jboolean)isCancelled;

- (jboolean)isDone;

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentImmediateFuture)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentImmediateFuture_init(ComGoogleCommonUtilConcurrentImmediateFuture *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentImmediateFuture)

#endif

#if !defined (ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateSuccessfulFuture_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentImmediateFuture || defined(INCLUDE_ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateSuccessfulFuture))
#define ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateSuccessfulFuture_

@interface ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateSuccessfulFuture : ComGoogleCommonUtilConcurrentImmediateFuture
@property (readonly, class, strong) ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateSuccessfulFuture *NULL_ NS_SWIFT_NAME(NULL_);

+ (ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateSuccessfulFuture *)NULL_;

#pragma mark Public

- (id)get;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype __nonnull)initWithId:(id)value;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateSuccessfulFuture)

inline ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateSuccessfulFuture *ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateSuccessfulFuture_get_NULL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateSuccessfulFuture *ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateSuccessfulFuture_NULL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateSuccessfulFuture, NULL, ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateSuccessfulFuture *)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateSuccessfulFuture_initWithId_(ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateSuccessfulFuture *self, id value);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateSuccessfulFuture *new_ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateSuccessfulFuture_initWithId_(id value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateSuccessfulFuture *create_ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateSuccessfulFuture_initWithId_(id value);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateSuccessfulFuture)

#endif

#if !defined (ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateSuccessfulCheckedFuture_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentImmediateFuture || defined(INCLUDE_ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateSuccessfulCheckedFuture))
#define ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateSuccessfulCheckedFuture_

#define RESTRICT_ComGoogleCommonUtilConcurrentCheckedFuture 1
#define INCLUDE_ComGoogleCommonUtilConcurrentCheckedFuture 1
#include "com/google/common/util/concurrent/CheckedFuture.h"

@class JavaUtilConcurrentTimeUnit;

@interface ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateSuccessfulCheckedFuture : ComGoogleCommonUtilConcurrentImmediateFuture < ComGoogleCommonUtilConcurrentCheckedFuture >

#pragma mark Public

- (id)checkedGet;

- (id)checkedGetWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (id)get;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype __nonnull)initWithId:(id)value;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateSuccessfulCheckedFuture)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateSuccessfulCheckedFuture_initWithId_(ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateSuccessfulCheckedFuture *self, id value);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateSuccessfulCheckedFuture *new_ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateSuccessfulCheckedFuture_initWithId_(id value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateSuccessfulCheckedFuture *create_ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateSuccessfulCheckedFuture_initWithId_(id value);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateSuccessfulCheckedFuture)

#endif

#if !defined (ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedFuture_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentImmediateFuture || defined(INCLUDE_ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedFuture))
#define ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedFuture_

#define RESTRICT_ComGoogleCommonUtilConcurrentAbstractFuture 1
#define INCLUDE_ComGoogleCommonUtilConcurrentAbstractFuture_TrustedFuture 1
#include "com/google/common/util/concurrent/AbstractFuture.h"

@class JavaLangThrowable;

@interface ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedFuture : ComGoogleCommonUtilConcurrentAbstractFuture_TrustedFuture

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)thrown;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedFuture)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedFuture_initWithJavaLangThrowable_(ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedFuture *self, JavaLangThrowable *thrown);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedFuture *new_ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedFuture_initWithJavaLangThrowable_(JavaLangThrowable *thrown) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedFuture *create_ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedFuture_initWithJavaLangThrowable_(JavaLangThrowable *thrown);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedFuture)

#endif

#if !defined (ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateCancelledFuture_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentImmediateFuture || defined(INCLUDE_ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateCancelledFuture))
#define ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateCancelledFuture_

#define RESTRICT_ComGoogleCommonUtilConcurrentAbstractFuture 1
#define INCLUDE_ComGoogleCommonUtilConcurrentAbstractFuture_TrustedFuture 1
#include "com/google/common/util/concurrent/AbstractFuture.h"

@interface ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateCancelledFuture : ComGoogleCommonUtilConcurrentAbstractFuture_TrustedFuture

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateCancelledFuture)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateCancelledFuture_init(ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateCancelledFuture *self);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateCancelledFuture *new_ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateCancelledFuture_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateCancelledFuture *create_ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateCancelledFuture_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateCancelledFuture)

#endif

#if !defined (ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedCheckedFuture_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentImmediateFuture || defined(INCLUDE_ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedCheckedFuture))
#define ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedCheckedFuture_

#define RESTRICT_ComGoogleCommonUtilConcurrentCheckedFuture 1
#define INCLUDE_ComGoogleCommonUtilConcurrentCheckedFuture 1
#include "com/google/common/util/concurrent/CheckedFuture.h"

@class JavaLangException;
@class JavaUtilConcurrentTimeUnit;

@interface ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedCheckedFuture : ComGoogleCommonUtilConcurrentImmediateFuture < ComGoogleCommonUtilConcurrentCheckedFuture >

#pragma mark Public

- (id)checkedGet;

- (id)checkedGetWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (id)get;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaLangException:(JavaLangException *)thrown;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedCheckedFuture)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedCheckedFuture_initWithJavaLangException_(ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedCheckedFuture *self, JavaLangException *thrown);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedCheckedFuture *new_ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedCheckedFuture_initWithJavaLangException_(JavaLangException *thrown) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedCheckedFuture *create_ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedCheckedFuture_initWithJavaLangException_(JavaLangException *thrown);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedCheckedFuture)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentImmediateFuture")
