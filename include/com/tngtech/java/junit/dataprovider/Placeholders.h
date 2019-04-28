//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/junit/build_result/java/com/tngtech/java/junit/dataprovider/Placeholders.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComTngtechJavaJunitDataproviderPlaceholders")
#ifdef RESTRICT_ComTngtechJavaJunitDataproviderPlaceholders
#define INCLUDE_ALL_ComTngtechJavaJunitDataproviderPlaceholders 0
#else
#define INCLUDE_ALL_ComTngtechJavaJunitDataproviderPlaceholders 1
#endif
#undef RESTRICT_ComTngtechJavaJunitDataproviderPlaceholders

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComTngtechJavaJunitDataproviderPlaceholders_) && (INCLUDE_ALL_ComTngtechJavaJunitDataproviderPlaceholders || defined(INCLUDE_ComTngtechJavaJunitDataproviderPlaceholders))
#define ComTngtechJavaJunitDataproviderPlaceholders_

@protocol JavaUtilList;

/*!
 @brief Use this class to manipulate the generation/formatting of test method names.
 <p>
  E.g. one can add a new placeholder using a static initializer block in a base class of all tests: 
 @code

   <code>
  public static class BaseTest {
      static {
          Placeholders.all().add(0, new MyFancyParameterPlaceholder());
      }
      // ...
  } 
  </code>
   
@endcode
 */
@interface ComTngtechJavaJunitDataproviderPlaceholders : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Retrieve all <code>BasePlaceholder</code> to handle <code>DataProvider.format()</code>.The returned <code>List</code> is the
  original list such that all manipulations will change the behavior how test method names are formatted.
 <p>
  <b>Note:</b>
  <ul>
  <li>The placeholder are process in order.</li>
  <li>The first matching placeholder wins, especially if an earlier processed placeholder is a substring of a later
  one (e.g. <code>%c</code> and <code>%cc</code>)</li>
  </ul>
 @return all <code>BasePlaceholder</code>s to handle <code>DataProvider.format()</code> (not a copy!)
 */
+ (id<JavaUtilList>)all;

/*!
 @brief Resets all changes to the list of all <code>BasePlaceholder</code> such that is contains the default placeholders
  again.
 */
+ (void)reset;

@end

J2OBJC_STATIC_INIT(ComTngtechJavaJunitDataproviderPlaceholders)

FOUNDATION_EXPORT void ComTngtechJavaJunitDataproviderPlaceholders_init(ComTngtechJavaJunitDataproviderPlaceholders *self);

FOUNDATION_EXPORT ComTngtechJavaJunitDataproviderPlaceholders *new_ComTngtechJavaJunitDataproviderPlaceholders_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComTngtechJavaJunitDataproviderPlaceholders *create_ComTngtechJavaJunitDataproviderPlaceholders_init(void);

FOUNDATION_EXPORT id<JavaUtilList> ComTngtechJavaJunitDataproviderPlaceholders_all(void);

FOUNDATION_EXPORT void ComTngtechJavaJunitDataproviderPlaceholders_reset(void);

J2OBJC_TYPE_LITERAL_HEADER(ComTngtechJavaJunitDataproviderPlaceholders)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComTngtechJavaJunitDataproviderPlaceholders")
