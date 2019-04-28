//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/cert/CertificateFactorySpi.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertCertificateFactorySpi")
#ifdef RESTRICT_JavaSecurityCertCertificateFactorySpi
#define INCLUDE_ALL_JavaSecurityCertCertificateFactorySpi 0
#else
#define INCLUDE_ALL_JavaSecurityCertCertificateFactorySpi 1
#endif
#undef RESTRICT_JavaSecurityCertCertificateFactorySpi

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityCertCertificateFactorySpi_) && (INCLUDE_ALL_JavaSecurityCertCertificateFactorySpi || defined(INCLUDE_JavaSecurityCertCertificateFactorySpi))
#define JavaSecurityCertCertificateFactorySpi_

@class JavaIoInputStream;
@class JavaSecurityCertCRL;
@class JavaSecurityCertCertPath;
@class JavaSecurityCertCertificate;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilList;

/*!
 @brief This class defines the <i>Service Provider Interface</i> (<b>SPI</b>)
  for the <code>CertificateFactory</code> class.
 All the abstract methods in this class must be implemented by each
  cryptographic service provider who wishes to supply the implementation
  of a certificate factory for a particular certificate type, e.g., X.509. 
 <p>Certificate factories are used to generate certificate, certification path
  (<code>CertPath</code>) and certificate revocation list (CRL) objects from
  their encodings. 
 <p>A certificate factory for X.509 must return certificates that are an
  instance of <code>java.security.cert.X509Certificate</code>, and CRLs
  that are an instance of <code>java.security.cert.X509CRL</code>.
 @author Hemma Prafullchandra
 @author Jan Luehe
 @author Sean Mullan
 - seealso: CertificateFactory
 - seealso: Certificate
 - seealso: X509Certificate
 - seealso: CertPath
 - seealso: CRL
 - seealso: X509CRL
 @since 1.2
 */
@interface JavaSecurityCertCertificateFactorySpi : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Generates a certificate object and initializes it with
  the data read from the input stream <code>inStream</code>.
 <p>In order to take advantage of the specialized certificate format
  supported by this certificate factory,
  the returned certificate object can be typecast to the corresponding
  certificate class. For example, if this certificate
  factory implements X.509 certificates, the returned certificate object
  can be typecast to the <code>X509Certificate</code> class. 
 <p>In the case of a certificate factory for X.509 certificates, the
  certificate provided in <code>inStream</code> must be DER-encoded and
  may be supplied in binary or printable (Base64) encoding. If the
  certificate is provided in Base64 encoding, it must be bounded at
  the beginning by -----BEGIN CERTIFICATE-----, and must be bounded at
  the end by -----END CERTIFICATE-----. 
 <p>Note that if the given input stream does not support 
 <code>mark</code> and 
 <code>reset</code>, this method will
  consume the entire input stream. Otherwise, each call to this
  method consumes one certificate and the read position of the input stream
  is positioned to the next available byte after the inherent
  end-of-certificate marker. If the data in the
  input stream does not contain an inherent end-of-certificate marker (other
  than EOF) and there is trailing data after the certificate is parsed, a 
 <code>CertificateException</code> is thrown.
 @param inStream an input stream with the certificate data.
 @return a certificate object initialized with the data
  from the input stream.
 @throw CertificateExceptionon parsing errors.
 */
- (JavaSecurityCertCertificate *)engineGenerateCertificateWithJavaIoInputStream:(JavaIoInputStream *)inStream;

/*!
 @brief Returns a (possibly empty) collection view of the certificates read
  from the given input stream <code>inStream</code>.
 <p>In order to take advantage of the specialized certificate format
  supported by this certificate factory, each element in
  the returned collection view can be typecast to the corresponding
  certificate class. For example, if this certificate
  factory implements X.509 certificates, the elements in the returned
  collection can be typecast to the <code>X509Certificate</code> class. 
 <p>In the case of a certificate factory for X.509 certificates, 
 <code>inStream</code> may contain a single DER-encoded certificate
  in the formats described for 
 <code>generateCertificate</code>
 .
  In addition, <code>inStream</code> may contain a PKCS#7 certificate
  chain. This is a PKCS#7 <i>SignedData</i> object, with the only
  significant field being <i>certificates</i>. In particular, the
  signature and the contents are ignored. This format allows multiple
  certificates to be downloaded at once. If no certificates are present,
  an empty collection is returned. 
 <p>Note that if the given input stream does not support 
 <code>mark</code> and 
 <code>reset</code>, this method will
  consume the entire input stream.
 @param inStream the input stream with the certificates.
 @return a (possibly empty) collection view of
  java.security.cert.Certificate objects
  initialized with the data from the input stream.
 @throw CertificateExceptionon parsing errors.
 */
- (id<JavaUtilCollection>)engineGenerateCertificatesWithJavaIoInputStream:(JavaIoInputStream *)inStream;

/*!
 @brief Generates a <code>CertPath</code> object and initializes it with
  the data read from the <code>InputStream</code> inStream.The data
  is assumed to be in the default encoding.
 <p> This method was added to version 1.4 of the Java 2 Platform
  Standard Edition. In order to maintain backwards compatibility with
  existing service providers, this method cannot be <code>abstract</code>
  and by default throws an <code>UnsupportedOperationException</code>.
 @param inStream an <code>InputStream</code>  containing the data
 @return a <code>CertPath</code> initialized with the data from the
    <code>InputStream</code>
 @throw CertificateExceptionif an exception occurs while decoding
 @throw UnsupportedOperationExceptionif the method is not supported
 @since 1.4
 */
- (JavaSecurityCertCertPath *)engineGenerateCertPathWithJavaIoInputStream:(JavaIoInputStream *)inStream;

