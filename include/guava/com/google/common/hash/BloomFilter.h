//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/hash/BloomFilter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonHashBloomFilter")
#ifdef RESTRICT_ComGoogleCommonHashBloomFilter
#define INCLUDE_ALL_ComGoogleCommonHashBloomFilter 0
#else
#define INCLUDE_ALL_ComGoogleCommonHashBloomFilter 1
#endif
#undef RESTRICT_ComGoogleCommonHashBloomFilter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonHashBloomFilter_) && (INCLUDE_ALL_ComGoogleCommonHashBloomFilter || defined(INCLUDE_ComGoogleCommonHashBloomFilter))
#define ComGoogleCommonHashBloomFilter_

#define RESTRICT_ComGoogleCommonBasePredicate 1
#define INCLUDE_ComGoogleCommonBasePredicate 1
#include "com/google/common/base/Predicate.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaIoInputStream;
@class JavaIoOutputStream;
@protocol ComGoogleCommonHashBloomFilter_Strategy;
@protocol ComGoogleCommonHashFunnel;
@protocol JavaUtilFunctionPredicate;
@protocol JavaUtilStreamCollector;

/*!
 @brief A Bloom filter for instances of <code>T</code>.A Bloom filter offers an approximate containment test
  with one-sided error: if it claims that an element is contained in it, this might be in error,
  but if it claims that an element is <i>not</i> contained in it, then this is definitely true.
 <p>If you are unfamiliar with Bloom filters, this nice <a href="http://llimllib.github.com/bloomfilter-tutorial/">
 tutorial</a> may help you understand how
  they work. 
 <p>The false positive probability (<code>FPP</code>) of a Bloom filter is defined as the probability
  that mightContain(Object) will erroneously return <code>true</code> for an object that
  has not actually been put in the <code>BloomFilter</code>.
  
 <p>Bloom filters are serializable. They also support a more compact serial representation via the 
 <code>writeTo</code> and <code>readFrom</code> methods. Both serialized forms will continue to be
  supported by future versions of this library. However, serial forms generated by newer versions
  of the code may not be readable by older versions of the code (e.g., a serialized Bloom filter
  generated today may <i>not</i> be readable by a binary that was compiled 6 months ago). 
 <p>As of Guava 23.0, this class is thread-safe and lock-free. It internally uses atomics and
  compare-and-swap to ensure correctness when multiple threads are used to access it.
 @author Dimitris Andreou
 @author Kevin Bourrillion
 @since 11.0 (thread-safe since 23.0)
 */
@interface ComGoogleCommonHashBloomFilter : NSObject < ComGoogleCommonBasePredicate, JavaIoSerializable >

#pragma mark Public

/*!
 */
- (jboolean)applyWithId:(id)input __attribute__((deprecated));

/*!
 @brief Returns an estimate for the total number of distinct elements that have been added to this
  Bloom filter.This approximation is reasonably accurate if it does not exceed the value of 
 <code>expectedInsertions</code> that was used when constructing the filter.
 @since 22.0
 */
- (jlong)approximateElementCount;

/*!
 @brief Creates a new <code>BloomFilter</code> that's a copy of this instance.The new instance is equal to
  this instance but shares no mutable state.
 @since 12.0
 */
- (ComGoogleCommonHashBloomFilter *)copy__ OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates a <code>BloomFilter</code> with the expected number of insertions and a default expected
  false positive probability of 3%.
 <p>Note that overflowing a <code>BloomFilter</code> with significantly more elements than specified,
  will result in its saturation, and a sharp deterioration of its false positive probability. 
 <p>The constructed <code>BloomFilter</code> will be serializable if the provided <code>Funnel<T></code>
  is. 
 <p>It is recommended that the funnel be implemented as a Java enum. This has the benefit of
  ensuring proper serialization and deserialization, which is important since <code>equals</code>
  also relies on object identity of funnels.
 @param funnel the funnel of T's that the constructed <code>BloomFilter</code>  will use
 @param expectedInsertions the number of expected insertions to the constructed <code>BloomFilter</code>
  ; must be positive
 @return a <code>BloomFilter</code>
 */
