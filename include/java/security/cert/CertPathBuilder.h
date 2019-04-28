//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/cert/CertPathBuilder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertCertPathBuilder")
#ifdef RESTRICT_JavaSecurityCertCertPathBuilder
#define INCLUDE_ALL_JavaSecurityCertCertPathBuilder 0
#else
#define INCLUDE_ALL_JavaSecurityCertCertPathBuilder 1
#endif
#undef RESTRICT_JavaSecurityCertCertPathBuilder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityCertCertPathBuilder_) && (INCLUDE_ALL_JavaSecurityCertCertPathBuilder || defined(INCLUDE_JavaSecurityCertCertPathBuilder))
#define JavaSecurityCertCertPathBuilder_

@class JavaSecurityCertCertPathBuilderSpi;
@class JavaSecurityProvider;
@protocol JavaSecurityCertCertPathBuilderResult;
@protocol JavaSecurityCertCertPathChecker;
@protocol JavaSecurityCertCertPathParameters;

/*!
 @brief A class for building certification paths (also known as certificate chains).
 <p>
  This class uses a provider-based architecture.
  To create a <code>CertPathBuilder</code>, call
  one of the static <code>getInstance</code> methods, passing in the
  algorithm name of the <code>CertPathBuilder</code> desired and optionally
  the name of the provider desired. 
 <p>Once a <code>CertPathBuilder</code> object has been created, certification
  paths can be constructed by calling the <code>build</code> method and
  passing it an algorithm-specific set of parameters. If successful, the
  result (including the <code>CertPath</code> that was built) is returned
  in an object that implements the <code>CertPathBuilderResult</code>
  interface. 
 <p>The <code>getRevocationChecker</code> method allows an application to specify
  additional algorithm-specific parameters and options used by the 
 <code>CertPathBuilder</code> when checking the revocation status of certificates.
  Here is an example demonstrating how it is used with the PKIX algorithm: 
 @code

  CertPathBuilder cpb = CertPathBuilder.getInstance("PKIX");
  PKIXRevocationChecker rc = (PKIXRevocationChecker)cpb.getRevocationChecker();
  rc.setOptions(EnumSet.of(Option.PREFER_CRLS));
  params.addCertPathChecker(rc);
  CertPathBuilderResult cpbr = cpb.build(params); 
  
@endcode
  
 <p> Android provides the following <code>CertPathBuilder</code> algorithms: 
 <table>
    <thead>
      <tr>
        <th>Algorithm</th>
        <th>Supported API Levels</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td>PKIX</td>
        <td>1+</td>
      </tr>
    </tbody>
  </table>
  This algorithm is described in the <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#CertPathBuilder">
  CertPathBuilder section</a> of the
  Java Cryptography Architecture Standard Algorithm Name Documentation.
  Consult the release documentation for your implementation to see if any
  other algorithms are supported. 
 <p>
  <b>Concurrent Access</b>
  <p>
  The static methods of this class are guaranteed to be thread-safe.
  Multiple threads may concurrently invoke the static methods defined in
  this class with no ill effects. 
 <p>
  However, this is not true for the non-static methods defined by this class.
  Unless otherwise documented by a specific provider, threads that need to
  access a single <code>CertPathBuilder</code> instance concurrently should
  synchronize amongst themselves and provide the necessary locking. Multiple
  threads each manipulating a different <code>CertPathBuilder</code> instance
  need not synchronize.
 - seealso: CertPath
 @since 1.4
 @author Sean Mullan
 @author Yassir Elley
 */
@interface JavaSecurityCertCertPathBuilder : NSObject

#pragma mark Public

/*!
 @brief Attempts to build a certification path using the specified algorithm
  parameter set.
 @param params the algorithm parameters
 @return the result of the build algorithm
 @throw CertPathBuilderExceptionif the builder is unable to construct
   a certification path that satisfies the specified parameters
 @throw InvalidAlgorithmParameterExceptionif the specified parameters
  are inappropriate for this <code>CertPathBuilder</code>
 */
- (id<JavaSecurityCertCertPathBuilderResult>)buildWithJavaSecurityCertCertPathParameters:(id<JavaSecurityCertCertPathParameters>)params;

/*!
 @brief Returns the name of the algorithm of this <code>CertPathBuilder</code>.
 @return the name of the algorithm of this <code>CertPathBuilder</code>
 */
- (NSString *)getAlgorithm;

/*!
 @brief Returns the default <code>CertPathBuilder</code> type as specified by
  the <code>certpathbuilder.type</code> security property, or the string 
 &quot;PKIX&quot; if no such property exists.
 <p>The default <code>CertPathBuilder</code> type can be used by
  applications that do not want to use a hard-coded type when calling one
  of the <code>getInstance</code> methods, and want to provide a default
  type in case a user does not specify its own. 
 <p>The default <code>CertPathBuilder</code> type can be changed by
  setting the value of the <code>certpathbuilder.type</code> security property
  to the desired type.
 - seealso: java.security.Securitysecurity properties
 @return the default <code>CertPathBuilder</code> type as specified
  by the <code>certpathbuilder.type</code> security property, or the string 
 &quot;PKIX&quot; if no such property exists.
 */
+ (NSString *)getDefaultType;

/*!
 @brief Returns a <code>CertPathBuilder</code> object that implements the
  specified algorithm.
 <p> This method traverses the list of registered security Providers,
  starting with the most preferred Provider.
  A new CertPathBuilder object encapsulating the
  CertPathBuilderSpi implementation from the first
  Provider that supports the specified algorithm is returned. 
 <p> Note that the list of registered providers may be retrieved via the 
 <code>Security.getProviders()</code> method.
 @param algorithm the name of the requested <code>CertPathBuilder</code>   algorithm.  See the CertPathBuilder section in the 
  <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#CertPathBuilder">
   Java Cryptography Architecture Standard Algorithm Name Documentation
  </a>  for information about standard algorithm names.
 @return a <code>CertPathBuilder</code> object that implements the
           specified algorithm.
 @throw NoSuchAlgorithmExceptionif no Provider supports a
           CertPathBuilderSpi implementation for the
           specified algorithm.
 - seealso: java.security.Provider
 */
+ (JavaSecurityCertCertPathBuilder *)getInstanceWithNSString:(NSString *)algorithm;

/*!
 @brief Returns a <code>CertPathBuilder</code> object that implements the
  specified algorithm.
 <p> A new CertPathBuilder object encapsulating the
  CertPathBuilderSpi implementation from the specified Provider
  object is returned.  Note that the specified Provider object
  does not have to be registered in the provider list.
 @param algorithm the name of the requested <code>CertPathBuilder</code>   algorithm.  See the CertPathBuilder section in the 
  <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#CertPathBuilder">
   Java Cryptography Architecture Standard Algorithm Name Documentation
  </a>  for information about standard algorithm names.
 @param provider the provider.
 @return a <code>CertPathBuilder</code> object that implements the
           specified algorithm.
 @throw NoSuchAlgorithmExceptionif a CertPathBuilderSpi
           implementation for the specified algorithm is not available
           from the specified Provider object.
 @throw IllegalArgumentExceptionif the <code>provider</code> is
           null.
 - seealso: java.security.Provider
 */
+ (JavaSecurityCertCertPathBuilder *)getInstanceWithNSString:(NSString *)algorithm
                                    withJavaSecurityProvider:(JavaSecurityProvider *)provider;

/*!
 @brief Returns a <code>CertPathBuilder</code> object that implements the
  specified algorithm.
 <p> A new CertPathBuilder object encapsulating the
  CertPathBuilderSpi implementation from the specified provider
  is returned.  The specified provider must be registered
  in the security provider list. 
 <p> Note that the list of registered providers may be retrieved via the 
 <code>Security.getProviders()</code> method.
 @param algorithm the name of the requested <code>CertPathBuilder</code>   algorithm.  See the CertPathBuilder section in the 
  <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#CertPathBuilder">
   Java Cryptography Architecture Standard Algorithm Name Documentation
  </a>  for information about standard algorithm names.
 @param provider the name of the provider.
 @return a <code>CertPathBuilder</code> object that implements the
           specified algorithm.
 @throw NoSuchAlgorithmExceptionif a CertPathBuilderSpi
           implementation for the specified algorithm is not
           available from the specified provider.
 @throw NoSuchProviderExceptionif the specified provider is not
           registered in the security provider list.
 @throw IllegalArgumentExceptionif the <code>provider</code> is
           null or empty.
 - seealso: java.security.Provider
 */
