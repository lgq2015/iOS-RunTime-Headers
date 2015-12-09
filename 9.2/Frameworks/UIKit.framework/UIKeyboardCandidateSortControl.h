/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateSortControl : UIView {
    int  _candidatesVisualStyle;
    BOOL  _legacyAlertAppearance;
    UIKeyboardCandidateBarSegmentControl * _segmentedControl;
    UIKBThemedView * _themedView;
}

@property (readonly) UISegmentedControl *segmentedControl;
@property (nonatomic, retain) UIKBThemedView *themedView;

+ (BOOL)_preventsAppearanceProxyCustomization;

- (void)_setRenderConfig:(id)arg1;
- (void)addSegmentedControlWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 candidatesVisualStyle:(int)arg2 legacyAlertAppearance:(BOOL)arg3;
- (void)layoutSubviews;
- (BOOL)needsToUpdateSortControlForTitles:(id)arg1;
- (id)segmentedControl;
- (void)selectNextSegment;
- (void)selectPreviousSegment;
- (void)setSortControlTitles:(id)arg1;
- (void)setThemedView:(id)arg1;
- (id)themedView;
- (void)updateTitleTextAttributes;

@end