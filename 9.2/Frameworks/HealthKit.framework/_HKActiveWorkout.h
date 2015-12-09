/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKActiveWorkout : HKWorkout <_HKActiveWorkoutClient> {
    NSMutableData * _associatedObjectUUIDData;
    NSObject<OS_dispatch_queue> * _clientQueue;
    <_HKActiveWorkoutDelegate> * _delegate;
    NSDate * _lastObservedDate;
    <_HKActiveWorkoutLifecycleDelegate> * _lifecycleDelegate;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSMutableDictionary * _resumeDataByType;
    <NSXPCProxyCreating> * _serverProxy;
    int  _serverState;
    BOOL  _shouldUseDeviceData;
    int  _workoutState;
}

@property (getter=_associatedObjectUUIDData, readonly) NSData *associatedObjectUUIDData;
@property (readonly, copy) NSString *debugDescription;
@property <_HKActiveWorkoutDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=_lifecycleDelegate, setter=_setLifecycleDelegate:) <_HKActiveWorkoutLifecycleDelegate> *lifecycleDelegate;
@property (readonly) NSDictionary *resumeDataByType;
@property (readonly) int serverState;
@property (getter=_shouldUseDeviceData, readonly) BOOL shouldUseDeviceData;
@property (readonly) Class superclass;
@property (readonly) int workoutState;

+ (id)_clientInterface;
+ (id)_serverInterface;
+ (id)_workoutWithActivityType:(unsigned int)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 duration:(double)arg5 totalActiveEnergyBurned:(id)arg6 totalBasalEnergyBurned:(id)arg7 totalDistance:(id)arg8 goalType:(unsigned int)arg9 goal:(id)arg10 shouldUseDeviceData:(BOOL)arg11 metadata:(id)arg12;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addSamples:(id)arg1;
- (id)_associatedObjectUUIDData;
- (void)_attachServerWithClientQueue:(id)arg1 lifecycleDelegate:(id)arg2 connection:(id)arg3 completion:(id /* block */)arg4;
- (void)_connectionDidEncounterError:(id)arg1;
- (void)_handleWorkoutPausedWithDate:(id)arg1;
- (id)_inactiveCopy;
- (id)_init;
- (id)_lifecycleDelegate;
- (BOOL)_objectCanBeSaved:(id*)arg1;
- (id)_propertyQueue_serverConfiguration;
- (void)_queue_addActiveEnergyBurned:(id)arg1;
- (void)_queue_addAssociatedObjectUUIDs:(id)arg1;
- (void)_queue_addBasalEnergyBurned:(id)arg1;
- (void)_queue_addDistance:(id)arg1;
- (void)_queue_alertDelegateDidEncounterError:(id)arg1;
- (void)_queue_alertDelegateDidUpdateState:(int)arg1 date:(id)arg2;
- (void)_queue_alertDelegateWorkoutDidUpdateTotalActiveEnergyBurned;
- (void)_queue_alertDelegateWorkoutDidUpdateTotalBasalEnergyBurned;
- (void)_queue_alertDelegateWorkoutDidUpdateTotalDistance;
- (void)_queue_deactivate;
- (id)_queue_endDate;
- (BOOL)_queue_serverAttached;
- (void)_queue_setEndDate:(id)arg1;
- (void)_queue_transitionToServerState:(int)arg1;
- (void)_queue_updateTotalsWithQuantity:(id)arg1 quantityType:(id)arg2;
- (BOOL)_serverAttached;
- (id)_serverProxy;
- (void)_setEndDate:(id)arg1;
- (void)_setLifecycleDelegate:(id)arg1;
- (void)_setServerProxy:(id)arg1;
- (void)_setTotalDistance:(id)arg1;
- (void)_setTotalEnergyBurned:(id)arg1;
- (BOOL)_shouldUseDeviceData;
- (id)_workoutServerWithErrorHandler:(id /* block */)arg1;
- (void)activateWorkoutWithCompletion:(id /* block */)arg1;
- (id)delegate;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (void)endWorkoutWithDate:(id)arg1 completion:(id /* block */)arg2;
- (void)endWorkoutWithDate:(id)arg1 metadata:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithCoder:(id)arg1;
- (id)metadata;
- (void)pauseWorkoutWithDate:(id)arg1 completion:(id /* block */)arg2;
- (id)resumeDataByType;
- (void)resumeWorkoutFromDate:(id)arg1 completion:(id /* block */)arg2;
- (void)serverFailedWithError:(id)arg1;
- (void)serverPausedWithDate:(id)arg1 completion:(id /* block */)arg2;
- (int)serverState;
- (void)serverStoppedWithDate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)totalDistance;
- (id)totalEnergyBurned;
- (void)updateTotalsWithQuantities:(id)arg1 resumeData:(id)arg2 UUIDs:(id)arg3;
- (int)workoutState;

@end