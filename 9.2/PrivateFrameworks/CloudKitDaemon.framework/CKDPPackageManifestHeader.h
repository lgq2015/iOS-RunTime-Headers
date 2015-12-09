/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPPackageManifestHeader : PBCodable <NSCopying> {
    struct { 
        unsigned int version : 1; 
    }  _has;
    NSData * _signature;
    int  _version;
}

@property (nonatomic, readonly) BOOL hasSignature;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic, retain) NSData *signature;
@property (nonatomic) int version;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasSignature;
- (BOOL)hasVersion;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasVersion:(BOOL)arg1;
- (void)setSignature:(id)arg1;
- (void)setVersion:(int)arg1;
- (id)signature;
- (int)version;
- (void)writeTo:(id)arg1;

@end