+ (ComGoogleCommonHashBloomFilter *)createWithComGoogleCommonHashFunnel:(id<ComGoogleCommonHashFunnel>)funnel
                                                                withInt:(jint)expectedInsertions;

/*!
 @brief Creates a <code>BloomFilter</code> with the expected number of insertions and expected false
  positive probability.
 <p>Note that overflowing a <code>BloomFilter</code> with significantly more elements than specified,
  will result in its saturation, and a sharp deterioration of its false positive probability. 
 <p>The constructed <code>BloomFilter</code> will be serializable if the provided <code>Funnel<T></code>
  is. 
 <p>It is recommended that the funnel be implemented as a Java enum. This has the benefit of
  ensuring proper serialization and deserialization, which is important since <code>equals</code>
  also relies on object identity of funnels.
 @param funnel the funnel of T's that the constructed <code>BloomFilter</code>  will use
 @param expectedInsertions the number of expected insertions to the constructed <code>BloomFilter</code>
  ; must be positive
 @param fpp the desired false positive probability (must be positive and less than 1.0)
 @return a <code>BloomFilter</code>
 */
+ (ComGoogleCommonHashBloomFilter *)createWithComGoogleCommonHashFunnel:(id<ComGoogleCommonHashFunnel>)funnel
                                                                withInt:(jint)expectedInsertions
                                                             withDouble:(jdouble)fpp;

/*!
 @brief Creates a <code>BloomFilter</code> with the expected number of insertions and a default expected
  false positive probability of 3%.
 <p>Note that overflowing a <code>BloomFilter</code> with significantly more elements than specified,
  will result in its saturation, and a sharp deterioration of its false positive probability. 
 <p>The constructed <code>BloomFilter</code> will be serializable if the provided <code>Funnel<T></code>
  is. 
 <p>It is recommended that the funnel be implemented as a Java enum. This has the benefit of
  ensuring proper serialization and deserialization, which is important since <code>equals</code>
  also relies on object identity of funnels.
 @param funnel the funnel of T's that the constructed <code>BloomFilter</code>  will use
 @param expectedInsertions the number of expected insertions to the constructed <code>BloomFilter</code>
  ; must be positive
 @return a <code>BloomFilter</code>
 @since 19.0
 */
+ (ComGoogleCommonHashBloomFilter *)createWithComGoogleCommonHashFunnel:(id<ComGoogleCommonHashFunnel>)funnel
                                                               withLong:(jlong)expectedInsertions;

/*!
 @brief Creates a <code>BloomFilter</code> with the expected number of insertions and expected false
  positive probability.
 <p>Note that overflowing a <code>BloomFilter</code> with significantly more elements than specified,
  will result in its saturation, and a sharp deterioration of its false positive probability. 
 <p>The constructed <code>BloomFilter</code> will be serializable if the provided <code>Funnel<T></code>
  is. 
 <p>It is recommended that the funnel be implemented as a Java enum. This has the benefit of
  ensuring proper serialization and deserialization, which is important since <code>equals</code>
  also relies on object identity of funnels.
 @param funnel the funnel of T's that the constructed <code>BloomFilter</code>  will use
 @param expectedInsertions the number of expected insertions to the constructed <code>BloomFilter</code>
  ; must be positive
 @param fpp the desired false positive probability (must be positive and less than 1.0)
 @return a <code>BloomFilter</code>
 @since 19.0
 */
+ (ComGoogleCommonHashBloomFilter *)createWithComGoogleCommonHashFunnel:(id<ComGoogleCommonHashFunnel>)funnel
                                                               withLong:(jlong)expectedInsertions
                                                             withDouble:(jdouble)fpp;

- (jboolean)isEqual:(id __nullable)object;

/*!
 @brief Returns the probability that mightContain(Object) will erroneously return <code>true</code>
  for an object that has not actually been put in the <code>BloomFilter</code>.
 <p>Ideally, this number should be close to the <code>fpp</code> parameter passed in create(Funnel, int, double)
 , or smaller. If it is significantly higher, it is usually the
  case that too many elements (more than expected) have been put in the <code>BloomFilter</code>,
  degenerating it.
 @since 14.0 (since 11.0 as expectedFalsePositiveProbability())
 */
