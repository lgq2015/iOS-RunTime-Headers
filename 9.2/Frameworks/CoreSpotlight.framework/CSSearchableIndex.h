/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSSearchableIndex : NSObject {
    CSIndexingQueue * _activityQueue;
    int  _awakeNotifyToken;
    BOOL  _batchOpen;
    NSMutableArray * _batchedItemIdentifiersToDelete;
    NSMutableArray * _batchedItemsToIndex;
    NSString * _bundleIdentifier;
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    <CSSearchableIndexDelegate> * _indexDelegate;
    NSString * _name;
    int  _options;
    NSString * _protectionClass;
    <CSSearchableIndexInterface><NSXPCProxyCreating> * _testProxy;
}

@property (nonatomic, retain) CSIndexingQueue *activityQueue;
@property (nonatomic) int awakeNotifyToken;
@property (nonatomic) BOOL batchOpen;
@property (nonatomic, retain) NSMutableArray *batchedItemIdentifiersToDelete;
@property (nonatomic, retain) NSMutableArray *batchedItemsToIndex;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property <CSSearchableIndexDelegate> *indexDelegate;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) int options;
@property (nonatomic, copy) NSString *protectionClass;
@property (nonatomic, retain) <CSSearchableIndexInterface><NSXPCProxyCreating> *testProxy;

+ (void)_setLastUpdateTime;
+ (BOOL)activityShouldBeIndexed:(id)arg1 bundleID:(id)arg2;
+ (id)defaultSearchableIndex;
+ (void)initialize;
+ (BOOL)isIndexingAvailable;
+ (double)lastUpdateTime;
+ (id)mainBundleID;
+ (id)mainBundleLocalizedString;
+ (void)notifyIndexDelegates;

- (void).cxx_destruct;
- (void)_cancelAwakeNotifyToken;
- (void)_changeStateOfSearchableItemsWithUIDs:(id)arg1 toState:(int)arg2 forUser:(unsigned int)arg3 forBundleID:(id)arg4 forUTIType:(id)arg5;
- (void)_checkInWithIndexDelegate:(id)arg1 reason:(id)arg2;
- (void)_commonInit;
- (void)_didInterruptConnection;
- (void)_didInvalidateConnection;
- (void)_indexActivities:(id)arg1;
- (id)_initWithName:(id)arg1 protectionClass:(id)arg2 bundleIdentifier:(id)arg3 options:(int)arg4;
- (void)_issueCommand:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_itemsBySanitizingItemsForSpotlight:(id)arg1;
- (void)_performIndexJob:(id)arg1 acknowledgementHandler:(id /* block */)arg2;
- (void)_registerAwakeNotifyToken;
- (void)_setMailMessageAttributes:(id)arg1;
- (void)_standardizeItems:(id)arg1;
- (BOOL)_supportsBatching;
- (id)_validateClientState:(id)arg1;
- (id)_validateOperation;
- (id)_validateOperationWithIdentifiers:(id)arg1;
- (id)_validateOperationWithItems:(id)arg1;
- (id)_validateOperationWithItems:(id)arg1 identifiers:(id)arg2;
- (id)activityQueue;
- (int)awakeNotifyToken;
- (BOOL)batchOpen;
- (id)batchedItemIdentifiersToDelete;
- (id)batchedItemsToIndex;
- (void)beginIndexBatch;
- (id)bundleIdentifier;
- (void)changeStateOfSearchableItemsWithUIDs:(id)arg1 toState:(int)arg2;
- (id)connection;
- (void)dealloc;
- (id)delegateQueue;
- (void)deleteAllSearchableItemsForBundleID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteAllSearchableItemsWithCompletionHandler:(id /* block */)arg1;
- (void)deleteAllSearchableItemsWithProtectionClass:(id)arg1 forBundleID:(id)arg2 options:(int)arg3 completionHandler:(id /* block */)arg4;
- (void)deleteSearchableItemsSinceDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteSearchableItemsSinceDate:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(int)arg4 completionHandler:(id /* block */)arg5;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(int)arg4 completionHandler:(id /* block */)arg5;
- (void)deleteSearchableItemsWithIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)description;
- (void)endIndexBatchWithClientState:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchLastClientStateWithCompletionHandler:(id /* block */)arg1;
- (void)fetchLastClientStateWithProtectionClass:(id)arg1 forBundleID:(id)arg2 clientStateName:(id)arg3 options:(int)arg4 completionHandler:(id /* block */)arg5;
- (id)indexDelegate;
- (void)indexSearchableItems:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 clientStateName:(id)arg4 protectionClass:(id)arg5 forBundleID:(id)arg6 options:(int)arg7 completionHandler:(id /* block */)arg8;
- (void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 protectionClass:(id)arg4 forBundleID:(id)arg5 options:(int)arg6 completionHandler:(id /* block */)arg7;
- (void)indexSearchableItems:(id)arg1 returningItemsSanitizedForSpotlightTo:(id /* block */)arg2;
- (void)indexUserActivity:(id)arg1;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 bundleIdentifier:(id)arg2;
- (id)initWithName:(id)arg1 options:(int)arg2;
- (id)initWithName:(id)arg1 protectionClass:(id)arg2;
- (id)initWithName:(id)arg1 protectionClass:(id)arg2 bundleIdentifier:(id)arg3;
- (id)initWithTestingStub:(id)arg1;
- (id)name;
- (int)options;
- (void)performDataMigrationWithTimeout:(double)arg1 completionHandler:(id /* block */)arg2;
- (void)performIndexJob:(id)arg1;
- (void)performIndexJob:(id)arg1 acknowledgementHandler:(id /* block */)arg2;
- (id)protectionClass;
- (id)remoteProxyWithErrorHandler:(id /* block */)arg1;
- (id)requestQueue;
- (void)setActivityQueue:(id)arg1;
- (void)setAwakeNotifyToken:(int)arg1;
- (void)setBatchOpen:(BOOL)arg1;
- (void)setBatchedItemIdentifiersToDelete:(id)arg1;
- (void)setBatchedItemsToIndex:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setIndexDelegate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOptions:(int)arg1;
- (void)setProtectionClass:(id)arg1;
- (void)setTestProxy:(id)arg1;
- (id)testProxy;
- (void)throttle;
- (id)throttleQueue;
- (void)unthrottle;
- (void)willModifySearchableItemsWithIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)willModifySearchableItemsWithIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(int)arg4 completionHandler:(id /* block */)arg5;

@end
