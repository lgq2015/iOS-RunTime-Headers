/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBKeyView : UIView <UIKBCacheableView> {
    int  _cachedAnchorCorner;
    BOOL  _cachedControlKeyRenderingPreference;
    NSString * _cachedTraitsHashString;
    NSMutableDictionary * _keyLayers;
    UIKeyboardMenuView * _popupMenu;
    BOOL  _renderAsMask;
    int  _renderedKeyState;
    struct __CFBoolean { } * m_allowsCaching;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  m_drawFrame;
    UIKBRenderFactory * m_factory;
    UIKBTree * m_key;
    UIKBTree * m_keyplane;
    UIKBRenderConfig * m_renderConfig;
}

@property (nonatomic, readonly) BOOL cacheDeferable;
@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic) int cachedAnchorCorner;
@property (nonatomic) BOOL cachedControlKeyRenderingPreference;
@property (readonly) int cachedRenderFlags;
@property (nonatomic, retain) NSString *cachedTraitsHashString;
@property (nonatomic, readonly) float cachedWidth;
@property (nonatomic, readonly) UIKBKeyView *contentsKeyView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } displayInsets;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } drawFrame;
@property (nonatomic, retain) UIKBRenderFactory *factory;
@property (nonatomic, readonly) BOOL hasRendered;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL keepNonPersistent;
@property (nonatomic, readonly) UIKBTree *key;
@property (nonatomic, readonly) UIKBTree *keyplane;
@property (nonatomic) UIKeyboardMenuView *popupMenu;
@property (nonatomic) BOOL renderAsMask;
@property (nonatomic, retain) UIKBRenderConfig *renderConfig;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } variantFrame;

- (void)_applyAppearanceInvocations;
- (BOOL)_canDrawContent;
- (id)_generateBackdropMaskImage;
- (void)_populateLayer:(id)arg1 withContents:(id)arg2;
- (BOOL)_shouldUpdateLayers;
- (BOOL)_viewShouldBeOpaque;
- (BOOL)cacheDeferable;
- (id)cacheKey;
- (id)cacheKeysForRenderFlags:(id)arg1;
- (int)cachedAnchorCorner;
- (BOOL)cachedControlKeyRenderingPreference;
- (int)cachedRenderFlags;
- (id)cachedTraitsHashString;
- (float)cachedWidth;
- (id)contentsKeyView;
- (void)dealloc;
- (int)didInputSubTree:(id)arg1;
- (void)dimKeys:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })displayInsets;
- (void)displayLayer:(id)arg1;
- (void)drawContentsOfRenderers:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })drawFrame;
- (id)factory;
- (unsigned int)focusableVariantCount;
- (BOOL)hasRendered;
- (int)imageOrientationForLayer:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (BOOL)keepNonPersistent;
- (id)key;
- (id)keyplane;
- (id)layerForRenderFlags:(int)arg1;
- (id)popupMenu;
- (void)prepareForDisplay;
- (BOOL)renderAsMask;
- (id)renderConfig;
- (id)renderFlagsForTraits:(id)arg1;
- (BOOL)requiresSublayers;
- (void)setCachedAnchorCorner:(int)arg1;
- (void)setCachedControlKeyRenderingPreference:(BOOL)arg1;
- (void)setCachedTraitsHashString:(id)arg1;
- (void)setDrawFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFactory:(id)arg1;
- (void)setPopupMenu:(id)arg1;
- (void)setRenderAsMask:(BOOL)arg1;
- (void)setRenderConfig:(id)arg1;
- (id)subTreeHitTest:(struct CGPoint { float x1; float x2; })arg1;
- (int)textEffectsVisibilityLevel;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })variantFrame;
- (void)willDisplayModalActionView:(id)arg1 withSubTreeKeyView:(id)arg2 completion:(id /* block */)arg3;

@end
