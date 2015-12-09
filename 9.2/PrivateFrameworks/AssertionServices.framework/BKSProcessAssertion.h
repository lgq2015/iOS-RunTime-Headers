/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@interface BKSProcessAssertion : NSObject <BKSProcessAssertionClientHandler> {
    BOOL  _acquired;
    BOOL  _acquiring;
    id /* block */  _acquisitionHandler;
    NSString * _bundleIdentifier;
    BKSProcessAssertionClient * _client;
    NSObject<OS_dispatch_queue> * _clientQueue;
    unsigned int  _flags;
    NSString * _identifier;
    id /* block */  _invalidationHandler;
    BSSignal * _invalidationSignal;
    NSString * _name;
    int  _pid;
    unsigned int  _reason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int flags;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) unsigned int reason;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BOOL valid;

+ (id)NameForReason:(unsigned int)arg1;

- (void)_clientQueue_acquireAssertion;
- (void)_clientQueue_invalidate:(BOOL)arg1;
- (void)_clientQueue_notifyAssertionAcquired:(BOOL)arg1;
- (void)_clientQueue_updateAssertion;
- (void)assertionDidInvalidate;
- (void)dealloc;
- (unsigned int)flags;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1 flags:(unsigned int)arg2 reason:(unsigned int)arg3 name:(id)arg4 withHandler:(id /* block */)arg5;
- (id)initWithPID:(int)arg1 flags:(unsigned int)arg2 reason:(unsigned int)arg3 name:(id)arg4 withHandler:(id /* block */)arg5;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)name;
- (unsigned int)reason;
- (void)setFlags:(unsigned int)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setName:(id)arg1;
- (void)setReason:(unsigned int)arg1;
- (BOOL)valid;

@end