- (jdouble)expectedFpp;

- (NSUInteger)hash;

/*!
 @brief Determines whether a given Bloom filter is compatible with this Bloom filter.For two Bloom
  filters to be compatible, they must: 
 <ul>
    <li>not be the same instance
    <li>have the same number of hash functions
    <li>have the same bit size
    <li>have the same strategy
    <li>have equal funnels 
 </ul>
 @param that The Bloom filter to check for compatibility.
 @since 15.0
 */
- (jboolean)isCompatibleWithComGoogleCommonHashBloomFilter:(ComGoogleCommonHashBloomFilter *)that;

/*!
 @brief Returns <code>true</code> if the element <i>might</i> have been put in this Bloom filter, <code>false</code>
  if this is <i>definitely</i> not the case.
 */
- (jboolean)mightContainWithId:(id)object;

/*!
 @brief Puts an element into this <code>BloomFilter</code>.Ensures that subsequent invocations of <code>mightContain(Object)</code>
  with the same element will always return <code>true</code>.
 @return true if the Bloom filter's bits changed as a result of this operation. If the bits
      changed, this is <i>definitely</i> the first time <code>object</code> has been added to the
      filter. If the bits haven't changed, this <i>might</i> be the first time <code>object</code> has
      been added to the filter. Note that <code>put(t)</code> always returns the <i>opposite</i>
      result to what <code>mightContain(t)</code> would have returned at the time it is called.
 @since 12.0 (present in 11.0 with <code>void</code> return type})
 */
- (jboolean)putWithId:(id)object;

/*!
 @brief Combines this Bloom filter with another Bloom filter by performing a bitwise OR of the
  underlying data.The mutations happen to <b>this</b> instance.
 Callers must ensure the Bloom
  filters are appropriately sized to avoid saturating them.
 @param that The Bloom filter to combine this Bloom filter with. It is not mutated.
 @throw IllegalArgumentExceptionif <code>isCompatible(that) == false</code>
 @since 15.0
 */
- (void)putAllWithComGoogleCommonHashBloomFilter:(ComGoogleCommonHashBloomFilter *)that;

/*!
 @brief Reads a byte stream, which was written by writeTo(OutputStream), into a <code>BloomFilter</code>
 .
 <p>The <code>Funnel</code> to be used is not encoded in the stream, so it must be provided here. 
 <b>Warning:</b> the funnel provided <b>must</b> behave identically to the one used to populate
  the original Bloom filter!
 @throw IOExceptionif the InputStream throws an <code>IOException</code>, or if its data does not
      appear to be a BloomFilter serialized using the writeTo(OutputStream) method.
 */
+ (ComGoogleCommonHashBloomFilter *)readFromWithJavaIoInputStream:(JavaIoInputStream *)inArg
                                    withComGoogleCommonHashFunnel:(id<ComGoogleCommonHashFunnel>)funnel;

/*!
 @brief Returns a <code>Collector</code> expecting the specified number of insertions, and yielding a <code>BloomFilter</code>
  with false positive probability 3%.
 <p>Note that if the <code>Collector</code> receives significantly more elements than specified, the
  resulting <code>BloomFilter</code> will suffer a sharp deterioration of its false positive
  probability. 
 <p>The constructed <code>BloomFilter</code> will be serializable if the provided <code>Funnel<T></code>
  is. 
 <p>It is recommended that the funnel be implemented as a Java enum. This has the benefit of
  ensuring proper serialization and deserialization, which is important since <code>equals</code>
  also relies on object identity of funnels.
 @param funnel the funnel of T's that the constructed <code>BloomFilter</code>  will use
 @param expectedInsertions the number of expected insertions to the constructed <code>BloomFilter</code>
  ; must be positive
 @return a <code>Collector</code> generating a <code>BloomFilter</code> of the received elements
 @since 23.0
 */
