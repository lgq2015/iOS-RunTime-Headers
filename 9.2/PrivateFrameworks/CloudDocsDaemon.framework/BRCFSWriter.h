/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFSWriter : NSObject <BRCFileCoordinationWriting, BRCModule> {
    BOOL  _isCancelled;
    NSObject<OS_dispatch_queue> * _serialQueue;
    BRCAccountSession * _session;
    int  _suspendCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isCancelled;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyChangesForServerAlias:(id)arg1 localAlias:(id)arg2 throttleID:(long long)arg3 zone:(id)arg4 diffs:(unsigned long long)arg5;
- (void)_stageCreationOfDirectory:(id)arg1;
- (void)_writeUnderCoordinationFromURL:(id)arg1 toURL:(id)arg2 canDelete:(BOOL)arg3;
- (void)applyChangesForServerItem:(id)arg1 localItem:(id)arg2 throttleID:(long long)arg3 zone:(id)arg4;
- (void)cancel;
- (void)close;
- (void)fixupItemsAtStartup;
- (id)initWithAccountSession:(id)arg1;
- (BOOL)isCancelled;
- (void)resume;
- (id)serialQueue;
- (void)setIsCancelled:(BOOL)arg1;
- (void)suspend;
- (void)writeUnderCoordinationFromURL:(id)arg1 toURL:(id)arg2 canDelete:(BOOL)arg3;

@end