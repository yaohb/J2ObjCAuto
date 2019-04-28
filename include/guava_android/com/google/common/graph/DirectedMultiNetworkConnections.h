//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/com/google/common/graph/DirectedMultiNetworkConnections.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphDirectedMultiNetworkConnections")
#ifdef RESTRICT_ComGoogleCommonGraphDirectedMultiNetworkConnections
#define INCLUDE_ALL_ComGoogleCommonGraphDirectedMultiNetworkConnections 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphDirectedMultiNetworkConnections 1
#endif
#undef RESTRICT_ComGoogleCommonGraphDirectedMultiNetworkConnections

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphDirectedMultiNetworkConnections_) && (INCLUDE_ALL_ComGoogleCommonGraphDirectedMultiNetworkConnections || defined(INCLUDE_ComGoogleCommonGraphDirectedMultiNetworkConnections))
#define ComGoogleCommonGraphDirectedMultiNetworkConnections_

#define RESTRICT_ComGoogleCommonGraphAbstractDirectedNetworkConnections 1
#define INCLUDE_ComGoogleCommonGraphAbstractDirectedNetworkConnections 1
#include "com/google/common/graph/AbstractDirectedNetworkConnections.h"

@protocol JavaUtilMap;
@protocol JavaUtilSet;

/*!
 @brief An implementation of <code>NetworkConnections</code> for directed networks with parallel edges.
 @author James Sexton
 */
@interface ComGoogleCommonGraphDirectedMultiNetworkConnections : ComGoogleCommonGraphAbstractDirectedNetworkConnections

#pragma mark Public

- (void)addInEdgeWithId:(id)edge
                 withId:(id)node
            withBoolean:(jboolean)isSelfLoop;

- (void)addOutEdgeWithId:(id)edge
                  withId:(id)node;

- (id<JavaUtilSet>)edgesConnectingWithId:(id)node;

- (id<JavaUtilSet>)predecessors;

- (id)removeInEdgeWithId:(id)edge
             withBoolean:(jboolean)isSelfLoop;

- (id)removeOutEdgeWithId:(id)edge;

- (id<JavaUtilSet>)successors;

#pragma mark Package-Private

+ (ComGoogleCommonGraphDirectedMultiNetworkConnections *)of;

+ (ComGoogleCommonGraphDirectedMultiNetworkConnections *)ofImmutableWithJavaUtilMap:(id<JavaUtilMap>)inEdges
                                                                    withJavaUtilMap:(id<JavaUtilMap>)outEdges
                                                                            withInt:(jint)selfLoopCount;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphDirectedMultiNetworkConnections)

FOUNDATION_EXPORT ComGoogleCommonGraphDirectedMultiNetworkConnections *ComGoogleCommonGraphDirectedMultiNetworkConnections_of(void);

FOUNDATION_EXPORT ComGoogleCommonGraphDirectedMultiNetworkConnections *ComGoogleCommonGraphDirectedMultiNetworkConnections_ofImmutableWithJavaUtilMap_withJavaUtilMap_withInt_(id<JavaUtilMap> inEdges, id<JavaUtilMap> outEdges, jint selfLoopCount);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphDirectedMultiNetworkConnections)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphDirectedMultiNetworkConnections")
