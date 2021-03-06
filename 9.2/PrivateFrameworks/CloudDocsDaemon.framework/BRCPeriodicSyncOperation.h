/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCPeriodicSyncOperation : _BRCOperation <BRCOperationSubclass> {
    CKServerChangeToken * _metadataChangeToken;
    BRCContainerScheduler * _scheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) CKServerChangeToken *metadataChangeToken;
@property (nonatomic, readonly) BRCContainerScheduler *scheduler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithContainerScheduler:(id)arg1 metadataChangeToken:(id)arg2;
- (void)main;
- (id)metadataChangeToken;
- (BOOL)scheduleSyncDownIfNeededForZoneID:(id)arg1 zoneIfAny:(id)arg2;
- (id)scheduler;
- (BOOL)shouldRetryForError:(id)arg1;
- (unsigned long long)startActivity;

@end
