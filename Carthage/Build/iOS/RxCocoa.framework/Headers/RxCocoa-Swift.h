// Generated by Apple Swift version 3.0 (swiftlang-800.0.46.2 clang-800.0.38)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import UIKit;
@import Foundation;
#endif

#import <RxCocoa/RxCocoa.h>

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"

SWIFT_CLASS("_TtC7RxCocoa8RxTarget")
@interface RxTarget : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (void)dispose;
@end

@class UIBarButtonItem;

SWIFT_CLASS("_TtC7RxCocoa19BarButtonItemTarget")
@interface BarButtonItemTarget : RxTarget
@property (nonatomic, weak) UIBarButtonItem * _Nullable barButtonItem;
@property (nonatomic, copy) void (^ _Null_unspecified callback)(void);
- (nonnull instancetype)initWithBarButtonItem:(UIBarButtonItem * _Nonnull)barButtonItem callback:(void (^ _Nonnull)(void))callback OBJC_DESIGNATED_INITIALIZER;
- (void)dispose;
- (void)action:(id _Nonnull)sender;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@class UICollectionView;
@class UICollectionViewCell;

SWIFT_CLASS("_TtC7RxCocoa30CollectionViewDataSourceNotSet")
@interface CollectionViewDataSourceNotSet : NSObject <UICollectionViewDataSource>
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIControl;

SWIFT_CLASS("_TtC7RxCocoa13ControlTarget")
@interface ControlTarget : RxTarget
@property (nonatomic, readonly) SEL _Nonnull selector;
@property (nonatomic, weak) UIControl * _Nullable control;
@property (nonatomic, readonly) UIControlEvents controlEvents;
@property (nonatomic, copy) void (^ _Nullable callback)(UIControl * _Nonnull);
- (nonnull instancetype)initWithControl:(UIControl * _Nonnull)control controlEvents:(UIControlEvents)controlEvents callback:(void (^ _Nonnull)(UIControl * _Nonnull))callback OBJC_DESIGNATED_INITIALIZER;
- (void)eventHandler:(UIControl * _Null_unspecified)sender;
- (void)dispose;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


/**
  Base class for \code
  DelegateProxyType
  \endcode protocol.
  This implementation is not thread safe and can be used only from one thread (Main thread).
*/
SWIFT_CLASS("_TtC7RxCocoa13DelegateProxy")
@interface DelegateProxy : _RXDelegateProxy
/**
  Parent object associated with delegate proxy.
*/
@property (nonatomic, readonly, weak) id _Nullable parentObject;
/**
  Initializes new instance.
  \param parentObject Optional parent object that owns \code
  DelegateProxy
  \endcode as associated object.

*/
- (nonnull instancetype)initWithParentObject:(id _Nonnull)parentObject OBJC_DESIGNATED_INITIALIZER;
- (void)_sentMessage:(SEL _Nonnull)selector withArguments:(NSArray * _Nonnull)arguments;
- (void)_methodInvoked:(SEL _Nonnull)selector withArguments:(NSArray * _Nonnull)arguments;
/**
  Returns tag used to identify associated object.

  returns:
  Associated object tag.
*/
+ (void const * _Nonnull)delegateAssociatedObjectTag;
/**
  Initializes new instance of delegate proxy.

  returns:
  Initialized instance of \code
  self
  \endcode.
*/
+ (id _Nonnull)createProxyForObject:(id _Nonnull)object;
/**
  Returns assigned proxy for object.
  \param object Object that can have assigned delegate proxy.


  returns:
  Assigned delegate proxy or \code
  nil
  \endcode if no delegate proxy is assigned.
*/
+ (id _Nullable)assignedProxyFor:(id _Nonnull)object;
/**
  Assigns proxy to object.
  \param object Object that can have assigned delegate proxy.

  \param proxy Delegate proxy object to assign to \code
  object
  \endcode.

*/
+ (void)assignProxy:(id _Nonnull)proxy toObject:(id _Nonnull)object;
/**
  Sets reference of normal delegate that receives all forwarded messages
  through \code
  self
  \endcode.
  \param forwardToDelegate Reference of delegate that receives all messages through \code
  self
  \endcode.

  \param retainDelegate Should \code
  self
  \endcode retain \code
  forwardToDelegate
  \endcode.

*/
- (void)setForwardToDelegate:(id _Nullable)delegate retainDelegate:(BOOL)retainDelegate;
/**
  Returns reference of normal delegate that receives all forwarded messages
  through \code
  self
  \endcode.

  returns:
  Value of reference if set or nil.
*/
- (id _Nullable)forwardToDelegate;
+ (void const * _Nonnull)_pointer:(void const * _Nonnull)p;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
SWIFT_CLASS("_TtC7RxCocoa31RxCollectionViewDataSourceProxy")
@interface RxCollectionViewDataSourceProxy : DelegateProxy <UICollectionViewDataSource>
/**
  Typed parent object.
*/
@property (nonatomic, readonly, weak) UICollectionView * _Nullable collectionView;
/**
  Initializes \code
  RxCollectionViewDataSourceProxy
  \endcode
  \param parentObject Parent object for delegate proxy.

*/
- (nonnull instancetype)initWithParentObject:(id _Nonnull)parentObject OBJC_DESIGNATED_INITIALIZER;
/**
  Required delegate method implementation.
*/
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section;
/**
  Required delegate method implementation.
*/
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
+ (id _Nonnull)createProxyForObject:(id _Nonnull)object;
/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
+ (void const * _Nonnull)delegateAssociatedObjectTag;
/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
+ (void)setCurrentDelegate:(id _Nullable)delegate toObject:(id _Nonnull)object;
/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
+ (id _Nullable)currentDelegateFor:(id _Nonnull)object;
/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
- (void)setForwardToDelegate:(id _Nullable)forwardToDelegate retainDelegate:(BOOL)retainDelegate;
@end

@class UIScrollView;

/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
SWIFT_CLASS("_TtC7RxCocoa25RxScrollViewDelegateProxy")
@interface RxScrollViewDelegateProxy : DelegateProxy <UIScrollViewDelegate>
/**
  Typed parent object.
*/
@property (nonatomic, readonly, weak) UIScrollView * _Nullable scrollView;
/**
  Initializes \code
  RxScrollViewDelegateProxy
  \endcode
  \param parentObject Parent object for delegate proxy.

*/
- (nonnull instancetype)initWithParentObject:(id _Nonnull)parentObject OBJC_DESIGNATED_INITIALIZER;
/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
- (void)scrollViewDidScroll:(UIScrollView * _Nonnull)scrollView;
/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
+ (id _Nonnull)createProxyForObject:(id _Nonnull)object;
/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
+ (void)setCurrentDelegate:(id _Nullable)delegate toObject:(id _Nonnull)object;
/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
+ (id _Nullable)currentDelegateFor:(id _Nonnull)object;
@end


/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
SWIFT_CLASS("_TtC7RxCocoa29RxCollectionViewDelegateProxy")
@interface RxCollectionViewDelegateProxy : RxScrollViewDelegateProxy <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
/**
  Typed parent object.
*/
@property (nonatomic, readonly, weak) UICollectionView * _Nullable collectionView;
/**
  Initializes \code
  RxCollectionViewDelegateProxy
  \endcode
  \param parentObject Parent object for delegate proxy.

*/
- (nonnull instancetype)initWithParentObject:(id _Nonnull)parentObject OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7RxCocoa25RxPickerViewDelegateProxy")
@interface RxPickerViewDelegateProxy : DelegateProxy <UIPickerViewDelegate>
/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
+ (void)setCurrentDelegate:(id _Nullable)delegate toObject:(id _Nonnull)object;
/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
+ (id _Nullable)currentDelegateFor:(id _Nonnull)object;
- (nonnull instancetype)initWithParentObject:(id _Nonnull)parentObject OBJC_DESIGNATED_INITIALIZER;
@end



