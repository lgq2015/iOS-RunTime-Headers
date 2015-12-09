/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUSimpleMenuViewController : SUMenuViewController {
    NSString * _cancelButtonTitle;
    NSArray * _titles;
}

@property (nonatomic, copy) NSString *cancelButtonTitle;
@property (nonatomic, copy) NSArray *titles;

- (void)_cancelAction:(id)arg1;
- (id)cancelButtonTitle;
- (void)dealloc;
- (id)initWithTitles:(id)arg1;
- (BOOL)isMenuItemEnabledAtIndex:(int)arg1;
- (int)numberOfMenuItems;
- (void)reloadContentSizeForViewInPopover;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setTitles:(id)arg1;
- (id)titleOfMenuItemAtIndex:(int)arg1;
- (id)titles;

@end