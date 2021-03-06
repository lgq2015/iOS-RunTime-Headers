/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosDataSourceSettings : PUSettings {
    double  _delayChanges;
    BOOL  _slowBackgroundFetch;
}

@property (nonatomic) double delayChanges;
@property (nonatomic) BOOL slowBackgroundFetch;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (double)delayChanges;
- (void)setDefaultValues;
- (void)setDelayChanges:(double)arg1;
- (void)setSlowBackgroundFetch:(BOOL)arg1;
- (BOOL)slowBackgroundFetch;

@end
