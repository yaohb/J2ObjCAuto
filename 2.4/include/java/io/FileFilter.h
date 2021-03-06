//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/FileFilter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoFileFilter")
#ifdef RESTRICT_JavaIoFileFilter
#define INCLUDE_ALL_JavaIoFileFilter 0
#else
#define INCLUDE_ALL_JavaIoFileFilter 1
#endif
#undef RESTRICT_JavaIoFileFilter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaIoFileFilter_) && (INCLUDE_ALL_JavaIoFileFilter || defined(INCLUDE_JavaIoFileFilter))
#define JavaIoFileFilter_

@class JavaIoFile;

/*!
 @brief An interface for filtering <code>File</code> objects based on their names
  or other information.
 - seealso: File#listFiles(FileFilter)
 */
@protocol JavaIoFileFilter < JavaObject >

/*!
 @brief Indicating whether a specific file should be included in a pathname list.
 @param pathname the abstract file to check.
 @return <code>true</code> if the file should be included, <code>false</code>
          otherwise.
 */
- (jboolean)acceptWithJavaIoFile:(JavaIoFile *)pathname;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoFileFilter)

J2OBJC_TYPE_LITERAL_HEADER(JavaIoFileFilter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoFileFilter")
