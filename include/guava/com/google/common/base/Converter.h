//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/base/Converter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseConverter")
#ifdef RESTRICT_ComGoogleCommonBaseConverter
#define INCLUDE_ALL_ComGoogleCommonBaseConverter 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseConverter 1
#endif
#undef RESTRICT_ComGoogleCommonBaseConverter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBaseConverter_) && (INCLUDE_ALL_ComGoogleCommonBaseConverter || defined(INCLUDE_ComGoogleCommonBaseConverter))
#define ComGoogleCommonBaseConverter_

#define RESTRICT_ComGoogleCommonBaseFunction 1
#define INCLUDE_ComGoogleCommonBaseFunction 1
#include "com/google/common/base/Function.h"

@protocol JavaLangIterable;
@protocol JavaUtilFunctionFunction;

/*!
 @brief A function from <code>A</code> to <code>B</code> with an associated <i>reverse</i> function from <code>B</code>
  to <code>A</code>; used for converting back and forth between <i>different representations of the same
  information</i>.
 <h3>Invertibility</h3>
  
 <p>The reverse operation <b>may</b> be a strict <i>inverse</i> (meaning that <code>converter.reverse().convert(converter.convert(a)).equals(a)</code>
  is always true). However, it is very
  common (perhaps <i>more</i> common) for round-trip conversion to be <i>lossy</i>. Consider an
  example round-trip using <code>com.google.common.primitives.Doubles.stringConverter</code>:
  
 <ol>
    <li><code>stringConverter().convert("1.00")</code> returns the <code>Double</code> value <code>1.0</code>
    <li><code>stringConverter().reverse().convert(1.0)</code> returns the string <code>"1.0"</code> --
        <i>not</i> the same string (<code>"1.00"</code>) we started with 
 </ol>
  
 <p>Note that it should still be the case that the round-tripped and original objects are 
 <i>similar</i>.
  
 <h3>Nullability</h3>
  
 <p>A converter always converts <code>null</code> to <code>null</code> and non-null references to non-null
  references. It would not make sense to consider <code>null</code> and a non-null reference to be
  "different representations of the same information", since one is distinguishable from 
 <i>missing</i> information and the other is not. The <code>convert</code> method handles this null
  behavior for all converters; implementations of <code>doForward</code> and <code>doBackward</code> are
  guaranteed to never be passed <code>null</code>, and must never return <code>null</code>.
  
 <h3>Common ways to use</h3>
  
 <p>Getting a converter: 
 <ul>
    <li>Use a provided converter implementation, such as <code>Enums.stringConverter</code>, <code>Ints.stringConverter</code>
  or the reverse
  views of these.
    <li>Convert between specific preset values using <code>Maps.asConverter</code>
 . For example, use this to
        create a "fake" converter for a unit test. It is unnecessary (and confusing) to <i>mock</i>
        the <code>Converter</code> type using a mocking framework.
    <li>Extend this class and implement its <code>doForward</code> and <code>doBackward</code> methods.
    <li><b>Java 8 users:</b> you may prefer to pass two lambda expressions or method references to
        the <code>from</code> factory method. 
 </ul>
  
 <p>Using a converter: 
 <ul>
    <li>Convert one instance in the "forward" direction using <code>converter.convert(a)</code>.
    <li>Convert multiple instances "forward" using <code>converter.convertAll(as)</code>.
    <li>Convert in the "backward" direction using <code>converter.reverse().convert(b)</code> or <code>converter.reverse().convertAll(bs)</code>
 .
    <li>Use <code>converter</code> or <code>converter.reverse()</code> anywhere a <code>java.util.function.Function</code>
  is accepted (for example <code>Stream.map</code>
 ).
    <li><b>Do not</b> call <code>doForward</code> or <code>doBackward</code> directly; these exist only to
        be overridden. 
 </ul>
  
 <h3>Example</h3>
  
 @code

    return new Converter&lt;Integer, String&gt;() {
      protected String doForward(Integer i) {
        return Integer.toHexString(i);
      }
      protected Integer doBackward(String s) {
        return parseUnsignedInt(s, 16);
      }
    };
@endcode
  
 <p>An alternative using Java 8: 
 @code
 return Converter.from(
      Integer::toHexString,
      s -> parseUnsignedInt(s, 16)); 
 
@endcode
 @author Mike Ward
 @author Kurt Alfred Kluever
 @author Gregory Kick
 @since 16.0
 */
@interface ComGoogleCommonBaseConverter : NSObject < ComGoogleCommonBaseFunction >

#pragma mark Public

/*!
 @brief Returns a converter whose <code>convert</code> method applies <code>secondConverter</code> to the result
  of this converter.Its <code>reverse</code> method applies the converters in reverse order.
 <p>The returned converter is serializable if <code>this</code> converter and <code>secondConverter</code>
  are.
 */
- (ComGoogleCommonBaseConverter *)andThenWithComGoogleCommonBaseConverter:(ComGoogleCommonBaseConverter *)secondConverter;

/*!
 */
- (id)applyWithId:(id)a __attribute__((deprecated));

/*!
 @brief Returns a representation of <code>a</code> as an instance of type <code>B</code>.
 @return the converted value; is null <i>if and only if</i> <code>a</code> is null
 */
- (id)convertWithId:(id)a;

/*!
 @brief Returns an iterable that applies <code>convert</code> to each element of <code>fromIterable</code>.The
  conversion is done lazily.
 <p>The returned iterable's iterator supports <code>remove()</code> if the input iterator does. After
  a successful <code>remove()</code> call, <code>fromIterable</code> no longer contains the corresponding
  element.
 */
- (id<JavaLangIterable>)convertAllWithJavaLangIterable:(id<JavaLangIterable>)fromIterable;

/*!
 @brief Indicates whether another object is equal to this converter.
 <p>Most implementations will have no reason to override the behavior of <code>Object.equals</code>.
  However, an implementation may also choose to return <code>true</code> whenever <code>object</code> is a 
 <code>Converter</code> that it considers <i>interchangeable</i> with this one. "Interchangeable" 
 <i>typically</i> means that <code>Objects.equal(this.convert(a), that.convert(a))</code> is true for
  all <code>a</code> of type <code>A</code> (and similarly for <code>reverse</code>). Note that a <code>false</code>
  result from this method does not imply that the converters are known <i>not</i> to be
  interchangeable.
 */
- (jboolean)isEqual:(id __nullable)object;

/*!
 @brief Returns a converter based on separate forward and backward functions.This is useful if the
  function instances already exist, or so that you can supply lambda expressions.
 If those
  circumstances don't apply, you probably don't need to use this; subclass <code>Converter</code> and
  implement its <code>doForward</code> and <code>doBackward</code> methods directly. 
 <p>These functions will never be passed <code>null</code> and must not under any circumstances
  return <code>null</code>. If a value cannot be converted, the function should throw an unchecked
  exception (typically, but not necessarily, <code>IllegalArgumentException</code>).
  
 <p>The returned converter is serializable if both provided functions are.
 @since 17.0
 */
+ (ComGoogleCommonBaseConverter *)fromWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)forwardFunction
                                      withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)backwardFunction;

/*!
 @brief Returns a serializable converter that always converts or reverses an object to itself.
 */
+ (ComGoogleCommonBaseConverter *)identity;

/*!
 @brief Returns the reversed view of this converter, which converts <code>this.convert(a)</code> back to a
  value roughly equivalent to <code>a</code>.
 <p>The returned converter is serializable if <code>this</code> converter is. 
 <p><b>Note:</b> you should not override this method. It is non-final for legacy reasons.
 */
- (ComGoogleCommonBaseConverter *)reverse;

#pragma mark Protected

/*!
 @brief Constructor for use by subclasses.
 */
- (instancetype __nonnull)init;

/*!
 @brief Returns a representation of <code>b</code> as an instance of type <code>A</code>.If <code>b</code> cannot be
  converted, an unchecked exception (such as <code>IllegalArgumentException</code>) should be thrown.
 @param b the instance to convert; will never be null
 @return the converted instance; <b>must not</b> be null
 @throw UnsupportedOperationExceptionif backward conversion is not implemented; this should be
      very rare. Note that if backward conversion is not only unimplemented but
      unimplement<i>able</i> (for example, consider a <code>Converter<Chicken, ChickenNugget></code>),
      then this is not logically a <code>Converter</code> at all, and should just implement <code>Function</code>
 .
 */
- (id)doBackwardWithId:(id)b;

/*!
 @brief Returns a representation of <code>a</code> as an instance of type <code>B</code>.If <code>a</code> cannot be
  converted, an unchecked exception (such as <code>IllegalArgumentException</code>) should be thrown.
 @param a the instance to convert; will never be null
 @return the converted instance; <b>must not</b> be null
 */
- (id)doForwardWithId:(id)a;

#pragma mark Package-Private

/*!
 @brief Constructor used only by <code>LegacyConverter</code> to suspend automatic null-handling.
 */
- (instancetype __nonnull)initWithBoolean:(jboolean)handleNullAutomatically;

- (id)correctedDoBackwardWithId:(id)b;

- (id)correctedDoForwardWithId:(id)a;

/*!
 @brief Package-private non-final implementation of andThen() so only we can override it.
 */
- (ComGoogleCommonBaseConverter *)doAndThenWithComGoogleCommonBaseConverter:(ComGoogleCommonBaseConverter *)secondConverter;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseConverter)

FOUNDATION_EXPORT void ComGoogleCommonBaseConverter_init(ComGoogleCommonBaseConverter *self);

FOUNDATION_EXPORT void ComGoogleCommonBaseConverter_initWithBoolean_(ComGoogleCommonBaseConverter *self, jboolean handleNullAutomatically);

FOUNDATION_EXPORT ComGoogleCommonBaseConverter *ComGoogleCommonBaseConverter_fromWithComGoogleCommonBaseFunction_withComGoogleCommonBaseFunction_(id<ComGoogleCommonBaseFunction> forwardFunction, id<ComGoogleCommonBaseFunction> backwardFunction);

FOUNDATION_EXPORT ComGoogleCommonBaseConverter *ComGoogleCommonBaseConverter_identity(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseConverter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseConverter")
