//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/com/google/common/cache/RemovalListener.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCacheRemovalListener")
#ifdef RESTRICT_ComGoogleCommonCacheRemovalListener
#define INCLUDE_ALL_ComGoogleCommonCacheRemovalListener 0
#else
#define INCLUDE_ALL_ComGoogleCommonCacheRemovalListener 1
#endif
#undef RESTRICT_ComGoogleCommonCacheRemovalListener

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCacheRemovalListener_) && (INCLUDE_ALL_ComGoogleCommonCacheRemovalListener || defined(INCLUDE_ComGoogleCommonCacheRemovalListener))
#define ComGoogleCommonCacheRemovalListener_

@class ComGoogleCommonCacheRemovalNotification;

/*!
 @brief An object that can receive a notification when an entry is removed from a cache.The removal
  resulting in notification could have occurred to an entry being manually removed or replaced, or
  due to eviction resulting from timed expiration, exceeding a maximum size, or garbage collection.
 <p>An instance may be called concurrently by multiple threads to process different entries.
  Implementations of this interface should avoid performing blocking calls or synchronizing on
  shared resources.
 @author Charles Fry
 @since 10.0
 */
@protocol ComGoogleCommonCacheRemovalListener < JavaObject >

/*!
 @brief Notifies the listener that a removal occurred at some point in the past.
 <p>This does not always signify that the key is now absent from the cache, as it may have
  already been re-added.
 */
- (void)onRemovalWithComGoogleCommonCacheRemovalNotification:(ComGoogleCommonCacheRemovalNotification *)notification;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheRemovalListener)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheRemovalListener)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCacheRemovalListener")
