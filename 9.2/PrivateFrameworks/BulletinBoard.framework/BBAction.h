/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBAction : NSObject <NSCopying, NSSecureCoding> {
    int  _actionType;
    NSDictionary * _activatePluginContext;
    NSString * _activatePluginName;
    unsigned int  _activationMode;
    BBAppearance * _appearance;
    BOOL  _authenticationRequired;
    int  _behavior;
    NSDictionary * _behaviorParameters;
    BOOL  _deliverResponse;
    NSString * _identifier;
    id /* block */  _internalBlock;
    NSString * _launchBundleID;
    BOOL  _launchCanBypassPinLock;
    NSURL * _launchURL;
    NSString * _remoteServiceBundleIdentifier;
    NSString * _remoteViewControllerClassName;
    BOOL  _shouldDismissBulletin;
}

@property (nonatomic) int actionType;
@property (nonatomic, copy) NSDictionary *activatePluginContext;
@property (nonatomic, copy) NSString *activatePluginName;
@property (nonatomic) unsigned int activationMode;
@property (nonatomic, copy) BBAppearance *appearance;
@property (getter=isAuthenticationRequired, nonatomic) BOOL authenticationRequired;
@property (nonatomic) int behavior;
@property (nonatomic, copy) NSDictionary *behaviorParameters;
@property (nonatomic) BOOL canBypassPinLock;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) id /* block */ internalBlock;
@property (nonatomic, copy) NSString *launchBundleID;
@property (nonatomic) BOOL launchCanBypassPinLock;
@property (nonatomic, copy) NSURL *launchURL;
@property (nonatomic, copy) NSString *remoteServiceBundleIdentifier;
@property (nonatomic, copy) NSString *remoteViewControllerClassName;
@property (nonatomic) BOOL shouldDismissBulletin;

+ (id)action;
+ (id)actionWithActivatePluginName:(id)arg1 activationContext:(id)arg2;
+ (id)actionWithAppearance:(id)arg1;
+ (id)actionWithCallblock:(id /* block */)arg1;
+ (id)actionWithIdentifier:(id)arg1;
+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2;
+ (id)actionWithLaunchBundleID:(id)arg1;
+ (id)actionWithLaunchBundleID:(id)arg1 callblock:(id /* block */)arg2;
+ (id)actionWithLaunchURL:(id)arg1;
+ (id)actionWithLaunchURL:(id)arg1 callblock:(id /* block */)arg2;
+ (BOOL)supportsSecureCoding;

- (id)_nameForActionType:(int)arg1;
- (int)actionType;
- (id)activatePluginContext;
- (id)activatePluginName;
- (unsigned int)activationMode;
- (id)appearance;
- (int)behavior;
- (id)behaviorParameters;
- (id)bundleID;
- (BOOL)canBypassPinLock;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)deliverResponse:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasInteractiveAction;
- (BOOL)hasLaunchAction;
- (BOOL)hasPluginAction;
- (BOOL)hasRemoteViewAction;
- (unsigned int)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id /* block */)internalBlock;
- (BOOL)isAuthenticationRequired;
- (BOOL)isEqual:(id)arg1;
- (id)launchBundleID;
- (BOOL)launchCanBypassPinLock;
- (id)launchURL;
- (id)partialDescription;
- (id)remoteServiceBundleIdentifier;
- (id)remoteViewControllerClassName;
- (void)setActionType:(int)arg1;
- (void)setActivatePluginContext:(id)arg1;
- (void)setActivatePluginName:(id)arg1;
- (void)setActivationMode:(unsigned int)arg1;
- (void)setAppearance:(id)arg1;
- (void)setAuthenticationRequired:(BOOL)arg1;
- (void)setBehavior:(int)arg1;
- (void)setBehaviorParameters:(id)arg1;
- (void)setCallblock:(id /* block */)arg1;
- (void)setCanBypassPinLock:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInternalBlock:(id /* block */)arg1;
- (void)setLaunchBundleID:(id)arg1;
- (void)setLaunchCanBypassPinLock:(BOOL)arg1;
- (void)setLaunchURL:(id)arg1;
- (void)setRemoteServiceBundleIdentifier:(id)arg1;
- (void)setRemoteViewControllerClassName:(id)arg1;
- (void)setShouldDismissBulletin:(BOOL)arg1;
- (BOOL)shouldDismissBulletin;
- (id)url;

@end