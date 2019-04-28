//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/com/google/common/graph/AbstractUndirectedNetworkConnections.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphAbstractUndirectedNetworkConnections")
#ifdef RESTRICT_ComGoogleCommonGraphAbstractUndirectedNetworkConnections
#define INCLUDE_ALL_ComGoogleCommonGraphAbstractUndirectedNetworkConnections 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphAbstractUndirectedNetworkConnections 1
#endif
#undef RESTRICT_ComGoogleCommonGraphAbstractUndirectedNetworkConnections

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphAbstractUndirectedNetworkConnections_) && (INCLUDE_ALL_ComGoogleCommonGraphAbstractUndirectedNetworkConnections || defined(INCLUDE_ComGoogleCommonGraphAbstractUndirectedNetworkConnections))
#define ComGoogleCommonGraphAbstractUndirectedNetworkConnections_

#define RESTRICT_ComGoogleCommonGraphNetworkConnections 1
#define INCLUDE_ComGoogleCommonGraphNetworkConnections 1
#include "com/google/common/graph/NetworkConnections.h"

@protocol JavaUtilMap;
@protocol JavaUtilSet;

/*!
 @brief A base implementation of <code>NetworkConnections</code> for undirected networks.
 @author James Sexton
 */
@interface ComGoogleCommonGraphAbstractUndirectedNetworkConnections : NSObject < ComGoogleCommonGraphNetworkConnections > {
 @public
  /*!
   @brief Keys are edges incident to the origin node, values are the node at the other end.
   */
  id<JavaUtilMap> incidentEdgeMap_;
}

#pragma mark Public

- (void)addInEdgeWithId:(id)edge
                 withId:(id)node
            withBoolean:(jboolean)isSelfLoop;

- (void)addOutEdgeWithId:(id)edge
                  withId:(id)node;

- (id)adjacentNodeWithId:(id)edge;

- (id<JavaUtilSet>)incidentEdges;

- (id<JavaUtilSet>)inEdges;

- (id<JavaUtilSet>)outEdges;

- (id<JavaUtilSet>)predecessors;

- (id)removeInEdgeWithId:(id)edge
             withBoolean:(jboolean)isSelfLoop;

- (id)removeOutEdgeWithId:(id)edge;

- (id<JavaUtilSet>)successors;

#pragma mark Protected

- (instancetype __nonnull)initWithJavaUtilMap:(id<JavaUtilMap>)incidentEdgeMap;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphAbstractUndirectedNetworkConnections)

J2OBJC_FIELD_SETTER(ComGoogleCommonGraphAbstractUndirectedNetworkConnections, incidentEdgeMap_, id<JavaUtilMap>)

FOUNDATION_EXPORT void ComGoogleCommonGraphAbstractUndirectedNetworkConnections_initWithJavaUtilMap_(ComGoogleCommonGraphAbstractUndirectedNetworkConnections *self, id<JavaUtilMap> incidentEdgeMap);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphAbstractUndirectedNetworkConnections)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphAbstractUndirectedNetworkConnections")
