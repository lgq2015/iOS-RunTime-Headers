/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBApplicationLauncher : NSObject {
    BKSApplicationStateMonitor * _appStateMonitor;
    NSMutableDictionary * _bundleIdentifierToAssertions;
    FBSSystemService * _systemService;
}

- (void)_applicationFinishedBackgroundNotificationAction:(id)arg1;
- (id)_bundleIDForBulletin:(id)arg1 response:(id)arg2;
- (BOOL)_launchInForegroundForBulletin:(id)arg1 response:(id)arg2;
- (id)_launchOptionsForBulletin:(id)arg1 response:(id)arg2;
- (id)_newProcessAssertionForBundleID:(id)arg1;
- (void)_queue_removeProcessAssertionForBundleID:(id)arg1 invalidate:(BOOL)arg2;
- (void)_queue_setProcessAssertion:(id)arg1 forBundleID:(id)arg2;
- (void)_queue_updateApplicationStateMonitor;
- (void)_removeProcessAssertionForBundleID:(id)arg1 invalidate:(BOOL)arg2;
- (void)_setProcessAssertion:(id)arg1 forBundleID:(id)arg2;
- (void)_setupApplicationStateMonitor;
- (id)_urlForBulletin:(id)arg1 response:(id)arg2;
- (BOOL)canLaunchApplicationForBulletin:(id)arg1 response:(id)arg2;
- (void)dealloc;
- (id)initWithSystemService:(id)arg1;
- (void)launchApplicationForBulletin:(id)arg1 response:(id)arg2;

@end