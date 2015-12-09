/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPhotoMigrationSupport.framework/iPhotoMigrationSupport
 */

@interface BLAlertViewController : UIViewController {
    UIActivityIndicatorView * _activityIndicator;
    UIButton * _cancelButton;
    NSString * _cancelButtonTitle;
    <BLAlertViewControllerDelegate> * _delegate;
    UIButton * _firstOtherButton;
    NSString * _firstOtherButtonTitle;
    struct CGSize { 
        float width; 
        float height; 
    }  _formSize;
    BOOL  _hasActivity;
    NSString * _message;
    UILabel * _messageLabel;
    float  _progress;
    UIProgressView * _progressView;
    UIButton * _secondOtherButton;
    NSString * _secondOtherButtonTitle;
    BOOL  _showsActivityIndicator;
    BOOL  _showsProgressIndicator;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, retain) UIButton *cancelButton;
@property (nonatomic, readonly) int cancelButtonIndex;
@property (nonatomic, retain) NSString *cancelButtonTitle;
@property (nonatomic) <BLAlertViewControllerDelegate> *delegate;
@property (nonatomic, retain) UIButton *firstOtherButton;
@property (nonatomic, retain) NSString *firstOtherButtonTitle;
@property (nonatomic) struct CGSize { float x1; float x2; } formSize;
@property (nonatomic) BOOL hasActivity;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) UILabel *messageLabel;
@property (nonatomic) float progress;
@property (nonatomic, retain) UIProgressView *progressView;
@property (nonatomic, retain) UIButton *secondOtherButton;
@property (nonatomic, retain) NSString *secondOtherButtonTitle;
@property (nonatomic) BOOL showsActivityIndicator;
@property (nonatomic) BOOL showsProgressIndicator;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_recalculateFormSize;
- (void)_sizeContent;
- (id)activityIndicator;
- (void)cancelAction:(id)arg1;
- (id)cancelButton;
- (int)cancelButtonIndex;
- (id)cancelButtonTitle;
- (id)delegate;
- (id)firstOtherButton;
- (void)firstOtherButtonAction:(id)arg1;
- (id)firstOtherButtonTitle;
- (struct CGSize { float x1; float x2; })formSize;
- (struct CGSize { float x1; float x2; })formSizeForOrientation:(int)arg1;
- (BOOL)hasActivity;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 firstOtherButtonTitle:(id)arg4 secondOtherButtonTitle:(id)arg5;
- (id)message;
- (id)messageLabel;
- (float)progress;
- (id)progressView;
- (id)secondOtherButton;
- (void)secondOtherButtonAction:(id)arg1;
- (id)secondOtherButtonTitle;
- (void)setActivityIndicator:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFirstOtherButton:(id)arg1;
- (void)setFirstOtherButtonTitle:(id)arg1;
- (void)setFormSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setHasActivity:(BOOL)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageLabel:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgressView:(id)arg1;
- (void)setSecondOtherButton:(id)arg1;
- (void)setSecondOtherButtonTitle:(id)arg1;
- (void)setShowsActivityIndicator:(BOOL)arg1;
- (void)setShowsProgressIndicator:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (BOOL)showsActivityIndicator;
- (BOOL)showsProgressIndicator;
- (id)titleLabel;
- (void)updateProgressAndActivityIndicators;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end