/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
SWIFT_CLASS("_TtC7RxCocoa24RxSearchBarDelegateProxy")
@interface RxSearchBarDelegateProxy : DelegateProxy <UISearchBarDelegate>
/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
+ (id _Nullable)currentDelegateFor:(id _Nonnull)object;
/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
+ (void)setCurrentDelegate:(id _Nullable)delegate toObject:(id _Nonnull)object;
/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
+ (id _Nonnull)createProxyForObject:(id _Nonnull)object;
- (nonnull instancetype)initWithParentObject:(id _Nonnull)parentObject OBJC_DESIGNATED_INITIALIZER;
@end


/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
SWIFT_CLASS("_TtC7RxCocoa31RxSearchControllerDelegateProxy")
@interface RxSearchControllerDelegateProxy : DelegateProxy <UISearchControllerDelegate>
/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
+ (void)setCurrentDelegate:(id _Nullable)delegate toObject:(id _Nonnull)object;
/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
+ (id _Nullable)currentDelegateFor:(id _Nonnull)object;
- (nonnull instancetype)initWithParentObject:(id _Nonnull)parentObject OBJC_DESIGNATED_INITIALIZER;
@end


/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
SWIFT_CLASS("_TtC7RxCocoa21RxTabBarDelegateProxy")
@interface RxTabBarDelegateProxy : DelegateProxy <UITabBarDelegate>
/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
+ (id _Nullable)currentDelegateFor:(id _Nonnull)object;
/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
+ (void)setCurrentDelegate:(id _Nullable)delegate toObject:(id _Nonnull)object;
/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
+ (id _Nonnull)createProxyForObject:(id _Nonnull)object;
- (nonnull instancetype)initWithParentObject:(id _Nonnull)parentObject OBJC_DESIGNATED_INITIALIZER;
@end

@class UITableView;
@class UITableViewCell;

/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
SWIFT_CLASS("_TtC7RxCocoa26RxTableViewDataSourceProxy")
@interface RxTableViewDataSourceProxy : DelegateProxy <UITableViewDataSource>
/**
  Typed parent object.
*/
@property (nonatomic, readonly, weak) UITableView * _Nullable tableView;
/**
  Initializes \code
  RxTableViewDataSourceProxy
  \endcode
  \param parentObject Parent object for delegate proxy.

*/
- (nonnull instancetype)initWithParentObject:(id _Nonnull)parentObject OBJC_DESIGNATED_INITIALIZER;
/**
  Required delegate method implementation.
*/
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
/**
  Required delegate method implementation.
*/
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
+ (id _Nonnull)createProxyForObject:(id _Nonnull)object;
/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
+ (void const * _Nonnull)delegateAssociatedObjectTag;
/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
+ (void)setCurrentDelegate:(id _Nullable)delegate toObject:(id _Nonnull)object;
/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
+ (id _Nullable)currentDelegateFor:(id _Nonnull)object;
/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
- (void)setForwardToDelegate:(id _Nullable)forwardToDelegate retainDelegate:(BOOL)retainDelegate;
- (BOOL)respondsToSelector:(SEL _Null_unspecified)aSelector;
@end


/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
SWIFT_CLASS("_TtC7RxCocoa24RxTableViewDelegateProxy")
@interface RxTableViewDelegateProxy : RxScrollViewDelegateProxy <UITableViewDelegate>
/**
  Typed parent object.
*/
@property (nonatomic, readonly, weak) UITableView * _Nullable tableView;
/**
  Initializes \code
  RxTableViewDelegateProxy
  \endcode
  \param parentObject Parent object for delegate proxy.

*/
- (nonnull instancetype)initWithParentObject:(id _Nonnull)parentObject OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC7RxCocoa26RxTextStorageDelegateProxy")
@interface RxTextStorageDelegateProxy : DelegateProxy <NSTextStorageDelegate>
/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
+ (void)setCurrentDelegate:(id _Nullable)delegate toObject:(id _Nonnull)object;
/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
+ (id _Nullable)currentDelegateFor:(id _Nonnull)object;
- (nonnull instancetype)initWithParentObject:(id _Nonnull)parentObject OBJC_DESIGNATED_INITIALIZER;
@end

@class UITextView;

