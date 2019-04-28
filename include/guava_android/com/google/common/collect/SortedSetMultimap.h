//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/com/google/common/collect/SortedSetMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectSortedSetMultimap")
#ifdef RESTRICT_ComGoogleCommonCollectSortedSetMultimap
#define INCLUDE_ALL_ComGoogleCommonCollectSortedSetMultimap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectSortedSetMultimap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectSortedSetMultimap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectSortedSetMultimap_) && (INCLUDE_ALL_ComGoogleCommonCollectSortedSetMultimap || defined(INCLUDE_ComGoogleCommonCollectSortedSetMultimap))
#define ComGoogleCommonCollectSortedSetMultimap_

#define RESTRICT_ComGoogleCommonCollectSetMultimap 1
#define INCLUDE_ComGoogleCommonCollectSetMultimap 1
#include "com/google/common/collect/SetMultimap.h"

@protocol JavaLangIterable;
@protocol JavaUtilComparator;
@protocol JavaUtilMap;
@protocol JavaUtilSortedSet;

/*!
 @brief A <code>SetMultimap</code> whose set of values for a given key are kept sorted; that is, they comprise a 
 <code>SortedSet</code>.It cannot hold duplicate key-value pairs; adding a key-value pair that's
  already in the multimap has no effect.
 This interface does not specify the ordering of the
  multimap's keys. See the <code>Multimap</code> documentation for information common to all multimaps. 
 <p>The <code>get</code>, <code>removeAll</code>, and <code>replaceValues</code> methods each return a <code>SortedSet</code>
  of values, while <code>Multimap.entries()</code> returns a <code>Set</code> of map entries.
  Though the method signature doesn't say so explicitly, the map returned by <code>asMap</code> has 
 <code>SortedSet</code> values. 
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/NewCollectionTypesExplained#multimap">
  <code>Multimap</code>
 </a>.
 @author Jared Levy
 @since 2.0
 */
@protocol ComGoogleCommonCollectSortedSetMultimap < ComGoogleCommonCollectSetMultimap, JavaObject >

/*!
 @brief Returns a collection view of all values associated with a key.If no mappings in the multimap
  have the provided key, an empty collection is returned.
 <p>Changes to the returned collection will update the underlying multimap, and vice versa. 
 <p>Because a <code>SortedSetMultimap</code> has unique sorted values for a given key, this method
  returns a <code>SortedSet</code>, instead of the <code>java.util.Collection</code> specified in the 
 <code>Multimap</code> interface.
 */
- (id<JavaUtilSortedSet>)getWithId:(id)key;

/*!
 @brief Removes all values associated with a given key.
 <p>Because a <code>SortedSetMultimap</code> has unique sorted values for a given key, this method
  returns a <code>SortedSet</code>, instead of the <code>java.util.Collection</code> specified in the 
 <code>Multimap</code> interface.
 */
- (id<JavaUtilSortedSet>)removeAllWithId:(id)key;

/*!
 @brief Stores a collection of values with the same key, replacing any existing values for that key.
 <p>Because a <code>SortedSetMultimap</code> has unique sorted values for a given key, this method
  returns a <code>SortedSet</code>, instead of the <code>java.util.Collection</code> specified in the 
 <code>Multimap</code> interface. 
 <p>Any duplicates in <code>values</code> will be stored in the multimap once.
 */
- (id<JavaUtilSortedSet>)replaceValuesWithId:(id)key
                        withJavaLangIterable:(id<JavaLangIterable>)values;

/*!
 @brief Returns a map view that associates each key with the corresponding values in the multimap.
 Changes to the returned map, such as element removal, will update the underlying multimap. The
  map does not support <code>setValue()</code> on its entries, <code>put</code>, or <code>putAll</code>.
  
 <p>When passed a key that is present in the map, <code>asMap().get(Object)</code> has the same
  behavior as <code>get</code>, returning a live collection. When passed a key that is not present,
  however, <code>asMap().get(Object)</code> returns <code>null</code> instead of an empty collection. 
 <p><b>Note:</b> The returned map's values are guaranteed to be of type <code>SortedSet</code>. To
  obtain this map with the more specific generic type <code>Map<K, SortedSet<V>></code>, call <code>Multimaps.asMap(SortedSetMultimap)</code>
  instead.
 */
- (id<JavaUtilMap>)asMap;

/*!
 @brief Returns the comparator that orders the multimap values, with <code>null</code> indicating that
  natural ordering is used.
 */
- (id<JavaUtilComparator>)valueComparator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSortedSetMultimap)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSortedSetMultimap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectSortedSetMultimap")
