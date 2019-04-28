//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/com/google/common/base/FinalizablePhantomReference.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseFinalizablePhantomReference")
#ifdef RESTRICT_ComGoogleCommonBaseFinalizablePhantomReference
#define INCLUDE_ALL_ComGoogleCommonBaseFinalizablePhantomReference 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseFinalizablePhantomReference 1
#endif
#undef RESTRICT_ComGoogleCommonBaseFinalizablePhantomReference

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBaseFinalizablePhantomReference_) && (INCLUDE_ALL_ComGoogleCommonBaseFinalizablePhantomReference || defined(INCLUDE_ComGoogleCommonBaseFinalizablePhantomReference))
#define ComGoogleCommonBaseFinalizablePhantomReference_

#define RESTRICT_JavaLangRefPhantomReference 1
#define INCLUDE_JavaLangRefPhantomReference 1
#include "java/lang/ref/PhantomReference.h"

#define RESTRICT_ComGoogleCommonBaseFinalizableReference 1
#define INCLUDE_ComGoogleCommonBaseFinalizableReference 1
#include "com/google/common/base/FinalizableReference.h"

@class ComGoogleCommonBaseFinalizableReferenceQueue;

/*!
 @brief Phantom reference with a <code>finalizeReferent()</code> method which a background thread invokes
  after the garbage collector reclaims the referent.This is a simpler alternative to using a 
 <code>ReferenceQueue</code>.
 <p>Unlike a normal phantom reference, this reference will be cleared automatically.
 @author Bob Lee
 @since 2.0
 */
@interface ComGoogleCommonBaseFinalizablePhantomReference : JavaLangRefPhantomReference < ComGoogleCommonBaseFinalizableReference >

#pragma mark Protected

/*!
 @brief Constructs a new finalizable phantom reference.
 @param referent to phantom reference
 @param queue that should finalize the referent
 */
- (instancetype __nonnull)initWithId:(id)referent
withComGoogleCommonBaseFinalizableReferenceQueue:(ComGoogleCommonBaseFinalizableReferenceQueue *)queue;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseFinalizablePhantomReference)

FOUNDATION_EXPORT void ComGoogleCommonBaseFinalizablePhantomReference_initWithId_withComGoogleCommonBaseFinalizableReferenceQueue_(ComGoogleCommonBaseFinalizablePhantomReference *self, id referent, ComGoogleCommonBaseFinalizableReferenceQueue *queue);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseFinalizablePhantomReference)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseFinalizablePhantomReference")
