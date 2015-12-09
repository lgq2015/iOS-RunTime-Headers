/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSService : NSObject {
    _IDSService * _internal;
}

@property (nonatomic, readonly, retain) _IDSService *_internal;
@property (nonatomic, readonly, copy) NSSet *accounts;
@property (nonatomic, readonly, copy) NSArray *devices;

+ (BOOL)checkMessageSize:(unsigned int)arg1 priority:(int)arg2;

- (id)_internal;
- (id)accounts;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (BOOL)cancelIdentifier:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)deviceForFromID:(id)arg1;
- (id)devices;
- (id)devicesForBTUUID:(id)arg1;
- (id)iCloudAccount;
- (id)initWithService:(id)arg1;
- (id)initWithService:(id)arg1 commands:(id)arg2;
- (id)initWithService:(id)arg1 manuallyAckMessages:(BOOL)arg2;
- (id)initWithService:(id)arg1 serviceDomain:(id)arg2;
- (BOOL)isPretendingToBeFull;
- (int)maxHomeKitPayloadSize;
- (SEL)protobufActionForIncomingRequestsOfType:(unsigned short)arg1;
- (SEL)protobufActionForIncomingResponsesOfType:(unsigned short)arg1;
- (void)removeDelegate:(id)arg1;
- (BOOL)sendAccessoryData:(id)arg1 toAccessoryID:(id)arg2 accessToken:(id)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (void)sendAckForMessageWithContext:(id)arg1;
- (BOOL)sendData:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(int)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7;
- (BOOL)sendData:(id)arg1 priority:(int)arg2 options:(id)arg3 identifier:(id*)arg4 error:(id*)arg5;
- (BOOL)sendData:(id)arg1 toDestinations:(id)arg2 priority:(int)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (BOOL)sendMessage:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (BOOL)sendMessage:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(int)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7;
- (BOOL)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(int)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (BOOL)sendProtobuf:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(int)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7;
- (BOOL)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(int)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (BOOL)sendResourceAtURL:(id)arg1 metadata:(id)arg2 toDestinations:(id)arg3 priority:(int)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7;
- (BOOL)sendServerMessage:(id)arg1 command:(id)arg2 fromAccount:(id)arg3;
- (id)serviceDomain;
- (void)setLinkPreferences:(id)arg1;
- (void)setPreferInfraWiFi:(BOOL)arg1;
- (void)setPretendingToBeFull:(BOOL)arg1;
- (void)setProtobufAction:(SEL)arg1 forIncomingRequestsOfType:(unsigned short)arg2;
- (void)setProtobufAction:(SEL)arg1 forIncomingResponsesOfType:(unsigned short)arg2;
- (void)startOTRTest:(int)arg1;
- (void)updateSubServices:(id)arg1;
- (id)uriForFromID:(id)arg1;

@end