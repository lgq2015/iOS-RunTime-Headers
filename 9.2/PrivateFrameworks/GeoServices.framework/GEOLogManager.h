/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogManager : NSObject {
    NSMutableArray * _logAdaptors;
    NSObject<OS_dispatch_queue> * _loggingQueue;
    void * _loggingQueueIdentityKey;
    void * _loggingQueueIdentityValue;
    NSMutableArray * _remoteAdaptorOptions;
    NSLock * _remoteAdaptorOptionsLock;
}

+ (id)sharedInstance;

- (void)_addLogAdaptor:(id)arg1;
- (void)_applicationDeactivating:(id)arg1;
- (void)_applicationWillTerminate:(id)arg1;
- (BOOL)_disableUsageLoggingForCountry;
- (void)_flushLogs;
- (id)_logMessageUsageURL;
- (void)_queueLogMessage:(id)arg1;
- (void)_removeAllLogAdaptors;
- (void)_removeLogAdaptor:(id)arg1;
- (void)_setupDefaultAdaptors;
- (void)_setupLogAdaptorsBackgroundTaskStartBlock:(id /* block */)arg1 endBlock:(id /* block */)arg2;
- (void)_setupXPCRemoteAdators;
- (BOOL)_shouldSendLogMessageUsageUsingGeoServices;
- (BOOL)_shouldSendLogMessageUsageWithPersistence;
- (void)_updateAndSetupRemoteAdaptors;
- (BOOL)_updateRemoteAdaptorOptions;
- (void)addLogAdaptor:(id)arg1;
- (void)dealloc;
- (void)flushLogs;
- (id)init;
- (void)queueLogMessage:(id)arg1;
- (void)removeAllLogAdators;
- (void)removeLogAdaptor:(id)arg1;
- (void)setupLogAdaptorsBackgroundTaskStartBlock:(id /* block */)arg1 endBlock:(id /* block */)arg2;
- (BOOL)shouldSendUsageUsingNewLogManager;
- (BOOL)shouldSendUsageUsingOldUsageManager;

@end
