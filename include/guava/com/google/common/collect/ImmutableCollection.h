//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/ImmutableCollection.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableCollection")
#ifdef RESTRICT_ComGoogleCommonCollectImmutableCollection
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableCollection 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableCollection 1
#endif
#undef RESTRICT_ComGoogleCommonCollectImmutableCollection

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectImmutableCollection_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableCollection || defined(INCLUDE_ComGoogleCommonCollectImmutableCollection))
#define ComGoogleCommonCollectImmutableCollection_

#define RESTRICT_JavaUtilAbstractCollection 1
#define INCLUDE_JavaUtilAbstractCollection 1
#include "java/util/AbstractCollection.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectUnmodifiableIterator;
@class IOSObjectArray;
@protocol JavaUtilCollection;
@protocol JavaUtilFunctionPredicate;
@protocol JavaUtilSpliterator;

/*!
 @brief A <code>Collection</code> whose contents will never change, and which offers a few additional
  guarantees detailed below.
 <p><b>Warning:</b> avoid <i>direct</i> usage of <code>ImmutableCollection</code> as a type (just as
  with <code>Collection</code> itself). Prefer subtypes such as <code>ImmutableSet</code> or <code>ImmutableList</code>
 , which have well-defined <code>equals</code> semantics, thus avoiding a common source
  of bugs and confusion. 
 <h3>About <i>all</i> <code>Immutable-</code> collections</h3>
  
 <p>The remainder of this documentation applies to every public <code>Immutable-</code> type in this
  package, whether it is a subtype of <code>ImmutableCollection</code> or not. 
 <h4>Guarantees</h4>
  
 <p>Each makes the following guarantees: 
 <ul>
    <li><b>Shallow immutability.</b> Elements can never be added, removed or replaced in this
        collection. This is a stronger guarantee than that of <code>Collections.unmodifiableCollection</code>
 , whose contents change whenever the wrapped collection
        is modified.   
 <li><b>Null-hostility.</b> This collection will never contain a null element.
    <li><b>Deterministic iteration.</b> The iteration order is always well-defined, depending on
        how the collection was created. Typically this is insertion order unless an explicit
        ordering is otherwise specified (e.g. <code>ImmutableSortedSet.naturalOrder</code>). See the
        appropriate factory method for details. View collections such as <code>ImmutableMultiset.elementSet</code>
  iterate in the same order as the parent, except as noted.
    <li><b>Thread safety.</b> It is safe to access this collection concurrently from multiple
        threads.   
 <li><b>Integrity.</b> This type cannot be subclassed outside this package (which would allow
        these guarantees to be violated). 
 </ul>
  
 <h4>"Interfaces", not implementations</h4>
  
 <p>These are classes instead of interfaces to prevent external subtyping, but should be thought
  of as interfaces in every important sense. Each public class such as <code>ImmutableSet</code> is a 
 <i>type</i> offering meaningful behavioral guarantees. This is substantially different from the
  case of (say) <code>HashSet</code>, which is an <i>implementation</i>, with semantics that were
  largely defined by its supertype. 
 <p>For field types and method return types, you should generally use the immutable type (such as 
 <code>ImmutableList</code>) instead of the general collection interface type (such as <code>List</code>).
  This communicates to your callers all of the semantic guarantees listed above, which is almost
  always very useful information. 
 <p>On the other hand, a <i>parameter</i> type of <code>ImmutableList</code> is generally a nuisance to
  callers. Instead, accept <code>Iterable</code> and have your method or constructor body pass it to the
  appropriate <code>copyOf</code> method itself. 
 <p>Expressing the immutability guarantee directly in the type that user code references is a
  powerful advantage. Although Java 9 offers certain immutable collection factory methods, like <a href="https://docs.oracle.com/javase/9/docs/api/java/util/Set.html#immutable">
 <code>Set.of</code></a>,
  we recommend continuing to use these immutable collection classes for this reason. 
 <h4>Creation</h4>
  
 <p>Except for logically "abstract" types like <code>ImmutableCollection</code> itself, each <code>Immutable</code>
  type provides the static operations you need to obtain instances of that type. These
  usually include: 
 <ul>
    <li>Static methods named <code>of</code>, accepting an explicit list of elements or entries.
    <li>Static methods named <code>copyOf</code> (or <code>copyOfSorted</code>), accepting an existing
        collection whose contents should be copied.   
 <li>A static nested <code>Builder</code> class which can be used to populate a new immutable
        instance. 
 </ul>
  
 <h4>Warnings</h4>
  
 <ul>
    <li><b>Warning:</b> as with any collection, it is almost always a bad idea to modify an element
        (in a way that affects its <code>Object.equals</code> behavior) while it is contained in a
        collection. Undefined behavior and bugs will result. It's generally best to avoid using
        mutable objects as elements at all, as many users may expect your "immutable" object to be       
 <i>deeply</i> immutable. 
 </ul>
  
 <h4>Performance notes</h4>
  
 <ul>
    <li>Implementations can be generally assumed to prioritize memory efficiency, then speed of
        access, and lastly speed of creation.   
 <li>The <code>copyOf</code> methods will sometimes recognize that the actual copy operation is
        unnecessary; for example, <code>copyOf(copyOf(anArrayList))</code> should copy the data only
        once. This reduces the expense of habitually making defensive copies at API boundaries.
        However, the precise conditions for skipping the copy operation are undefined.   
 <li><b>Warning:</b> a view collection such as <code>ImmutableMap.keySet</code> or <code>ImmutableList.subList</code>
  may retain a reference to the entire data set, preventing it from
        being garbage collected. If some of the data is no longer reachable through other means,
        this constitutes a memory leak. Pass the view collection to the appropriate <code>copyOf</code>
        method to obtain a correctly-sized copy.   
 <li>The performance of using the associated <code>Builder</code> class can be assumed to be no
        worse, and possibly better, than creating a mutable collection and copying it.   
 <li>Implementations generally do not cache hash codes. If your element or key type has a slow
        <code>hashCode</code> implementation, it should cache it itself. 
 </ul>
  
 <h4>Example usage</h4>
  
 @code
 class Foo {
    private static final ImmutableSet<String> RESERVED_CODES =
        ImmutableSet.of("AZ", "CQ", "ZX");
    private final ImmutableSet<String> codes;
    public Foo(Iterable<String> codes) {
      this.codes = ImmutableSet.copyOf(codes);
      checkArgument(Collections.disjoint(this.codes, RESERVED_CODES));
    }  }  
 
@endcode
  
 <h3>See also</h3>
  
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/ImmutableCollectionsExplained">
  immutable collections</a>.
 @since 2.0
 */
@interface ComGoogleCommonCollectImmutableCollection : JavaUtilAbstractCollection < JavaIoSerializable >
@property (readonly, class) jint SPLITERATOR_CHARACTERISTICS NS_SWIFT_NAME(SPLITERATOR_CHARACTERISTICS);

+ (jint)SPLITERATOR_CHARACTERISTICS;

#pragma mark Public

/*!
 @brief Guaranteed to throw an exception and leave the collection unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (jboolean)addWithId:(id)e __attribute__((deprecated));

/*!
 @brief Guaranteed to throw an exception and leave the collection unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)newElements __attribute__((deprecated));

/*!
 @brief Returns an <code>ImmutableList</code> containing the same elements, in the same order, as this
  collection.
 <p><b>Performance note:</b> in most cases this method can return quickly without actually
  copying anything. The exact circumstances under which the copy is performed are undefined and
  subject to change.
 @since 2.0
 */
- (ComGoogleCommonCollectImmutableList *)asList;

/*!
 @brief Guaranteed to throw an exception and leave the collection unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (void)clear __attribute__((deprecated));

- (jboolean)containsWithId:(id __nullable)object;

/*!
 @brief Returns an unmodifiable iterator across the elements in this collection.
 */
- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

/*!
 @brief Guaranteed to throw an exception and leave the collection unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (jboolean)removeWithId:(id)object __attribute__((deprecated));

/*!
 @brief Guaranteed to throw an exception and leave the collection unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)oldElements __attribute__((deprecated));

/*!
 @brief Guaranteed to throw an exception and leave the collection unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (jboolean)removeIfWithJavaUtilFunctionPredicate:(id<JavaUtilFunctionPredicate>)filter __attribute__((deprecated));

/*!
 @brief Guaranteed to throw an exception and leave the collection unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)elementsToKeep __attribute__((deprecated));

- (id<JavaUtilSpliterator>)spliterator;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)other;

#pragma mark Package-Private

- (instancetype __nonnull)init;

/*!
 @brief Copies the contents of this immutable collection into the specified array at the specified
  offset.Returns <code>offset + size()</code>.
 */
- (jint)copyIntoArrayWithNSObjectArray:(IOSObjectArray *)dst
                               withInt:(jint)offset OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns <code>true</code> if this immutable collection's implementation contains references to
  user-created objects that aren't accessible via this collection's methods.This is generally
  used to determine whether <code>copyOf</code> implementations should make an explicit copy to avoid
  memory leaks.
 */
