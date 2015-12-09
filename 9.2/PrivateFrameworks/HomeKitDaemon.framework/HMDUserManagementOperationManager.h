/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUserManagementOperationManager : NSObject <HAPTimerDelegate> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSHashTable * _observedAccessories;
    NSMutableArray * _operations;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HAPTimer * _saveTimer;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSHashTable *observedAccessories;
@property (nonatomic, readonly) NSArray *operations;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, readonly) HAPTimer *saveTimer;
@property (readonly) Class superclass;

+ (void)initialize;
+ (void)setSharedManager:(id)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)__deregisterIfNeededForReachablityChangeNotificationsForAccessory:(id)arg1;
- (void)__executeOperation:(id)arg1;
- (void)__registerIfNeededForReachablityChangeNotifications;
- (void)__registerIfNeededForReachablityChangeNotificationsForAccessory:(id)arg1;
- (void)__removeOperationAndProcessDependantOperations:(id)arg1;
- (void)__save;
- (id)_filteredOperationsForAccessory:(id)arg1;
- (id)_filteredOperationsWithDependency:(id)arg1;
- (void)_handleAccessoryIsReachable:(id)arg1;
- (void)_handleAddedOperation:(id)arg1;
- (void)_handleRemovedOperation:(id)arg1;
- (void)_reallySave;
- (void)addOperation:(id)arg1;
- (void)cancelAllOperations;
- (id)clientQueue;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)init;
- (id)initWithOperations:(id)arg1;
- (id)observedAccessories;
- (void)operationCancelled:(id)arg1;
- (void)operationStoppedBackingOff:(id)arg1;
- (id)operations;
- (id)propertyQueue;
- (void)removeOperation:(id)arg1;
- (id)saveTimer;
- (id)shortDescription;
- (void)timerDidFire:(id)arg1;

@end