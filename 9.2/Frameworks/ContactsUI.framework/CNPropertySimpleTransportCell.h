/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPropertySimpleTransportCell : CNPropertySimpleCell {
    UIColor * _actionsColor;
    BOOL  _allowsActions;
    UIImageView * _starView;
    CNTransportButton * _transportIcon1;
    CNTransportButton * _transportIcon2;
}

@property (nonatomic, retain) UIColor *actionsColor;
@property (nonatomic) BOOL allowsActions;
@property (nonatomic, readonly) BOOL shouldShowStar;
@property (nonatomic, readonly) UIImageView *standardStarView;
@property (nonatomic, readonly) CNTransportButton *standardTransportIcon;
@property (nonatomic, readonly) CNTransportButton *transportIcon1;
@property (nonatomic, readonly) CNTransportButton *transportIcon2;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_updateStarImageForView:(id)arg1;
- (id)actionsColor;
- (BOOL)allowsActions;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)rightMostView;
- (void)setActionsColor:(id)arg1;
- (void)setAllowsActions:(BOOL)arg1;
- (void)setCardGroupItem:(id)arg1;
- (BOOL)shouldPerformDefaultAction;
- (BOOL)shouldShowStar;
- (id)standardStarView;
- (id)standardTransportIcon;
- (void)transportButtonClicked:(id)arg1;
- (id)transportIcon1;
- (id)transportIcon2;
- (void)updateStarIcon;
- (void)updateTransportButtons;
- (void)updateWithPropertyItem:(id)arg1;
- (id)variableConstraints;

@end