- (jboolean)isPartialView;

- (id)writeReplace;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectImmutableCollection)

inline jint ComGoogleCommonCollectImmutableCollection_get_SPLITERATOR_CHARACTERISTICS(void);
#define ComGoogleCommonCollectImmutableCollection_SPLITERATOR_CHARACTERISTICS 1296
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonCollectImmutableCollection, SPLITERATOR_CHARACTERISTICS, jint)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableCollection_init(ComGoogleCommonCollectImmutableCollection *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableCollection)

#endif

#if !defined (ComGoogleCommonCollectImmutableCollection_Builder_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableCollection || defined(INCLUDE_ComGoogleCommonCollectImmutableCollection_Builder))
#define ComGoogleCommonCollectImmutableCollection_Builder_

@class ComGoogleCommonCollectImmutableCollection;
@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol JavaUtilIterator;

/*!
 @brief Abstract base class for builders of <code>ImmutableCollection</code> types.
 @since 10.0
 */
@interface ComGoogleCommonCollectImmutableCollection_Builder : NSObject
@property (readonly, class) jint DEFAULT_INITIAL_CAPACITY NS_SWIFT_NAME(DEFAULT_INITIAL_CAPACITY);

+ (jint)DEFAULT_INITIAL_CAPACITY;

#pragma mark Public

/*!
 @brief Adds <code>element</code> to the <code>ImmutableCollection</code> being built.
 <p>Note that each builder class covariantly returns its own type from this method.
 @param element the element to add
 @return this <code>Builder</code> instance
 @throw NullPointerExceptionif <code>element</code> is null
 */
- (ComGoogleCommonCollectImmutableCollection_Builder *)addWithId:(id)element;

/*!
 @brief Adds each element of <code>elements</code> to the <code>ImmutableCollection</code> being built.
 <p>Note that each builder class overrides this method in order to covariantly return its own
  type.
 @param elements the elements to add
 @return this <code>Builder</code> instance
 @throw NullPointerExceptionif <code>elements</code> is null or contains a null element
 */
- (ComGoogleCommonCollectImmutableCollection_Builder *)addWithNSObjectArray:(IOSObjectArray *)elements;

/*!
 @brief Adds each element of <code>elements</code> to the <code>ImmutableCollection</code> being built.
 <p>Note that each builder class overrides this method in order to covariantly return its own
  type.
 @param elements the elements to add
 @return this <code>Builder</code> instance
 @throw NullPointerExceptionif <code>elements</code> is null or contains a null element
 */
- (ComGoogleCommonCollectImmutableCollection_Builder *)addAllWithJavaLangIterable:(id<JavaLangIterable>)elements;

/*!
 @brief Adds each element of <code>elements</code> to the <code>ImmutableCollection</code> being built.
 <p>Note that each builder class overrides this method in order to covariantly return its own
  type.
 @param elements the elements to add
 @return this <code>Builder</code> instance
 @throw NullPointerExceptionif <code>elements</code> is null or contains a null element
 */
- (ComGoogleCommonCollectImmutableCollection_Builder *)addAllWithJavaUtilIterator:(id<JavaUtilIterator>)elements;

/*!
 @brief Returns a newly-created <code>ImmutableCollection</code> of the appropriate type, containing the
  elements provided to this builder.
 <p>Note that each builder class covariantly returns the appropriate type of <code>ImmutableCollection</code>
  from this method.
 */
- (ComGoogleCommonCollectImmutableCollection *)build;

#pragma mark Package-Private

- (instancetype __nonnull)init;

+ (jint)expandedCapacityWithInt:(jint)oldCapacity
                        withInt:(jint)minCapacity;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableCollection_Builder)

inline jint ComGoogleCommonCollectImmutableCollection_Builder_get_DEFAULT_INITIAL_CAPACITY(void);
#define ComGoogleCommonCollectImmutableCollection_Builder_DEFAULT_INITIAL_CAPACITY 4
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonCollectImmutableCollection_Builder, DEFAULT_INITIAL_CAPACITY, jint)

FOUNDATION_EXPORT jint ComGoogleCommonCollectImmutableCollection_Builder_expandedCapacityWithInt_withInt_(jint oldCapacity, jint minCapacity);

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableCollection_Builder_init(ComGoogleCommonCollectImmutableCollection_Builder *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableCollection_Builder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableCollection")
