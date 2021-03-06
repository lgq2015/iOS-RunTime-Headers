/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface WLOHomeKitResult : NSObject {
    NSArray * _characteristicTypes;
    unsigned int  _duration;
    unsigned int  _isClient;
    int  _resultCode;
    unsigned int  _resultType;
    NSArray * _serviceTypes;
    unsigned int  _transportType;
}

@property (nonatomic, retain) NSArray *characteristicTypes;
@property (nonatomic) unsigned int duration;
@property (nonatomic) unsigned int isClient;
@property (nonatomic) int resultCode;
@property (nonatomic) unsigned int resultType;
@property (nonatomic, retain) NSArray *serviceTypes;
@property (nonatomic) unsigned int transportType;

- (void).cxx_destruct;
- (id)characteristicTypes;
- (id)description;
- (unsigned int)duration;
- (unsigned int)isClient;
- (int)resultCode;
- (unsigned int)resultType;
- (id)serviceTypes;
- (void)setCharacteristicTypes:(id)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setIsClient:(unsigned int)arg1;
- (void)setResultCode:(int)arg1;
- (void)setResultType:(unsigned int)arg1;
- (void)setServiceTypes:(id)arg1;
- (void)setTransportType:(unsigned int)arg1;
- (unsigned int)transportType;

@end
