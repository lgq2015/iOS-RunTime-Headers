/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreDownload : NSObject {
    SSDownload * _SSDownload;
    SSPurchase * _SSPurchase;
    SSPurchaseResponse * _SSPurchaseResponse;
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSDictionary * _attributes;
    BOOL  _canceled;
    NSMutableArray * _overridePhaseIdentifiers;
    int  _type;
}

@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) long long bytesDownloaded;
@property (nonatomic, readonly) long long bytesTotal;
@property (getter=isCanceled, nonatomic, readonly) BOOL canceled;
@property (nonatomic, readonly) long long downloadIdentifier;
@property (nonatomic, readonly) long long downloadSizeLimit;
@property (nonatomic, readonly) NSError *failureError;
@property (getter=isFinished, nonatomic, readonly) BOOL finished;
@property (nonatomic, readonly) unsigned long long libraryItemIdentifier;
@property (getter=isPaused, nonatomic, readonly) BOOL paused;
@property (nonatomic, readonly) double percentComplete;
@property (nonatomic, readonly) NSString *phaseIdentifier;
@property (nonatomic, readonly) NSError *purchaseError;
@property (getter=isPurchasing, nonatomic, readonly) BOOL purchasing;
@property (nonatomic, readonly) NSDictionary *rentalInformation;
@property (getter=isRestore, nonatomic, readonly) BOOL restore;
@property (nonatomic, readonly) long long storeItemIdentifier;
@property (nonatomic, readonly) int type;

+ (id)_SSPurchaseForType:(int)arg1 attributes:(id)arg2;
+ (BOOL)_getEffectiveStoreDownloadAttributes:(id*)arg1 forPlaybackItemMetadata:(id)arg2 attributes:(id)arg3;
+ (BOOL)canCreateStoreDownloadForPlaybackItemMetadata:(id)arg1 type:(int)arg2 attributes:(id)arg3;
+ (id)storeDownloadForMediaItem:(id)arg1 type:(int)arg2 attributes:(id)arg3;
+ (id)storeDownloadForPlaybackItemMetadata:(id)arg1 type:(int)arg2 attributes:(id)arg3;
+ (id)storeDownloadForStoreItemOffer:(id)arg1 attributes:(id)arg2;
+ (id)storeDownloadForStoreOffer:(id)arg1 type:(int)arg2 attributes:(id)arg3;
+ (id)storeDownloadWithDownloadIdentifier:(long long)arg1;

- (void).cxx_destruct;
- (id)_SSDownload;
- (id)_SSPurchase;
- (id)_SSPurchaseResponse;
- (void)_addOverridePhaseIdentifier:(id)arg1;
- (id)_currentOverridePhaseIdentifier;
- (BOOL)_isCanceled;
- (void)_removeOverridePhaseIdentifier:(id)arg1;
- (void)_setCanceled:(BOOL)arg1;
- (void)_setSSDownload:(id)arg1;
- (void)_setSSPurchase:(id)arg1 SSPurchaseResponse:(id)arg2;
- (id)_valueForDownloadProperty:(id)arg1;
- (id)assetsForType:(id)arg1;
- (id)attributes;
- (long long)bytesDownloaded;
- (long long)bytesTotal;
- (id)description;
- (long long)downloadIdentifier;
- (long long)downloadSizeLimit;
- (id)failureError;
- (id)initWithType:(int)arg1 attributes:(id)arg2;
- (BOOL)isCanceled;
- (BOOL)isFinished;
- (BOOL)isPaused;
- (BOOL)isPurchasing;
- (BOOL)isRestore;
- (unsigned long long)libraryItemIdentifier;
- (double)percentComplete;
- (id)phaseIdentifier;
- (id)purchaseError;
- (id)rentalInformation;
- (void)resetCachedRentalInformation;
- (long long)storeItemIdentifier;
- (int)type;

@end