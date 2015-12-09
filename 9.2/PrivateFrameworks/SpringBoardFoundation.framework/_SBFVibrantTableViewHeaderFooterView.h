/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface _SBFVibrantTableViewHeaderFooterView : UITableViewHeaderFooterView {
    _UIBackdropView * _backdrop;
    NSString * _backdropGroupName;
    int  _graphicsQuality;
    UIView * _plusDView;
    BOOL  _wantsPlusDLayer;
}

@property (nonatomic, copy) NSString *backdropGroupName;
@property (nonatomic) int graphicsQuality;
@property (nonatomic) BOOL wantsPlusDLayer;

+ (id)defaultBackgroundColorForGraphicsQuality:(int)arg1;

- (id)backdropGroupName;
- (void)dealloc;
- (int)graphicsQuality;
- (id)initWithCoder:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (int)initialGraphicsQuality;
- (void)setBackdropGroupName:(id)arg1;
- (void)setFloating:(BOOL)arg1;
- (void)setGraphicsQuality:(int)arg1;
- (void)setWantsPlusDLayer:(BOOL)arg1;
- (BOOL)wantsPlusDLayer;

@end