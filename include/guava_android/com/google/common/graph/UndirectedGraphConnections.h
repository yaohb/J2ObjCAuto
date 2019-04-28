//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/com/google/common/graph/UndirectedGraphConnections.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphUndirectedGraphConnections")
#ifdef RESTRICT_ComGoogleCommonGraphUndirectedGraphConnections
#define INCLUDE_ALL_ComGoogleCommonGraphUndirectedGraphConnections 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphUndirectedGraphConnections 1
#endif
#undef RESTRICT_ComGoogleCommonGraphUndirectedGraphConnections

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphUndirectedGraphConnections_) && (INCLUDE_ALL_ComGoogleCommonGraphUndirectedGraphConnections || defined(INCLUDE_ComGoogleCommonGraphUndirectedGraphConnections))
#define ComGoogleCommonGraphUndirectedGraphConnections_

#define RESTRICT_ComGoogleCommonGraphGraphConnections 1
#define INCLUDE_ComGoogleCommonGraphGraphConnections 1
#include "com/google/common/graph/GraphConnections.h"

@protocol JavaUtilMap;
@protocol JavaUtilSet;

/*!
 @brief An implementation of <code>GraphConnections</code> for undirected graphs.
 @author James Sexton
 */
@interface ComGoogleCommonGraphUndirectedGraphConnections : NSObject < ComGoogleCommonGraphGraphConnections >

#pragma mark Public

- (void)addPredecessorWithId:(id)node
                      withId:(id)value;

- (id)addSuccessorWithId:(id)node
                  withId:(id)value;

- (id<JavaUtilSet>)adjacentNodes;

- (id<JavaUtilSet>)predecessors;

- (void)removePredecessorWithId:(id)node;

- (id)removeSuccessorWithId:(id)node;

- (id<JavaUtilSet>)successors;

- (id)valueWithId:(id)node;

#pragma mark Package-Private

+ (ComGoogleCommonGraphUndirectedGraphConnections *)of;

+ (ComGoogleCommonGraphUndirectedGraphConnections *)ofImmutableWithJavaUtilMap:(id<JavaUtilMap>)adjacentNodeValues;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphUndirectedGraphConnections)

FOUNDATION_EXPORT ComGoogleCommonGraphUndirectedGraphConnections *ComGoogleCommonGraphUndirectedGraphConnections_of(void);

FOUNDATION_EXPORT ComGoogleCommonGraphUndirectedGraphConnections *ComGoogleCommonGraphUndirectedGraphConnections_ofImmutableWithJavaUtilMap_(id<JavaUtilMap> adjacentNodeValues);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphUndirectedGraphConnections)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphUndirectedGraphConnections")