/*!
 @brief Generates a <code>CertPath</code> object and initializes it with
  the data read from the <code>InputStream</code> inStream.The data
  is assumed to be in the specified encoding.
 <p> This method was added to version 1.4 of the Java 2 Platform
  Standard Edition. In order to maintain backwards compatibility with
  existing service providers, this method cannot be <code>abstract</code>
  and by default throws an <code>UnsupportedOperationException</code>.
 @param inStream an <code>InputStream</code>  containing the data
 @param encoding the encoding used for the data
 @return a <code>CertPath</code> initialized with the data from the
    <code>InputStream</code>
 @throw CertificateExceptionif an exception occurs while decoding or
    the encoding requested is not supported
 @throw UnsupportedOperationExceptionif the method is not supported
 @since 1.4
 */
- (JavaSecurityCertCertPath *)engineGenerateCertPathWithJavaIoInputStream:(JavaIoInputStream *)inStream
                                                             withNSString:(NSString *)encoding;

/*!
 @brief Generates a <code>CertPath</code> object and initializes it with
  a <code>List</code> of <code>Certificate</code>s.
 <p>
  The certificates supplied must be of a type supported by the 
 <code>CertificateFactory</code>. They will be copied out of the supplied 
 <code>List</code> object. 
 <p> This method was added to version 1.4 of the Java 2 Platform
  Standard Edition. In order to maintain backwards compatibility with
  existing service providers, this method cannot be <code>abstract</code>
  and by default throws an <code>UnsupportedOperationException</code>.
 @param certificates a <code>List</code>  of <code>Certificate</code> s
 @return a <code>CertPath</code> initialized with the supplied list of
    certificates
 @throw CertificateExceptionif an exception occurs
 @throw UnsupportedOperationExceptionif the method is not supported
 @since 1.4
 */
- (JavaSecurityCertCertPath *)engineGenerateCertPathWithJavaUtilList:(id<JavaUtilList>)certificates;

/*!
 @brief Generates a certificate revocation list (CRL) object and initializes it
  with the data read from the input stream <code>inStream</code>.
 <p>In order to take advantage of the specialized CRL format
  supported by this certificate factory,
  the returned CRL object can be typecast to the corresponding
  CRL class. For example, if this certificate
  factory implements X.509 CRLs, the returned CRL object
  can be typecast to the <code>X509CRL</code> class. 
 <p>Note that if the given input stream does not support 
 <code>mark</code> and 
 <code>reset</code>, this method will
  consume the entire input stream. Otherwise, each call to this
  method consumes one CRL and the read position of the input stream
  is positioned to the next available byte after the inherent
  end-of-CRL marker. If the data in the
  input stream does not contain an inherent end-of-CRL marker (other
  than EOF) and there is trailing data after the CRL is parsed, a 
 <code>CRLException</code> is thrown.
 @param inStream an input stream with the CRL data.
 @return a CRL object initialized with the data
  from the input stream.
 @throw CRLExceptionon parsing errors.
 */
- (JavaSecurityCertCRL *)engineGenerateCRLWithJavaIoInputStream:(JavaIoInputStream *)inStream;

/*!
 @brief Returns a (possibly empty) collection view of the CRLs read
  from the given input stream <code>inStream</code>.
 <p>In order to take advantage of the specialized CRL format
  supported by this certificate factory, each element in
  the returned collection view can be typecast to the corresponding
  CRL class. For example, if this certificate
  factory implements X.509 CRLs, the elements in the returned
  collection can be typecast to the <code>X509CRL</code> class. 
 <p>In the case of a certificate factory for X.509 CRLs, 
 <code>inStream</code> may contain a single DER-encoded CRL.
  In addition, <code>inStream</code> may contain a PKCS#7 CRL
  set. This is a PKCS#7 <i>SignedData</i> object, with the only
  significant field being <i>crls</i>. In particular, the
  signature and the contents are ignored. This format allows multiple
  CRLs to be downloaded at once. If no CRLs are present,
  an empty collection is returned. 
 <p>Note that if the given input stream does not support 
 <code>mark</code> and 
 <code>reset</code>, this method will
  consume the entire input stream.
 @param inStream the input stream with the CRLs.
 @return a (possibly empty) collection view of
  java.security.cert.CRL objects initialized with the data from the input
  stream.
 @throw CRLExceptionon parsing errors.
 */
- (id<JavaUtilCollection>)engineGenerateCRLsWithJavaIoInputStream:(JavaIoInputStream *)inStream;

/*!
 @brief Returns an iteration of the <code>CertPath</code> encodings supported
  by this certificate factory, with the default encoding first.See
  the CertPath Encodings section in the <a href="{@@docRoot}openjdk-redirect.html?
 v=8&path=/technotes/guides/security/StandardNames.html#CertPathEncodings">
  Java Cryptography Architecture Standard Algorithm Name Documentation</a>
  for information about standard encoding names. 
 <p>
  Attempts to modify the returned <code>Iterator</code> via its 
 <code>remove</code> method result in an 
 <code>UnsupportedOperationException</code>.
  
 <p> This method was added to version 1.4 of the Java 2 Platform
  Standard Edition. In order to maintain backwards compatibility with
  existing service providers, this method cannot be <code>abstract</code>
  and by default throws an <code>UnsupportedOperationException</code>.
 @return an <code>Iterator</code> over the names of the supported
          <code>CertPath</code> encodings (as <code>String</code>s)
 @throw UnsupportedOperationExceptionif the method is not supported
 @since 1.4
 */
- (id<JavaUtilIterator>)engineGetCertPathEncodings;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertCertificateFactorySpi)

FOUNDATION_EXPORT void JavaSecurityCertCertificateFactorySpi_init(JavaSecurityCertCertificateFactorySpi *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertCertificateFactorySpi)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertCertificateFactorySpi")