+ (JavaSecurityCertCertPathBuilder *)getInstanceWithNSString:(NSString *)algorithm
                                                withNSString:(NSString *)provider;

/*!
 @brief Returns the provider of this <code>CertPathBuilder</code>.
 @return the provider of this <code>CertPathBuilder</code>
 */
- (JavaSecurityProvider *)getProvider;

/*!
 @brief Returns a <code>CertPathChecker</code> that the encapsulated 
 <code>CertPathBuilderSpi</code> implementation uses to check the revocation
  status of certificates.A PKIX implementation returns objects of
  type <code>PKIXRevocationChecker</code>.
 Each invocation of this method
  returns a new instance of <code>CertPathChecker</code>.
  
 <p>The primary purpose of this method is to allow callers to specify
  additional input parameters and options specific to revocation checking.
  See the class description for an example.
 @return a <code>CertPathChecker</code>
 @throw UnsupportedOperationExceptionif the service provider does not
          support this method
 @since 1.8
 */
- (id<JavaSecurityCertCertPathChecker>)getRevocationChecker;

#pragma mark Protected

/*!
 @brief Creates a <code>CertPathBuilder</code> object of the given algorithm,
  and encapsulates the given provider implementation (SPI object) in it.
 @param builderSpi the provider implementation
 @param provider the provider
 @param algorithm the algorithm name
 */
- (instancetype __nonnull)initWithJavaSecurityCertCertPathBuilderSpi:(JavaSecurityCertCertPathBuilderSpi *)builderSpi
                                            withJavaSecurityProvider:(JavaSecurityProvider *)provider
                                                        withNSString:(NSString *)algorithm;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertCertPathBuilder)

FOUNDATION_EXPORT void JavaSecurityCertCertPathBuilder_initWithJavaSecurityCertCertPathBuilderSpi_withJavaSecurityProvider_withNSString_(JavaSecurityCertCertPathBuilder *self, JavaSecurityCertCertPathBuilderSpi *builderSpi, JavaSecurityProvider *provider, NSString *algorithm);

FOUNDATION_EXPORT JavaSecurityCertCertPathBuilder *new_JavaSecurityCertCertPathBuilder_initWithJavaSecurityCertCertPathBuilderSpi_withJavaSecurityProvider_withNSString_(JavaSecurityCertCertPathBuilderSpi *builderSpi, JavaSecurityProvider *provider, NSString *algorithm) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCertPathBuilder *create_JavaSecurityCertCertPathBuilder_initWithJavaSecurityCertCertPathBuilderSpi_withJavaSecurityProvider_withNSString_(JavaSecurityCertCertPathBuilderSpi *builderSpi, JavaSecurityProvider *provider, NSString *algorithm);

FOUNDATION_EXPORT JavaSecurityCertCertPathBuilder *JavaSecurityCertCertPathBuilder_getInstanceWithNSString_(NSString *algorithm);

FOUNDATION_EXPORT JavaSecurityCertCertPathBuilder *JavaSecurityCertCertPathBuilder_getInstanceWithNSString_withNSString_(NSString *algorithm, NSString *provider);

FOUNDATION_EXPORT JavaSecurityCertCertPathBuilder *JavaSecurityCertCertPathBuilder_getInstanceWithNSString_withJavaSecurityProvider_(NSString *algorithm, JavaSecurityProvider *provider);

FOUNDATION_EXPORT NSString *JavaSecurityCertCertPathBuilder_getDefaultType(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertCertPathBuilder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertCertPathBuilder")
