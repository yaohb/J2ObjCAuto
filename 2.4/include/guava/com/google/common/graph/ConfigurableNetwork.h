//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/graph/ConfigurableNetwork.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphConfigurableNetwork")
#ifdef RESTRICT_ComGoogleCommonGraphConfigurableNetwork
#define INCLUDE_ALL_ComGoogleCommonGraphConfigurableNetwork 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphConfigurableNetwork 1
#endif
#undef RESTRICT_ComGoogleCommonGraphConfigurableNetwork

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphConfigurableNetwork_) && (INCLUDE_ALL_ComGoogleCommonGraphConfigurableNetwork || defined(INCLUDE_ComGoogleCommonGraphConfigurableNetwork))
#define ComGoogleCommonGraphConfigurableNetwork_

#define RESTRICT_ComGoogleCommonGraphAbstractNetwork 1
#define INCLUDE_ComGoogleCommonGraphAbstractNetwork 1
#include "com/google/common/graph/AbstractNetwork.h"

@class ComGoogleCommonGraphElementOrder;
@class ComGoogleCommonGraphEndpointPair;
@class ComGoogleCommonGraphMapIteratorCache;
@class ComGoogleCommonGraphNetworkBuilder;
@protocol ComGoogleCommonGraphNetworkConnections;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

/*!
 @brief Configurable implementation of <code>Network</code> that supports the options supplied by <code>NetworkBuilder</code>
 .
 <p>This class maintains a map of nodes to <code>NetworkConnections</code>. This class also maintains a
  map of edges to reference nodes. The reference node is defined to be the edge's source node on
  directed graphs, and an arbitrary endpoint of the edge on undirected graphs. 
 <p>Collection-returning accessors return unmodifiable views: the view returned will reflect
  changes to the graph (if the graph is mutable) but may not be modified by the user. 
 <p>The time complexity of all collection-returning accessors is O(1), since views are returned.
 @author James Sexton
 @author Joshua O'Madadhain
 @author Omar Darwish
 */
@interface ComGoogleCommonGraphConfigurableNetwork : ComGoogleCommonGraphAbstractNetwork {
 @public
  ComGoogleCommonGraphMapIteratorCache *nodeConnections_;
  ComGoogleCommonGraphMapIteratorCache *edgeToReferenceNode_;
}

#pragma mark Public

- (id<JavaUtilSet>)adjacentNodesWithId:(id)node;

- (jboolean)allowsParallelEdges;

- (jboolean)allowsSelfLoops;

- (ComGoogleCommonGraphElementOrder *)edgeOrder;

- (id<JavaUtilSet>)edges;

- (id<JavaUtilSet>)edgesConnectingWithId:(id)nodeU
                                  withId:(id)nodeV;

- (id<JavaUtilSet>)incidentEdgesWithId:(id)node;

- (ComGoogleCommonGraphEndpointPair *)incidentNodesWithId:(id)edge;

- (id<JavaUtilSet>)inEdgesWithId:(id)node;

- (jboolean)isDirected;

- (ComGoogleCommonGraphElementOrder *)nodeOrder;

- (id<JavaUtilSet>)nodes;

- (id<JavaUtilSet>)outEdgesWithId:(id)node;

- (id<JavaUtilSet>)predecessorsWithId:(id)node;

- (id<JavaUtilSet>)successorsWithId:(id)node;

#pragma mark Protected

- (id<ComGoogleCommonGraphNetworkConnections>)checkedConnectionsWithId:(id)node;

- (id)checkedReferenceNodeWithId:(id)edge;

- (jboolean)containsEdgeWithId:(id)edge;

- (jboolean)containsNodeWithId:(id)node;

#pragma mark Package-Private

/*!
 @brief Constructs a graph with the properties specified in <code>builder</code>.
 */
- (instancetype __nonnull)initWithComGoogleCommonGraphNetworkBuilder:(ComGoogleCommonGraphNetworkBuilder *)builder;

/*!
 @brief Constructs a graph with the properties specified in <code>builder</code>, initialized with the given
  node and edge maps.
 */
- (instancetype __nonnull)initWithComGoogleCommonGraphNetworkBuilder:(ComGoogleCommonGraphNetworkBuilder *)builder
                                                     withJavaUtilMap:(id<JavaUtilMap>)nodeConnections
                                                     withJavaUtilMap:(id<JavaUtilMap>)edgeToReferenceNode;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphConfigurableNetwork)

J2OBJC_FIELD_SETTER(ComGoogleCommonGraphConfigurableNetwork, nodeConnections_, ComGoogleCommonGraphMapIteratorCache *)
J2OBJC_FIELD_SETTER(ComGoogleCommonGraphConfigurableNetwork, edgeToReferenceNode_, ComGoogleCommonGraphMapIteratorCache *)

FOUNDATION_EXPORT void ComGoogleCommonGraphConfigurableNetwork_initWithComGoogleCommonGraphNetworkBuilder_(ComGoogleCommonGraphConfigurableNetwork *self, ComGoogleCommonGraphNetworkBuilder *builder);

FOUNDATION_EXPORT ComGoogleCommonGraphConfigurableNetwork *new_ComGoogleCommonGraphConfigurableNetwork_initWithComGoogleCommonGraphNetworkBuilder_(ComGoogleCommonGraphNetworkBuilder *builder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonGraphConfigurableNetwork *create_ComGoogleCommonGraphConfigurableNetwork_initWithComGoogleCommonGraphNetworkBuilder_(ComGoogleCommonGraphNetworkBuilder *builder);

FOUNDATION_EXPORT void ComGoogleCommonGraphConfigurableNetwork_initWithComGoogleCommonGraphNetworkBuilder_withJavaUtilMap_withJavaUtilMap_(ComGoogleCommonGraphConfigurableNetwork *self, ComGoogleCommonGraphNetworkBuilder *builder, id<JavaUtilMap> nodeConnections, id<JavaUtilMap> edgeToReferenceNode);

FOUNDATION_EXPORT ComGoogleCommonGraphConfigurableNetwork *new_ComGoogleCommonGraphConfigurableNetwork_initWithComGoogleCommonGraphNetworkBuilder_withJavaUtilMap_withJavaUtilMap_(ComGoogleCommonGraphNetworkBuilder *builder, id<JavaUtilMap> nodeConnections, id<JavaUtilMap> edgeToReferenceNode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonGraphConfigurableNetwork *create_ComGoogleCommonGraphConfigurableNetwork_initWithComGoogleCommonGraphNetworkBuilder_withJavaUtilMap_withJavaUtilMap_(ComGoogleCommonGraphNetworkBuilder *builder, id<JavaUtilMap> nodeConnections, id<JavaUtilMap> edgeToReferenceNode);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphConfigurableNetwork)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphConfigurableNetwork")
