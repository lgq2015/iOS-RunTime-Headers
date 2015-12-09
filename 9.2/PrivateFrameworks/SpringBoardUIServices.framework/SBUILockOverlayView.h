/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUILockOverlayView : SBInteractionPassThroughView {
    UIButton * _actionButton;
    <SBUILockOverlayViewDelegate> * _delegate;
    _UILegibilitySettings * _legibilitySettings;
    unsigned int  _style;
    UILabel * _subtitleLabel;
    UIResizableView * _textContainerView;
    UILabel * _titleLabel;
    SBLockOverlayStylePropertiesFactory * _underlayPropertiesFactory;
}

@property (nonatomic, readonly, retain) UIButton *actionButton;
@property (nonatomic) <SBUILockOverlayViewDelegate> *delegate;
@property (nonatomic, readonly, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) unsigned int style;
@property (nonatomic, readonly, retain) UILabel *subtitleLabel;
@property (nonatomic, readonly, retain) UILabel *titleLabel;
@property (nonatomic, readonly, retain) SBLockOverlayStylePropertiesFactory *underlayPropertiesFactory;

- (id)_actionFont;
- (void)_buttonPressed;
- (id)_legibilitySettingsForStyle:(unsigned int)arg1;
- (float)_maxLabelWidth;
- (unsigned int)_numberOfLinesForText:(id)arg1 font:(id)arg2 size:(struct CGSize { float x1; float x2; })arg3;
- (void)_sizeView:(id)arg1 forFixedWith:(BOOL)arg2;
- (id)_subtitleFont;
- (id)_titleFont;
- (id)actionButton;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(unsigned int)arg2;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (void)setDelegate:(id)arg1;
- (unsigned int)style;
- (id)subtitleLabel;
- (id)titleLabel;
- (id)underlayPropertiesFactory;

@end