/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDBackingiOSAccount : CKDBackingAccount {
    ACAccountStore * _accountStore;
    ACAccount * _parentAppleAccount;
}

@property (nonatomic, readonly) ACAccountStore *accountStore;
@property (nonatomic, readonly) ACAccount *ckAccount;
@property (nonatomic, retain) ACAccount *parentAppleAccount;

+ (id)accountWithIdentifier:(id)arg1 inStore:(id)arg2;
+ (void)determineCloudKitInfoFromEmail:(id)arg1 password:(id)arg2 completion:(id /* block */)arg3;
+ (id)primaryAccountInStore:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithParentAccount:(id)arg1 inStore:(id)arg2;
- (id)accountPropertiesForDataclass:(id)arg1;
- (id)accountStore;
- (id)ckAccount;
- (id)cloudKitAuthToken;
- (BOOL)cloudKitIsEnabled;
- (BOOL)cloudPhotosIsEnabled;
- (id)dsid;
- (id)iCloudAuthToken;
- (BOOL)iCloudDriveAllowsCellularAccess;
- (id)identifier;
- (id)parentAppleAccount;
- (id)primaryEmail;
- (void)setParentAppleAccount:(id)arg1;

@end
