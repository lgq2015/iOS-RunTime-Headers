/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
 */

@interface DMConnection : DMXPCConnection <DMMigratorServiceProtocol> {
    NSString * _lastPlugin;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *lastPlugin;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)changeVisibility:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)handleMessage:(id)arg1;
- (id)lastPlugin;
- (void)migrateWithCompletion:(id /* block */)arg1;
- (void)orderedPluginIdentifiersWithCompletion:(id /* block */)arg1;
- (void)testMigrationUIWithProgress:(BOOL)arg1 forceInvert:(BOOL)arg2 completion:(id /* block */)arg3;

@end