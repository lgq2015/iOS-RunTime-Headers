/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKConfiguration : NSObject {
    NSMutableDictionary * _cachedSettings;
    int  _notificationToken;
    NSObject<OS_dispatch_queue> * _settingsQueue;
}

@property (nonatomic) int shouldDisablePETs;
@property (nonatomic) int shouldFakeAuthSuccess;

+ (id)sharedConfiguration;

- (void).cxx_destruct;
- (id)configurationValueForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setConfigurationValue:(id)arg1 forKey:(id)arg2;
- (void)setShouldDisablePETs:(int)arg1;
- (void)setShouldFakeAuthSuccess:(int)arg1;
- (int)shouldDisablePETs;
- (int)shouldFakeAuthSuccess;

@end
