/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDHandoffUserActivityWasContinued : PBCodable <NSCopying> {
    NSString * _activityType;
    BOOL  _browserFallback;
    NSString * _bundleIdentifier;
    BOOL  _cancelled;
    unsigned long long  _errorCode;
    struct { 
        unsigned int errorCode : 1; 
        unsigned int payloadSize : 1; 
        unsigned int timestamp : 1; 
        unsigned int transferDurationNsec : 1; 
        unsigned int transferSpeed : 1; 
        unsigned int source : 1; 
        unsigned int browserFallback : 1; 
        unsigned int cancelled : 1; 
    }  _has;
    unsigned long long  _payloadSize;
    unsigned int  _source;
    unsigned long long  _timestamp;
    unsigned long long  _transferDurationNsec;
    unsigned long long  _transferSpeed;
}

@property (nonatomic, retain) NSString *activityType;
@property (nonatomic) BOOL browserFallback;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) unsigned long long errorCode;
@property (nonatomic, readonly) BOOL hasActivityType;
@property (nonatomic) BOOL hasBrowserFallback;
@property (nonatomic, readonly) BOOL hasBundleIdentifier;
@property (nonatomic) BOOL hasCancelled;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasPayloadSize;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTransferDurationNsec;
@property (nonatomic) BOOL hasTransferSpeed;
@property (nonatomic) unsigned long long payloadSize;
@property (nonatomic) unsigned int source;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long transferDurationNsec;
@property (nonatomic) unsigned long long transferSpeed;

- (id)activityType;
- (BOOL)browserFallback;
- (id)bundleIdentifier;
- (BOOL)cancelled;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)errorCode;
- (BOOL)hasActivityType;
- (BOOL)hasBrowserFallback;
- (BOOL)hasBundleIdentifier;
- (BOOL)hasCancelled;
- (BOOL)hasErrorCode;
- (BOOL)hasPayloadSize;
- (BOOL)hasSource;
- (BOOL)hasTimestamp;
- (BOOL)hasTransferDurationNsec;
- (BOOL)hasTransferSpeed;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)payloadSize;
- (BOOL)readFrom:(id)arg1;
- (void)setActivityType:(id)arg1;
- (void)setBrowserFallback:(BOOL)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCancelled:(BOOL)arg1;
- (void)setErrorCode:(unsigned long long)arg1;
- (void)setHasBrowserFallback:(BOOL)arg1;
- (void)setHasCancelled:(BOOL)arg1;
- (void)setHasErrorCode:(BOOL)arg1;
- (void)setHasPayloadSize:(BOOL)arg1;
- (void)setHasSource:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasTransferDurationNsec:(BOOL)arg1;
- (void)setHasTransferSpeed:(BOOL)arg1;
- (void)setPayloadSize:(unsigned long long)arg1;
- (void)setSource:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransferDurationNsec:(unsigned long long)arg1;
- (void)setTransferSpeed:(unsigned long long)arg1;
- (unsigned int)source;
- (unsigned long long)timestamp;
- (unsigned long long)transferDurationNsec;
- (unsigned long long)transferSpeed;
- (void)writeTo:(id)arg1;

@end
