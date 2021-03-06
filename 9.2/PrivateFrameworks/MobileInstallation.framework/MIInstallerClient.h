/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation
 */

@interface MIInstallerClient : NSObject <MobileInstallerDelegateProtocol> {
    NSXPCConnection * _connection;
    id /* block */  _progressBlock;
}

@property (nonatomic, copy) id /* block */ progressBlock;

+ (id)installerWithProgressBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_invalidateObject;
- (void)checkCapabilities:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)clearUninstalledIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchDiskUsageForIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchInstalledAppsWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchInstalledDeveloperAppsWithMountPath:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithProgressBlock:(id /* block */)arg1;
- (void)installPath:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)listSafeHarborsOfType:(int)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)lookupUninstalledWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)processRestoredContainerWithIdentifier:(id)arg1 ofType:(int)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (id /* block */)progressBlock;
- (void)registerSafeHarborAtPath:(id)arg1 forIdentifier:(id)arg2 ofType:(int)arg3 withOptions:(id)arg4 completion:(id /* block */)arg5;
- (void)removeSafeHarborForIdentifier:(id)arg1 ofType:(int)arg2 withOptions:(id)arg3 completion:(id /* block */)arg4;
- (void)reportProgress:(id)arg1;
- (void)setProgressBlock:(id /* block */)arg1;
- (void)snapshotWKAppInCompanionAppID:(id)arg1 toURL:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)uninstallIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)updateAppDataProtectionWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)updateSinfForLSWithIdentifier:(id)arg1 withOptions:(id)arg2 sinfData:(id)arg3 completion:(id /* block */)arg4;

@end