+ (id<JavaUtilStreamCollector>)toBloomFilterWithComGoogleCommonHashFunnel:(id<ComGoogleCommonHashFunnel>)funnel
                                                                 withLong:(jlong)expectedInsertions;

/*!
 @brief Returns a <code>Collector</code> expecting the specified number of insertions, and yielding a <code>BloomFilter</code>
  with the specified expected false positive probability.
 <p>Note that if the <code>Collector</code> receives significantly more elements than specified, the
  resulting <code>BloomFilter</code> will suffer a sharp deterioration of its false positive
  probability. 
 <p>The constructed <code>BloomFilter</code> will be serializable if the provided <code>Funnel<T></code>
  is. 
 <p>It is recommended that the funnel be implemented as a Java enum. This has the benefit of
  ensuring proper serialization and deserialization, which is important since <code>equals</code>
  also relies on object identity of funnels.
 @param funnel the funnel of T's that the constructed <code>BloomFilter</code>  will use
 @param expectedInsertions the number of expected insertions to the constructed <code>BloomFilter</code>
  ; must be positive
 @param fpp the desired false positive probability (must be positive and less than 1.0)
 @return a <code>Collector</code> generating a <code>BloomFilter</code> of the received elements
 @since 23.0
 */
+ (id<JavaUtilStreamCollector>)toBloomFilterWithComGoogleCommonHashFunnel:(id<ComGoogleCommonHashFunnel>)funnel
                                                                 withLong:(jlong)expectedInsertions
                                                               withDouble:(jdouble)fpp;

/*!
 @brief Writes this <code>BloomFilter</code> to an output stream, with a custom format (not Java
  serialization).This has been measured to save at least 400 bytes compared to regular
  serialization.
 <p>Use readFrom(InputStream, Funnel) to reconstruct the written BloomFilter.
 */
- (void)writeToWithJavaIoOutputStream:(JavaIoOutputStream *)outArg;

#pragma mark Package-Private

/*!
 @brief Returns the number of bits in the underlying bit array.
 */
- (jlong)bitSize;

+ (ComGoogleCommonHashBloomFilter *)createWithComGoogleCommonHashFunnel:(id<ComGoogleCommonHashFunnel>)funnel
                                                               withLong:(jlong)expectedInsertions
                                                             withDouble:(jdouble)fpp
                            withComGoogleCommonHashBloomFilter_Strategy:(id<ComGoogleCommonHashBloomFilter_Strategy>)strategy;

/*!
 @brief Computes m (total bits of Bloom filter) which is expected to achieve, for the specified
  expected insertions, the required false positive probability.
 <p>See http://en.wikipedia.org/wiki/Bloom_filter#Probability_of_false_positives for the
  formula.
 @param n expected insertions (must be positive)
 @param p false positive rate (must be 0  <  p  <  1)
 */
+ (jlong)optimalNumOfBitsWithLong:(jlong)n
                       withDouble:(jdouble)p;

/*!
 @brief Computes the optimal k (number of hashes per element inserted in Bloom filter), given the
  expected insertions and total number of bits in the Bloom filter.
 <p>See http://en.wikipedia.org/wiki/File:Bloom_filter_fp_probability.svg for the formula.
 @param n expected insertions (must be positive)
 @param m total number of bits in Bloom filter (must be positive)
 */
+ (jint)optimalNumOfHashFunctionsWithLong:(jlong)n
                                 withLong:(jlong)m;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashBloomFilter)

FOUNDATION_EXPORT id<JavaUtilStreamCollector> ComGoogleCommonHashBloomFilter_toBloomFilterWithComGoogleCommonHashFunnel_withLong_(id<ComGoogleCommonHashFunnel> funnel, jlong expectedInsertions);

FOUNDATION_EXPORT id<JavaUtilStreamCollector> ComGoogleCommonHashBloomFilter_toBloomFilterWithComGoogleCommonHashFunnel_withLong_withDouble_(id<ComGoogleCommonHashFunnel> funnel, jlong expectedInsertions, jdouble fpp);

