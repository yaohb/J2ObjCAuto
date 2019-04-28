//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/com/google/common/net/HostAndPort.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonNetHostAndPort")
#ifdef RESTRICT_ComGoogleCommonNetHostAndPort
#define INCLUDE_ALL_ComGoogleCommonNetHostAndPort 0
#else
#define INCLUDE_ALL_ComGoogleCommonNetHostAndPort 1
#endif
#undef RESTRICT_ComGoogleCommonNetHostAndPort

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonNetHostAndPort_) && (INCLUDE_ALL_ComGoogleCommonNetHostAndPort || defined(INCLUDE_ComGoogleCommonNetHostAndPort))
#define ComGoogleCommonNetHostAndPort_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

/*!
 @brief An immutable representation of a host and port.
 <p>Example usage: 
 @code

  HostAndPort hp = HostAndPort.fromString("[2001:db8::1]")
      .withDefaultPort(80)
      .requireBracketsForIPv6();
  hp.getHost();   // returns "2001:db8::1"
  hp.getPort();   // returns 80
  hp.toString();  // returns "[2001:db8::1]:80" 
  
@endcode
  
 <p>Here are some examples of recognized formats: 
 <ul>
    <li>example.com
    <li>example.com:80
    <li>192.0.2.1
    <li>192.0.2.1:80
    <li>[2001:db8::1] - <code>getHost()</code> omits brackets
    <li>[2001:db8::1]:80 - <code>getHost()</code> omits brackets
    <li>2001:db8::1 - Use <code>requireBracketsForIPv6()</code> to prohibit this 
 </ul>
  
 <p>Note that this is not an exhaustive list, because these methods are only concerned with
  brackets, colons, and port numbers. Full validation of the host field (if desired) is the
  caller's responsibility.
 @author Paul Marks
 @since 10.0
 */
@interface ComGoogleCommonNetHostAndPort : NSObject < JavaIoSerializable >

#pragma mark Public

- (jboolean)isEqual:(id)other;

/*!
 @brief Build a HostAndPort instance from a host only.
 <p>Note: Non-bracketed IPv6 literals are allowed. Use <code>requireBracketsForIPv6()</code> to
  prohibit these.
 @param host the host-only string to parse. Must not contain a port number.
 @return if parsing was successful, a populated HostAndPort object.
 @throw IllegalArgumentExceptionif <code>host</code> contains a port number.
 @since 17.0
 */
+ (ComGoogleCommonNetHostAndPort *)fromHostWithNSString:(NSString *)host;

/*!
 @brief Build a HostAndPort instance from separate host and port values.
 <p>Note: Non-bracketed IPv6 literals are allowed. Use <code>requireBracketsForIPv6()</code> to
  prohibit these.
 @param host the host string to parse. Must not contain a port number.
 @param port a port number from [0..65535]
 @return if parsing was successful, a populated HostAndPort object.
 @throw IllegalArgumentExceptionif <code>host</code> contains a port number, or <code>port</code> is out
      of range.
 */
+ (ComGoogleCommonNetHostAndPort *)fromPartsWithNSString:(NSString *)host
                                                 withInt:(jint)port;

/*!
 @brief Split a freeform string into a host and port, without strict validation.
 <p>Note that the host-only formats will leave the port field undefined. You can use <code>withDefaultPort(int)</code>
  to patch in a default value.
 @param hostPortString the input string to parse.
 @return if parsing was successful, a populated HostAndPort object.
 @throw IllegalArgumentExceptionif nothing meaningful could be parsed.
 */
+ (ComGoogleCommonNetHostAndPort *)fromStringWithNSString:(NSString *)hostPortString;

/*!
 @brief Returns the portion of this <code>HostAndPort</code> instance that should represent the hostname or
  IPv4/IPv6 literal.
 <p>A successful parse does not imply any degree of sanity in this field. For additional
  validation, see the <code>HostSpecifier</code> class.
 @since 20.0 (since 10.0 as <code>getHostText</code>)
 */
- (NSString *)getHost;

/*!
 @brief Get the current port number, failing if no port is defined.
 @return a validated port number, in the range [0..65535]
 @throw IllegalStateExceptionif no port is defined. You can use <code>withDefaultPort(int)</code>
      to prevent this from occurring.
 */
- (jint)getPort;

/*!
 @brief Returns the current port number, with a default if no port is defined.
 */
- (jint)getPortOrDefaultWithInt:(jint)defaultPort;

- (NSUInteger)hash;

/*!
 @brief Return true if this instance has a defined port.
 */
- (jboolean)hasPort;

/*!
 @brief Generate an error if the host might be a non-bracketed IPv6 literal.
 <p>URI formatting requires that IPv6 literals be surrounded by brackets, like "[2001:db8::1]".
  Chain this call after <code>fromString(String)</code> to increase the strictness of the parser, and
  disallow IPv6 literals that don't contain these brackets. 
 <p>Note that this parser identifies IPv6 literals solely based on the presence of a colon. To
  perform actual validation of IP addresses, see the <code>InetAddresses.forString(String)</code>
  method.
 @return <code>this</code>, to enable chaining of calls.
 @throw IllegalArgumentExceptionif bracketless IPv6 is detected.
 */
- (ComGoogleCommonNetHostAndPort *)requireBracketsForIPv6;

/*!
 @brief Rebuild the host:port string, including brackets if necessary.
 */
- (NSString *)description;

/*!
 @brief Provide a default port if the parsed string contained only a host.
 <p>You can chain this after <code>fromString(String)</code> to include a port in case the port was
  omitted from the input string. If a port was already provided, then this method is a no-op.
 @param defaultPort a port number, from [0..65535]
 @return a HostAndPort instance, guaranteed to have a defined port.
 */
- (ComGoogleCommonNetHostAndPort *)withDefaultPortWithInt:(jint)defaultPort;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonNetHostAndPort)

FOUNDATION_EXPORT ComGoogleCommonNetHostAndPort *ComGoogleCommonNetHostAndPort_fromPartsWithNSString_withInt_(NSString *host, jint port);

FOUNDATION_EXPORT ComGoogleCommonNetHostAndPort *ComGoogleCommonNetHostAndPort_fromHostWithNSString_(NSString *host);

FOUNDATION_EXPORT ComGoogleCommonNetHostAndPort *ComGoogleCommonNetHostAndPort_fromStringWithNSString_(NSString *hostPortString);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonNetHostAndPort)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonNetHostAndPort")