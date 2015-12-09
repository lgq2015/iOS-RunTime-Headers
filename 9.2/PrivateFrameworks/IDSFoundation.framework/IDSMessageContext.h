/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSMessageContext : NSObject {
    id  _boostContext;
    NSMutableDictionary * _dict;
}

@property (nonatomic, retain) id boostContext;
@property (nonatomic) long long broadcastID;
@property (nonatomic) NSNumber *broadcastTime;
@property (nonatomic) BOOL expectsPeerResponse;
@property (nonatomic, copy) NSString *fromID;
@property (nonatomic, copy) NSString *incomingResponseIdentifier;
@property (nonatomic) NSNumber *originalCommand;
@property (nonatomic, copy) NSString *outgoingResponseIdentifier;
@property (nonatomic) NSNumber *priority;
@property (nonatomic, copy) NSString *serviceIdentifier;
@property (nonatomic, copy) NSString *storageGuid;
@property (nonatomic, copy) NSString *toID;
@property (nonatomic) BOOL wantsAppAck;
@property (nonatomic) BOOL wantsManualAck;

// Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation

- (id)boostContext;
- (long long)broadcastID;
- (id)broadcastTime;
- (void)dealloc;
- (BOOL)expectsPeerResponse;
- (id)fromID;
- (id)incomingResponseIdentifier;
- (id)initWithDictionary:(id)arg1 boostContext:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)originalCommand;
- (id)outgoingResponseIdentifier;
- (id)priority;
- (id)serviceIdentifier;
- (void)setBoostContext:(id)arg1;
- (void)setBroadcastID:(long long)arg1;
- (void)setBroadcastTime:(id)arg1;
- (void)setExpectsPeerResponse:(BOOL)arg1;
- (void)setFromID:(id)arg1;
- (void)setIncomingResponseIdentifier:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setOriginalCommand:(id)arg1;
- (void)setOutgoingResponseIdentifier:(id)arg1;
- (void)setPriority:(id)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setStorageGuid:(id)arg1;
- (void)setToID:(id)arg1;
- (void)setWantsAppAck:(BOOL)arg1;
- (void)setWantsManualAck:(BOOL)arg1;
- (id)storageGuid;
- (id)toID;
- (BOOL)wantsAppAck;
- (BOOL)wantsManualAck;

// Image: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash

- (id)nfmDescription;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

- (id)npkDescription;

// Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport

- (id)pbDescription;

@end