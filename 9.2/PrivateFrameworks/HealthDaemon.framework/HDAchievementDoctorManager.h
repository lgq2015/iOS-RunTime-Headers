/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAchievementDoctorManager : NSObject <HDDatabaseProtectedDataObserver, HDDiagnosticObject, HDHealthDaemonReadyObserver> {
    HDAchievementDoctor * _achievementDoctor;
    NSObject<OS_dispatch_queue> * _fixupWaitQueue;
    <HDHealthDaemon> * _healthDaemon;
    NSNumber * _waitingToRun;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)_achievementTypesModifiedPerFixupVersion;

- (void).cxx_destruct;
- (void)_generateCrashReportForMissingAchievements:(id)arg1;
- (id)_lastSuccessfulFixupDate;
- (int)_lastSuccessfulFixupVersion;
- (void)_performAchievementsFixupActivity:(id)arg1;
- (void)_performAchievementsFixupIfWaiting;
- (BOOL)_queue_isWaitingToRun;
- (void)_queue_performAchievementsFixupWithCompletion:(id /* block */)arg1;
- (void)_queue_setWaitingToRun:(BOOL)arg1;
- (void)_registerActivity;
- (void)_setLastSuccessfulFixupDate:(id)arg1;
- (void)_setLastSuccessfulFixupVersion:(int)arg1;
- (void)_setNeedsFixupWithCompletion:(id /* block */)arg1;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)initWithHealthDaemon:(id)arg1;

@end
