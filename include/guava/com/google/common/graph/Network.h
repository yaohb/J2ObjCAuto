//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/graph/Network.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphNetwork")
#ifdef RESTRICT_ComGoogleCommonGraphNetwork
#define INCLUDE_ALL_ComGoogleCommonGraphNetwork 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphNetwork 1
#endif
#undef RESTRICT_ComGoogleCommonGraphNetwork

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphNetwork_) && (INCLUDE_ALL_ComGoogleCommonGraphNetwork || defined(INCLUDE_ComGoogleCommonGraphNetwork))
#define ComGoogleCommonGraphNetwork_

#define RESTRICT_ComGoogleCommonGraphSuccessorsFunction 1
#define INCLUDE_ComGoogleCommonGraphSuccessorsFunction 1
#include "com/google/common/graph/SuccessorsFunction.h"

#define RESTRICT_ComGoogleCommonGraphPredecessorsFunction 1
#define INCLUDE_ComGoogleCommonGraphPredecessorsFunction 1
#include "com/google/common/graph/PredecessorsFunction.h"

@class ComGoogleCommonGraphElementOrder;
@class ComGoogleCommonGraphEndpointPair;
@class JavaUtilOptional;
@protocol ComGoogleCommonGraphGraph;
@protocol JavaUtilSet;

/*!
 @brief An interface for <a href="https://en.wikipedia.org/wiki/Graph_(discrete_mathematics)">
 graph</a>-structured data,
  whose edges are unique objects.
 <p>A graph is composed of a set of nodes and a set of edges connecting pairs of nodes. 
 <p>There are three primary interfaces provided to represent graphs. In order of increasing
  complexity they are: <code>Graph</code>, <code>ValueGraph</code>, and <code>Network</code>. You should generally
  prefer the simplest interface that satisfies your use case. See the <a href="https://github.com/google/guava/wiki/GraphsExplained#choosing-the-right-graph-type">
  "Choosing the right graph type"</a> section of the Guava User Guide for more details. 
 <h3>Capabilities</h3>
  
 <p><code>Network</code> supports the following use cases (<a href="https://github.com/google/guava/wiki/GraphsExplained#definitions">
 definitions of
  terms</a>):
  
 <ul>
    <li>directed graphs
    <li>undirected graphs
    <li>graphs that do/don't allow parallel edges
    <li>graphs that do/don't allow self-loops
    <li>graphs whose nodes/edges are insertion-ordered, sorted, or unordered
    <li>graphs whose edges are unique objects 
 </ul>
  
 <h3>Building a <code>Network</code></h3>
  
 <p>The implementation classes that <code>common.graph</code> provides are not public, by design. To
  create an instance of one of the built-in implementations of <code>Network</code>, use the <code>NetworkBuilder</code>
  class: 
 @code
 MutableNetwork<Integer, MyEdge> graph = NetworkBuilder.directed().build(); 
 
@endcode
  
 <p><code>NetworkBuilder.build()</code> returns an instance of <code>MutableNetwork</code>, which is a
  subtype of <code>Network</code> that provides methods for adding and removing nodes and edges. If you
  do not need to mutate a graph (e.g. if you write a method than runs a read-only algorithm on the
  graph), you should use the non-mutating <code>Network</code> interface, or an <code>ImmutableNetwork</code>
 .
  
 <p>You can create an immutable copy of an existing <code>Network</code> using <code>ImmutableNetwork.copyOf(Network)</code>
 :
  
 @code
 ImmutableNetwork<Integer, MyEdge> immutableGraph = ImmutableNetwork.copyOf(graph); 
 
@endcode
  
 <p>Instances of <code>ImmutableNetwork</code> do not implement <code>MutableNetwork</code> (obviously!) and
  are contractually guaranteed to be unmodifiable and thread-safe. 
 <p>The Guava User Guide has <a href="https://github.com/google/guava/wiki/GraphsExplained#building-graph-instances">
 more
  information on (and examples of) building graphs</a>.
  
 <h3>Additional documentation</h3>
  
 <p>See the Guava User Guide for the <code>common.graph</code> package (<a href="https://github.com/google/guava/wiki/GraphsExplained">
 "Graphs Explained"</a>) for
  additional documentation, including: 
 <ul>
    <li><a href="https://github.com/google/guava/wiki/GraphsExplained#equals-hashcode-and-graph-equivalence">
        <code>equals()</code>, <code>hashCode()</code>, and graph equivalence</a>
    <li><a href="https://github.com/google/guava/wiki/GraphsExplained#synchronization">
        Synchronization policy</a>
    <li><a href="https://github.com/google/guava/wiki/GraphsExplained#notes-for-implementors">Notes
        for implementors</a>
  </ul>
 @author James Sexton
 @author Joshua O'Madadhain
 @since 20.0
 */
