//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/answers/ReturnsElementsOf.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalStubbingAnswersReturnsElementsOf")
#ifdef RESTRICT_OrgMockitoInternalStubbingAnswersReturnsElementsOf
#define INCLUDE_ALL_OrgMockitoInternalStubbingAnswersReturnsElementsOf 0
#else
#define INCLUDE_ALL_OrgMockitoInternalStubbingAnswersReturnsElementsOf 1
#endif
#undef RESTRICT_OrgMockitoInternalStubbingAnswersReturnsElementsOf

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalStubbingAnswersReturnsElementsOf_) && (INCLUDE_ALL_OrgMockitoInternalStubbingAnswersReturnsElementsOf || defined(INCLUDE_OrgMockitoInternalStubbingAnswersReturnsElementsOf))
#define OrgMockitoInternalStubbingAnswersReturnsElementsOf_

#define RESTRICT_OrgMockitoStubbingAnswer 1
#define INCLUDE_OrgMockitoStubbingAnswer 1
#include "org/mockito/stubbing/Answer.h"

@protocol JavaUtilCollection;
@protocol OrgMockitoInvocationInvocationOnMock;

/*!
 @brief Returns elements of the collection.Keeps returning the last element forever.
 Might be useful on occasion when you have a collection of elements to return. 
 <p>
  <pre class="code"><code class="java">
    //this:
    when(mock.foo()).thenReturn(1, 2, 3);
    //is equivalent to:
    when(mock.foo()).thenAnswer(new ReturnsElementsOf(Arrays.asList(1, 2, 3))); 
 </code>
@endcode
  </p>
  
 <p>
  Also you might better want to use the static factory there 
 <code>org.mockito.AdditionalAnswers.returnsElementsOf(java.util.Collection)</code>
  </p>
 - seealso: org.mockito.AdditionalAnswers
 */
@interface OrgMockitoInternalStubbingAnswersReturnsElementsOf : NSObject < OrgMockitoStubbingAnswer >

#pragma mark Public

- (instancetype __nonnull)initWithJavaUtilCollection:(id<JavaUtilCollection>)elements;

- (id)answerWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingAnswersReturnsElementsOf)

FOUNDATION_EXPORT void OrgMockitoInternalStubbingAnswersReturnsElementsOf_initWithJavaUtilCollection_(OrgMockitoInternalStubbingAnswersReturnsElementsOf *self, id<JavaUtilCollection> elements);

FOUNDATION_EXPORT OrgMockitoInternalStubbingAnswersReturnsElementsOf *new_OrgMockitoInternalStubbingAnswersReturnsElementsOf_initWithJavaUtilCollection_(id<JavaUtilCollection> elements) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalStubbingAnswersReturnsElementsOf *create_OrgMockitoInternalStubbingAnswersReturnsElementsOf_initWithJavaUtilCollection_(id<JavaUtilCollection> elements);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingAnswersReturnsElementsOf)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalStubbingAnswersReturnsElementsOf")