/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSupportedTileSets : PBCodable <NSCopying> {
    NSMutableArray * _tileSets;
}

@property (nonatomic, retain) NSMutableArray *tileSets;

- (void)addTileSet:(id)arg1;
- (void)clearTileSets;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setTileSets:(id)arg1;
- (id)tileSetAtIndex:(unsigned int)arg1;
- (id)tileSets;
- (unsigned int)tileSetsCount;
- (void)writeTo:(id)arg1;

@end