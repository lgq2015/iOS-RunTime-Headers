/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSSQLiteQueryDescriptor : NSObject <NSCopying> {
    Class  _entityClass;
    int  _limitCount;
    Class  _memoryEntityClass;
    NSString * _orderingClause;
    NSArray * _orderingDirections;
    NSArray * _orderingProperties;
    SSSQLitePredicate * _predicate;
    BOOL  _returnsDistinctEntities;
}

@property (nonatomic) Class entityClass;
@property (nonatomic) int limitCount;
@property (nonatomic) Class memoryEntityClass;
@property (nonatomic, copy) NSString *orderingClause;
@property (nonatomic, copy) NSArray *orderingDirections;
@property (nonatomic, copy) NSArray *orderingProperties;
@property (nonatomic, copy) SSSQLitePredicate *predicate;
@property (nonatomic) BOOL returnsDistinctEntities;

- (id)_newSelectSQLWithProperties:(const id*)arg1 count:(unsigned int)arg2 columns:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (Class)entityClass;
- (int)limitCount;
- (Class)memoryEntityClass;
- (id)orderingClause;
- (id)orderingDirections;
- (id)orderingProperties;
- (id)predicate;
- (BOOL)returnsDistinctEntities;
- (void)setEntityClass:(Class)arg1;
- (void)setLimitCount:(int)arg1;
- (void)setMemoryEntityClass:(Class)arg1;
- (void)setOrderingClause:(id)arg1;
- (void)setOrderingDirections:(id)arg1;
- (void)setOrderingProperties:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)setReturnsDistinctEntities:(BOOL)arg1;

@end