FOUNDATION_EXPORT ComGoogleCommonHashBloomFilter *ComGoogleCommonHashBloomFilter_createWithComGoogleCommonHashFunnel_withInt_withDouble_(id<ComGoogleCommonHashFunnel> funnel, jint expectedInsertions, jdouble fpp);

FOUNDATION_EXPORT ComGoogleCommonHashBloomFilter *ComGoogleCommonHashBloomFilter_createWithComGoogleCommonHashFunnel_withLong_withDouble_(id<ComGoogleCommonHashFunnel> funnel, jlong expectedInsertions, jdouble fpp);

FOUNDATION_EXPORT ComGoogleCommonHashBloomFilter *ComGoogleCommonHashBloomFilter_createWithComGoogleCommonHashFunnel_withLong_withDouble_withComGoogleCommonHashBloomFilter_Strategy_(id<ComGoogleCommonHashFunnel> funnel, jlong expectedInsertions, jdouble fpp, id<ComGoogleCommonHashBloomFilter_Strategy> strategy);

FOUNDATION_EXPORT ComGoogleCommonHashBloomFilter *ComGoogleCommonHashBloomFilter_createWithComGoogleCommonHashFunnel_withInt_(id<ComGoogleCommonHashFunnel> funnel, jint expectedInsertions);

FOUNDATION_EXPORT ComGoogleCommonHashBloomFilter *ComGoogleCommonHashBloomFilter_createWithComGoogleCommonHashFunnel_withLong_(id<ComGoogleCommonHashFunnel> funnel, jlong expectedInsertions);

FOUNDATION_EXPORT jint ComGoogleCommonHashBloomFilter_optimalNumOfHashFunctionsWithLong_withLong_(jlong n, jlong m);

FOUNDATION_EXPORT jlong ComGoogleCommonHashBloomFilter_optimalNumOfBitsWithLong_withDouble_(jlong n, jdouble p);

FOUNDATION_EXPORT ComGoogleCommonHashBloomFilter *ComGoogleCommonHashBloomFilter_readFromWithJavaIoInputStream_withComGoogleCommonHashFunnel_(JavaIoInputStream *inArg, id<ComGoogleCommonHashFunnel> funnel);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashBloomFilter)

#endif

#if !defined (ComGoogleCommonHashBloomFilter_Strategy_) && (INCLUDE_ALL_ComGoogleCommonHashBloomFilter || defined(INCLUDE_ComGoogleCommonHashBloomFilter_Strategy))
#define ComGoogleCommonHashBloomFilter_Strategy_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray;
@protocol ComGoogleCommonHashFunnel;

/*!
 @brief A strategy to translate T instances, to <code>numHashFunctions</code> bit indexes.
 <p>Implementations should be collections of pure functions (i.e. stateless).
 */
@protocol ComGoogleCommonHashBloomFilter_Strategy < JavaIoSerializable, JavaObject >

/*!
 @brief Sets <code>numHashFunctions</code> bits of the given bit array, by hashing a user element.
 <p>Returns whether any bits changed as a result of this operation.
 */
- (jboolean)putWithId:(id)object
withComGoogleCommonHashFunnel:(id<ComGoogleCommonHashFunnel>)funnel
              withInt:(jint)numHashFunctions
withComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray:(ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray *)bits;

/*!
 @brief Queries <code>numHashFunctions</code> bits of the given bit array, by hashing a user element;
  returns <code>true</code> if and only if all selected bits are set.
 */
- (jboolean)mightContainWithId:(id)object
 withComGoogleCommonHashFunnel:(id<ComGoogleCommonHashFunnel>)funnel
                       withInt:(jint)numHashFunctions
withComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray:(ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray *)bits;

/*!
 @brief Identifier used to encode this strategy, when marshalled as part of a BloomFilter.Only
  values in the [-128, 127] range are valid for the compact serial form.
 Non-negative values
  are reserved for enums defined in BloomFilterStrategies; negative values are reserved for any
  custom, stateful strategy we may define (e.g. any kind of strategy that would depend on user
  input).
 */
- (jint)ordinal;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashBloomFilter_Strategy)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashBloomFilter_Strategy)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonHashBloomFilter")