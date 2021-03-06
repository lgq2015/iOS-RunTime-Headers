/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKChartCache : NSObject {
    NSMutableDictionary * _cachedResultsByIdentifier;
    <HKChartCacheDataSource> * _dataSource;
    int  _maxRetryCount;
    NSHashTable * _observers;
    HKOutstandingFetchOperationManager * _operationManager;
    _HKChartCachePendingFetchOperationManager * _pendingFetchOperationsManager;
    NSArray * _pendingIdentifiers;
    NSMutableDictionary * _resultsLoadedByIdentifier;
    BOOL  _shouldBufferFetchOperations;
}

@property (nonatomic, retain) <HKChartCacheDataSource> *dataSource;
@property (nonatomic, readonly) id dataSourceRespectingType;
@property (nonatomic) int maxRetryCount;
@property (nonatomic, retain) HKOutstandingFetchOperationManager *operationManager;
@property (nonatomic) BOOL shouldBufferFetchOperations;

- (void).cxx_destruct;
- (void)_addFetchOperationsForIdentifiers:(id)arg1;
- (void)_alertObserversDidUpdateResults;
- (void)_handleOperationCompletionWithOperation:(id)arg1 identifier:(id)arg2 results:(id)arg3 error:(id)arg4;
- (id)_operationForIdentifier:(id)arg1;
- (void)_removeFetchOperationsForIdentifiers:(id)arg1;
- (void)addObserver:(id)arg1;
- (BOOL)cacheIsDirtyForIdentifier:(id)arg1;
- (id)cachedResultsForIdentifier:(id)arg1;
- (id)dataSource;
- (id)dataSourceRespectingType;
- (void)fetchResultsForIdentifiers:(id)arg1;
- (id)init;
- (void)invalidateCache;
- (void)invalidateResultsForIdentifiers:(id)arg1;
- (int)maxRetryCount;
- (id)operationManager;
- (void)removeObserver:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setMaxRetryCount:(int)arg1;
- (void)setOperationManager:(id)arg1;
- (void)setShouldBufferFetchOperations:(BOOL)arg1;
- (BOOL)shouldBufferFetchOperations;

@end
