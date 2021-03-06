/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIInviteesViewConflictSearchCell : UITableViewCell {
    UILabel * _label;
    float  _leftInset;
    UIColor * _originalLabelFontColor;
    NSArray * _persistentConstraints;
    UIActivityIndicatorView * _spinner;
}

@property (nonatomic, retain) UILabel *label;
@property (nonatomic) float leftInset;
@property (nonatomic, retain) UIColor *originalLabelFontColor;
@property (nonatomic, retain) NSArray *persistentConstraints;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;

+ (id)_grayTextColor;
+ (id)_labelFont;

- (void).cxx_destruct;
- (void)_setText:(id)arg1 textColor:(id)arg2 spinnerEnabled:(BOOL)arg3;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)label;
- (float)leftInset;
- (id)originalLabelFontColor;
- (id)persistentConstraints;
- (void)setAvailabilityRequestInProgressState;
- (void)setInitialSearchInProgressState;
- (void)setLabel:(id)arg1;
- (void)setLeftInset:(float)arg1;
- (void)setNoAvailableTimesStateWithNumberOfExistingTimes:(unsigned int)arg1;
- (void)setOriginalLabelFontColor:(id)arg1;
- (void)setPersistentConstraints:(id)arg1;
- (void)setShowMoreState;
- (void)setSpinner:(id)arg1;
- (id)spinner;
- (void)updateConstraints;

@end
