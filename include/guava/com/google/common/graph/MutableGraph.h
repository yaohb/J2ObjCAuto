//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/graph/MutableGraph.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphMutableGraph")
#ifdef RESTRICT_ComGoogleCommonGraphMutableGraph
#define INCLUDE_ALL_ComGoogleCommonGraphMutableGraph 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphMutableGraph 1
#endif
#undef RESTRICT_ComGoogleCommonGraphMutableGraph

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphMutableGraph_) && (INCLUDE_ALL_ComGoogleCommonGraphMutableGraph || defined(INCLUDE_ComGoogleCommonGraphMutableGraph))
#define ComGoogleCommonGraphMutableGraph_

#define RESTRICT_ComGoogleCommonGraphGraph 1
#define INCLUDE_ComGoogleCommonGraphGraph 1
#include "com/google/common/graph/Graph.h"

/*!
 @brief A subinterface of <code>Graph</code> which adds mutation methods.When mutation is not required, users
  should prefer the <code>Graph</code> interface.
 @author James Sexton
 @author Joshua O'Madadhain
 @since 20.0
 */
@protocol ComGoogleCommonGraphMutableGraph < ComGoogleCommonGraphGraph, JavaObject >

/*!
 @brief Adds <code>node</code> if it is not already present.
 <p><b>Nodes must be unique</b>, just as <code>Map</code> keys must be. They must also be non-null.
 @return <code>true</code> if the graph was modified as a result of this call
 */
- (jboolean)addNodeWithId:(id)node;

/*!
 @brief Adds an edge connecting <code>nodeU</code> to <code>nodeV</code> if one is not already present.In an
  undirected graph, the edge will also connect <code>nodeV</code> to <code>nodeU</code>.
 <p>If <code>nodeU</code> and <code>nodeV</code> are not already present in this graph, this method will
  silently <code>add</code> <code>nodeU</code> and <code>nodeV</code> to the graph.
 @return <code>true</code> if the graph was modified as a result of this call
 @throw IllegalArgumentExceptionif the introduction of the edge would violate <code>allowsSelfLoops()</code>
 */
- (jboolean)putEdgeWithId:(id)nodeU
                   withId:(id)nodeV;

/*!
 @brief Removes <code>node</code> if it is present; all edges incident to <code>node</code> will also be removed.
 @return <code>true</code> if the graph was modified as a result of this call
 */
- (jboolean)removeNodeWithId:(id)node;

/*!
 @brief Removes the edge connecting <code>nodeU</code> to <code>nodeV</code>, if it is present.
 @return <code>true</code> if the graph was modified as a result of this call
 */
- (jboolean)removeEdgeWithId:(id)nodeU
                      withId:(id)nodeV;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphMutableGraph)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphMutableGraph)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphMutableGraph")