/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPShareTokenRetrieveRequest : PBRequest <NSCopying> {
    NSString * _routingKey;
    CKDPShareIdentifier * _shareId;
    NSData * _shortTokenHash;
}

@property (nonatomic, readonly) BOOL hasRoutingKey;
@property (nonatomic, readonly) BOOL hasShareId;
@property (nonatomic, readonly) BOOL hasShortTokenHash;
@property (nonatomic, retain) NSString *routingKey;
@property (nonatomic, retain) CKDPShareIdentifier *shareId;
@property (nonatomic, retain) NSData *shortTokenHash;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasRoutingKey;
- (BOOL)hasShareId;
- (BOOL)hasShortTokenHash;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)routingKey;
- (void)setRoutingKey:(id)arg1;
- (void)setShareId:(id)arg1;
- (void)setShortTokenHash:(id)arg1;
- (id)shareId;
- (id)shortTokenHash;
- (void)writeTo:(id)arg1;

@end