/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
SWIFT_CLASS("_TtC7RxCocoa23RxTextViewDelegateProxy")
@interface RxTextViewDelegateProxy : RxScrollViewDelegateProxy <UITextViewDelegate>
/**
  Typed parent object.
*/
@property (nonatomic, readonly, weak) UITextView * _Nullable textView;
/**
  Initializes \code
  RxTextViewDelegateProxy
  \endcode
  \param parentObject Parent object for delegate proxy.

*/
- (nonnull instancetype)initWithParentObject:(id _Nonnull)parentObject OBJC_DESIGNATED_INITIALIZER;
/**
  For more information take a look at \code
  DelegateProxyType
  \endcode.
*/
- (BOOL)textView:(UITextView * _Nonnull)textView shouldChangeTextInRange:(NSRange)range replacementText:(NSString * _Nonnull)text;
@end


SWIFT_CLASS("_TtC7RxCocoa25TableViewDataSourceNotSet")
@interface TableViewDataSourceNotSet : NSObject <UITableViewDataSource>
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface UICollectionView (SWIFT_EXTENSION(RxCocoa))
/**
  Factory method that enables subclasses to implement their own \code
  delegate
  \endcode.

  returns:
  Instance of delegate proxy that wraps \code
  delegate
  \endcode.
*/
- (RxScrollViewDelegateProxy * _Nonnull)createRxDelegateProxy;
/**
  Factory method that enables subclasses to implement their own \code
  rx.dataSource
  \endcode.

  returns:
  Instance of delegate proxy that wraps \code
  dataSource
  \endcode.
*/
- (RxCollectionViewDataSourceProxy * _Nonnull)createRxDataSourceProxy;
@end


@interface UIScrollView (SWIFT_EXTENSION(RxCocoa))
/**
  Factory method that enables subclasses to implement their own \code
  delegate
  \endcode.

  returns:
  Instance of delegate proxy that wraps \code
  delegate
  \endcode.
*/
- (RxScrollViewDelegateProxy * _Nonnull)createRxDelegateProxy;
@end


@interface UISearchBar (SWIFT_EXTENSION(RxCocoa))
/**
  Factory method that enables subclasses to implement their own \code
  delegate
  \endcode.

  returns:
  Instance of delegate proxy that wraps \code
  delegate
  \endcode.
*/
- (RxSearchBarDelegateProxy * _Nonnull)createRxDelegateProxy;
@end


@interface UITabBar (SWIFT_EXTENSION(RxCocoa))
/**
  Factory method that enables subclasses to implement their own \code
  delegate
  \endcode.

  returns:
  Instance of delegate proxy that wraps \code
  delegate
  \endcode.
*/
- (RxTabBarDelegateProxy * _Nonnull)createRxDelegateProxy;
@end


@interface UITableView (SWIFT_EXTENSION(RxCocoa))
/**
  Factory method that enables subclasses to implement their own \code
  delegate
  \endcode.

  returns:
  Instance of delegate proxy that wraps \code
  delegate
  \endcode.
*/
- (RxScrollViewDelegateProxy * _Nonnull)createRxDelegateProxy;
/**
  Factory method that enables subclasses to implement their own \code
  rx.dataSource
  \endcode.

  returns:
  Instance of delegate proxy that wraps \code
  dataSource
  \endcode.
*/
- (RxTableViewDataSourceProxy * _Nonnull)createRxDataSourceProxy;
@end


@interface UITextView (SWIFT_EXTENSION(RxCocoa))
/**
  Factory method that enables subclasses to implement their own \code
  delegate
  \endcode.

  returns:
  Instance of delegate proxy that wraps \code
  delegate
  \endcode.
*/
- (RxScrollViewDelegateProxy * _Nonnull)createRxDelegateProxy;
@end


SWIFT_CLASS("_TtC7RxCocoa40_RxCollectionViewReactiveArrayDataSource")
@interface _RxCollectionViewReactiveArrayDataSource : NSObject <UICollectionViewDataSource>
- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView * _Nonnull)in;
- (NSInteger)_collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section;
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7RxCocoa35_RxTableViewReactiveArrayDataSource")
@interface _RxTableViewReactiveArrayDataSource : NSObject <UITableViewDataSource>
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView;
- (NSInteger)_tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop
