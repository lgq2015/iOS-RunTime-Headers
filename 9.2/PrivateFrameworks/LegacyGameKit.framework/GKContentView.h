/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LegacyGameKit.framework/LegacyGameKit
 */

@interface GKContentView : UIView {
    UIActivityIndicatorView * _activityIndicator;
    UIButton * _cancelButton;
    NSArray * _connectionButtons;
    UIImageView * _iconView;
    UILabel * _messageLabel;
    BOOL  _needsLayout;
    UIButton * _otherButton;
    UITableView * _table;
    UIImageView * _tableWellView;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, retain) UIButton *cancelButton;
@property (nonatomic, readonly, retain) NSArray *connectionButtons;
@property (nonatomic) UIImage *icon;
@property (nonatomic, retain) UIImageView *iconView;
@property (nonatomic) NSString *message;
@property (nonatomic, readonly) UIFont *messageFont;
@property (nonatomic, retain) UILabel *messageLabel;
@property (nonatomic) int numberOfMessageLines;
@property (nonatomic) int numberOfTitleLines;
@property (nonatomic, retain) UIButton *otherButton;
@property (nonatomic, readonly, retain) UITableView *table;
@property (nonatomic) NSString *title;
@property (nonatomic, readonly) UIFont *titleFont;
@property (nonatomic, retain) UILabel *titleLabel;

+ (float)maxTextWidth;

- (id)_createButton:(BOOL)arg1;
- (void)_createCancelButtonWithTitle:(id)arg1;
- (id)_createConnectionButtonWithType:(unsigned int)arg1;
- (void)_createMessageLabelIfNeeded;
- (void)_createOtherButtonWithTitle:(id)arg1;
- (void)_createTitleLabelIfNeeded;
- (id)activityIndicator;
- (id)cancelButton;
- (id)connectionButtons;
- (void)dealloc;
- (id)icon;
- (id)iconView;
- (id)initWithTitle:(id)arg1 message:(id)arg2 icon:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitle:(id)arg5;
- (void)layout;
- (void)layoutIfNeeded;
- (id)message;
- (id)messageFont;
- (id)messageLabel;
- (int)numberOfMessageLines;
- (int)numberOfTitleLines;
- (id)otherButton;
- (void)setActivityIndicator:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setConnectionButtonTypes:(unsigned int)arg1;
- (void)setIcon:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageLabel:(id)arg1;
- (void)setNumberOfMessageLines:(int)arg1;
- (void)setNumberOfTitleLines:(int)arg1;
- (void)setOtherButton:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)showActivityIndicator:(BOOL)arg1;
- (id)table;
- (id)title;
- (id)titleFont;
- (id)titleLabel;

@end