@protocol ComGoogleCommonGraphNetwork < ComGoogleCommonGraphSuccessorsFunction, ComGoogleCommonGraphPredecessorsFunction, JavaObject >

/*!
 @brief Returns all nodes in this network, in the order specified by <code>nodeOrder()</code>.
 */
- (id<JavaUtilSet>)nodes;

/*!
 @brief Returns all edges in this network, in the order specified by <code>edgeOrder()</code>.
 */
- (id<JavaUtilSet>)edges;

/*!
 @brief Returns a live view of this network as a <code>Graph</code>.The resulting <code>Graph</code> will have
  an edge connecting node A to node B if this <code>Network</code> has an edge connecting A to B.
 <p>If this network <code>allows parallel edges</code>, parallel edges will be
  treated as if collapsed into a single edge. For example, the <code>degree(Object)</code> of a node
  in the <code>Graph</code> view may be less than the degree of the same node in this <code>Network</code>.
 */
- (id<ComGoogleCommonGraphGraph>)asGraph;

/*!
 @brief Returns true if the edges in this network are directed.Directed edges connect a <code>source node</code>
  to a <code>target node</code>, while
  undirected edges connect a pair of nodes to each other.
 */
- (jboolean)isDirected;

/*!
 @brief Returns true if this network allows parallel edges.Attempting to add a parallel edge to a
  network that does not allow them will throw an <code>IllegalArgumentException</code>.
 */
- (jboolean)allowsParallelEdges;

/*!
 @brief Returns true if this network allows self-loops (edges that connect a node to itself).
 Attempting to add a self-loop to a network that does not allow them will throw an <code>IllegalArgumentException</code>
 .
 */
- (jboolean)allowsSelfLoops;

/*!
 @brief Returns the order of iteration for the elements of <code>nodes()</code>.
 */
- (ComGoogleCommonGraphElementOrder *)nodeOrder;

/*!
 @brief Returns the order of iteration for the elements of <code>edges()</code>.
 */
- (ComGoogleCommonGraphElementOrder *)edgeOrder;

/*!
 @brief Returns the nodes which have an incident edge in common with <code>node</code> in this network.
 @throw IllegalArgumentExceptionif <code>node</code> is not an element of this network
 */
- (id<JavaUtilSet>)adjacentNodesWithId:(id)node;

/*!
 @brief Returns all nodes in this network adjacent to <code>node</code> which can be reached by traversing 
 <code>node</code>'s incoming edges <i>against</i> the direction (if any) of the edge.
 <p>In an undirected network, this is equivalent to <code>adjacentNodes(Object)</code>.
 @throw IllegalArgumentExceptionif <code>node</code> is not an element of this network
 */
- (id<JavaUtilSet>)predecessorsWithId:(id)node;

