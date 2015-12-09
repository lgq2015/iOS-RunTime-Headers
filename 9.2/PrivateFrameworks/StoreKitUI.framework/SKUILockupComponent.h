/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUILockupComponent : SKUIPageComponent {
    SKUIEditorialComponent * _editorial;
    SKUIItem * _item;
    long long  _itemIdentifier;
    struct SKUILockupStyle { 
        int artworkSize; 
        int layoutStyle; 
        unsigned int visibleFields; 
    }  _lockupStyle;
}

@property (nonatomic, readonly) BOOL _needsItemData;
@property (nonatomic, readonly) SKUIEditorialComponent *editorial;
@property (nonatomic, readonly) SKUIItem *item;
@property (nonatomic, readonly) long long itemIdentifier;
@property (nonatomic, readonly) struct SKUILockupStyle { int x1; int x2; unsigned int x3; } lockupStyle;
@property (nonatomic, readonly) SKUILockupViewElement *viewElement;

- (void).cxx_destruct;
- (BOOL)_needsItemData;
- (void)_setItem:(id)arg1;
- (void)_setLockupStyle:(struct SKUILockupStyle { int x1; int x2; unsigned int x3; })arg1;
- (int)componentType;
- (id)editorial;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithItem:(id)arg1 style:(struct SKUILockupStyle { int x1; int x2; unsigned int x3; })arg2;
- (id)initWithItemIdentifier:(long long)arg1 style:(struct SKUILockupStyle { int x1; int x2; unsigned int x3; })arg2;
- (id)initWithViewElement:(id)arg1;
- (id)item;
- (long long)itemIdentifier;
- (struct SKUILockupStyle { int x1; int x2; unsigned int x3; })lockupStyle;

@end