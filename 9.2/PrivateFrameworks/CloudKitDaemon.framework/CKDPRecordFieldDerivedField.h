/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordFieldDerivedField : PBCodable <NSCopying> {
    CKDPRecordFieldIdentifier * _aggregatedField;
    NSMutableArray * _aggregatedTypes;
    int  _aggregationFunction;
    NSMutableArray * _filters;
    CKDPRecordFieldIdentifier * _groupByField;
    struct { 
        unsigned int aggregationFunction : 1; 
    }  _has;
    CKDPRecordFieldIdentifier * _identifier;
    NSMutableArray * _targetTypes;
}

@property (nonatomic, retain) CKDPRecordFieldIdentifier *aggregatedField;
@property (nonatomic, retain) NSMutableArray *aggregatedTypes;
@property (nonatomic) int aggregationFunction;
@property (nonatomic, retain) NSMutableArray *filters;
@property (nonatomic, retain) CKDPRecordFieldIdentifier *groupByField;
@property (nonatomic, readonly) BOOL hasAggregatedField;
@property (nonatomic) BOOL hasAggregationFunction;
@property (nonatomic, readonly) BOOL hasGroupByField;
@property (nonatomic, readonly) BOOL hasIdentifier;
@property (nonatomic, retain) CKDPRecordFieldIdentifier *identifier;
@property (nonatomic, retain) NSMutableArray *targetTypes;

- (void).cxx_destruct;
- (void)addAggregatedTypes:(id)arg1;
- (void)addFilters:(id)arg1;
- (void)addTargetTypes:(id)arg1;
- (id)aggregatedField;
- (id)aggregatedTypes;
- (id)aggregatedTypesAtIndex:(unsigned int)arg1;
- (unsigned int)aggregatedTypesCount;
- (int)aggregationFunction;
- (void)clearAggregatedTypes;
- (void)clearFilters;
- (void)clearTargetTypes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)filters;
- (id)filtersAtIndex:(unsigned int)arg1;
- (unsigned int)filtersCount;
- (id)groupByField;
- (BOOL)hasAggregatedField;
- (BOOL)hasAggregationFunction;
- (BOOL)hasGroupByField;
- (BOOL)hasIdentifier;
- (unsigned int)hash;
- (id)identifier;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAggregatedField:(id)arg1;
- (void)setAggregatedTypes:(id)arg1;
- (void)setAggregationFunction:(int)arg1;
- (void)setFilters:(id)arg1;
- (void)setGroupByField:(id)arg1;
- (void)setHasAggregationFunction:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTargetTypes:(id)arg1;
- (id)targetTypes;
- (id)targetTypesAtIndex:(unsigned int)arg1;
- (unsigned int)targetTypesCount;
- (void)writeTo:(id)arg1;

@end