/*!
 @brief Returns all nodes in this network adjacent to <code>node</code> which can be reached by traversing 
 <code>node</code>'s outgoing edges in the direction (if any) of the edge.
 <p>In an undirected network, this is equivalent to <code>adjacentNodes(Object)</code>.
  
 <p>This is <i>not</i> the same as "all nodes reachable from <code>node</code> by following outgoing
  edges". For that functionality, see <code>Graphs.reachableNodes(Graph, Object)</code>.
 @throw IllegalArgumentExceptionif <code>node</code> is not an element of this network
 */
- (id<JavaUtilSet>)successorsWithId:(id)node;

/*!
 @brief Returns the edges whose <code>incident nodes</code> in this network include 
 <code>node</code>.
 @throw IllegalArgumentExceptionif <code>node</code> is not an element of this network
 */
- (id<JavaUtilSet>)incidentEdgesWithId:(id)node;

/*!
 @brief Returns all edges in this network which can be traversed in the direction (if any) of the edge
  to end at <code>node</code>.
 <p>In a directed network, an incoming edge's <code>EndpointPair.target()</code> equals <code>node</code>.
  
 <p>In an undirected network, this is equivalent to <code>incidentEdges(Object)</code>.
 @throw IllegalArgumentExceptionif <code>node</code> is not an element of this network
 */
- (id<JavaUtilSet>)inEdgesWithId:(id)node;

/*!
 @brief Returns all edges in this network which can be traversed in the direction (if any) of the edge
  starting from <code>node</code>.
 <p>In a directed network, an outgoing edge's <code>EndpointPair.source()</code> equals <code>node</code>.
  
 <p>In an undirected network, this is equivalent to <code>incidentEdges(Object)</code>.
 @throw IllegalArgumentExceptionif <code>node</code> is not an element of this network
 */
- (id<JavaUtilSet>)outEdgesWithId:(id)node;

/*!
 @brief Returns the count of <code>node</code>'s <code>incident edges</code>, counting
  self-loops twice (equivalently, the number of times an edge touches <code>node</code>).
 <p>For directed networks, this is equal to <code>inDegree(node) + outDegree(node)</code>.
  
 <p>For undirected networks, this is equal to <code>incidentEdges(node).size()</code> + (number of
  self-loops incident to <code>node</code>).
  
 <p>If the count is greater than <code>Integer.MAX_VALUE</code>, returns <code>Integer.MAX_VALUE</code>.
 @throw IllegalArgumentExceptionif <code>node</code> is not an element of this network
 */
- (jint)degreeWithId:(id)node;

/*!
 @brief Returns the count of <code>node</code>'s <code>incoming edges</code> in a directed
  network.In an undirected network, returns the <code>degree(Object)</code>.
 <p>If the count is greater than <code>Integer.MAX_VALUE</code>, returns <code>Integer.MAX_VALUE</code>.
 @throw IllegalArgumentExceptionif <code>node</code> is not an element of this network
 */
- (jint)inDegreeWithId:(id)node;

/*!
 @brief Returns the count of <code>node</code>'s <code>outgoing edges</code> in a directed
  network.In an undirected network, returns the <code>degree(Object)</code>.
 <p>If the count is greater than <code>Integer.MAX_VALUE</code>, returns <code>Integer.MAX_VALUE</code>.
 @throw IllegalArgumentExceptionif <code>node</code> is not an element of this network
 */
- (jint)outDegreeWithId:(id)node;

/*!
 @brief Returns the nodes which are the endpoints of <code>edge</code> in this network.
 @throw IllegalArgumentExceptionif <code>edge</code> is not an element of this network
 */
- (ComGoogleCommonGraphEndpointPair *)incidentNodesWithId:(id)edge;

/*!
 @brief Returns the edges which have an <code>incident node</code> in common with 
 <code>edge</code>.An edge is not considered adjacent to itself.
 @throw IllegalArgumentExceptionif <code>edge</code> is not an element of this network
 */
- (id<JavaUtilSet>)adjacentEdgesWithId:(id)edge;

/*!
 @brief Returns the set of edges directly connecting <code>nodeU</code> to <code>nodeV</code>.
 <p>In an undirected network, this is equal to <code>edgesConnecting(nodeV, nodeU)</code>.
  
 <p>The resulting set of edges will be parallel (i.e. have equal <code>incidentNodes(Object)</code>.
  If this network does not <code>allow parallel edges</code>, the resulting set
  will contain at most one edge (equivalent to <code>edgeConnecting(nodeU, nodeV).asSet()</code>).
 @throw IllegalArgumentExceptionif <code>nodeU</code> or <code>nodeV</code> is not an element of this
      network
 */
- (id<JavaUtilSet>)edgesConnectingWithId:(id)nodeU
                                  withId:(id)nodeV;

/*!
 @brief Returns the single edge directly connecting <code>nodeU</code> to <code>nodeV</code>, if one is present,
  or <code>Optional.empty()</code> if no such edge exists.
 <p>In an undirected network, this is equal to <code>edgeConnecting(nodeV, nodeU)</code>.
 @throw IllegalArgumentExceptionif there are multiple parallel edges connecting <code>nodeU</code>
      to <code>nodeV</code>
 @throw IllegalArgumentExceptionif <code>nodeU</code> or <code>nodeV</code> is not an element of this
      network
 @since 23.0
 */
- (JavaUtilOptional *)edgeConnectingWithId:(id)nodeU
                                    withId:(id)nodeV;

/*!
 @brief Returns the single edge directly connecting <code>nodeU</code> to <code>nodeV</code>, if one is present,
  or <code>null</code> if no such edge exists.
 <p>In an undirected network, this is equal to <code>edgeConnectingOrNull(nodeV, nodeU)</code>.
 @throw IllegalArgumentExceptionif there are multiple parallel edges connecting <code>nodeU</code>
      to <code>nodeV</code>
 @throw IllegalArgumentExceptionif <code>nodeU</code> or <code>nodeV</code> is not an element of this
      network
 @since 23.0
 */
- (id)edgeConnectingOrNullWithId:(id)nodeU
                          withId:(id)nodeV;

/*!
 @brief Returns true if there is an edge directly connecting <code>nodeU</code> to <code>nodeV</code>.This is
  equivalent to <code>nodes().contains(nodeU) && successors(nodeU).contains(nodeV)</code>, and to 
 <code>edgeConnectingOrNull(nodeU, nodeV) !
 = null</code>.
  
 <p>In an undirected graph, this is equal to <code>hasEdgeConnecting(nodeV, nodeU)</code>.
 @since 23.0
 */
- (jboolean)hasEdgeConnectingWithId:(id)nodeU
                             withId:(id)nodeV;

/*!
 @brief Returns <code>true</code> iff <code>object</code> is a <code>Network</code> that has the same elements and the
  same structural relationships as those in this network.
 <p>Thus, two networks A and B are equal if <b>all</b> of the following are true: 
 <ul>
    <li>A and B have equal <code>directedness</code>.
    <li>A and B have equal <code>node sets</code>.
    <li>A and B have equal <code>edge sets</code>.
    <li>Every edge in A and B connects the same nodes in the same direction (if any). 
 </ul>
  
 <p>Network properties besides <code>directedness</code> do <b>not</b> affect equality.
  For example, two networks may be considered equal even if one allows parallel edges and the
  other doesn't. Additionally, the order in which nodes or edges are added to the network, and
  the order in which they are iterated over, are irrelevant. 
 <p>A reference implementation of this is provided by <code>AbstractNetwork.equals(Object)</code>.
 */
- (jboolean)isEqual:(id __nullable)object;

/*!
 @brief Returns the hash code for this network.The hash code of a network is defined as the hash code
  of a map from each of its <code>edges</code> to their <code>incident nodes</code>
 .
 <p>A reference implementation of this is provided by <code>AbstractNetwork.hashCode()</code>.
 */
- (NSUInteger)hash;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphNetwork)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphNetwork)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphNetwork")
