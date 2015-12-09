/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSService : NSObject {
    NSString * _displayName;
    NSString * _homeSharingGroupKey;
    NSString * _hostName;
    NSString * _networkName;
    int  _port;
    int  _serviceDiscoverySource;
    int  _serviceLegacyFlags;
    int  _serviceType;
}

@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSString *homeSharingGroupKey;
@property (nonatomic, retain) NSString *hostName;
@property (nonatomic, retain) NSString *networkName;
@property (nonatomic) int port;
@property (nonatomic) int serviceDiscoverySource;
@property (nonatomic) int serviceLegacyFlags;
@property (nonatomic) int serviceType;

+ (id)protobufsFromServices:(id)arg1;
+ (id)servicesFromProtobufs:(id)arg1;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (id)displayName;
- (id)homeSharingGroupKey;
- (id)hostName;
- (id)initWithData:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToService:(id)arg1;
- (BOOL)isLegacy;
- (id)networkName;
- (int)port;
- (id)protobuf;
- (int)serviceDiscoverySource;
- (int)serviceLegacyFlags;
- (int)serviceType;
- (void)setDisplayName:(id)arg1;
- (void)setHomeSharingGroupKey:(id)arg1;
- (void)setHostName:(id)arg1;
- (void)setNetworkName:(id)arg1;
- (void)setPort:(int)arg1;
- (void)setServiceDiscoverySource:(int)arg1;
- (void)setServiceLegacyFlags:(int)arg1;
- (void)setServiceType:(int)arg1;

@end