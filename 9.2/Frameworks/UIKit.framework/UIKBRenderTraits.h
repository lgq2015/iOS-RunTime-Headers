/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderTraits : NSObject <NSCopying> {
    UIKBGradient * _backgroundGradient;
    int  _blendForm;
    BOOL  _blurBlending;
    BOOL  _controlOpacities;
    UIKBTextStyle * _fallbackSymbolStyle;
    NSMutableArray * _foregroundRenderEffects;
    UIKBRenderGeometry * _geometry;
    NSString * _hashString;
    UIKBRenderTraits * _highlightedVariantTraits;
    BOOL  _honorControlOpacity;
    UIKBGradient * _layeredBackgroundGradient;
    UIKBGradient * _layeredForegroundGradient;
    NSMutableArray * _renderEffects;
    NSArray * _renderFlags;
    BOOL  _renderSecondarySymbolsSeparately;
    NSArray * _secondarySymbolStyles;
    UIKBTextStyle * _symbolStyle;
    NSArray * _variantGeometries;
    UIKBRenderTraits * _variantTraits;
}

@property (nonatomic, retain) UIKBGradient *backgroundGradient;
@property (nonatomic) int blendForm;
@property (nonatomic) BOOL blurBlending;
@property (nonatomic) BOOL controlOpacities;
@property (nonatomic, retain) UIKBTextStyle *fallbackSymbolStyle;
@property (nonatomic, readonly) NSArray *foregroundRenderEffects;
@property (nonatomic, retain) UIKBRenderGeometry *geometry;
@property (nonatomic, retain) NSString *hashString;
@property (nonatomic, retain) UIKBRenderTraits *highlightedVariantTraits;
@property (nonatomic, retain) UIKBGradient *layeredBackgroundGradient;
@property (nonatomic, retain) UIKBGradient *layeredForegroundGradient;
@property (nonatomic, readonly) NSArray *renderEffects;
@property (nonatomic, retain) NSArray *renderFlags;
@property (nonatomic) BOOL renderSecondarySymbolsSeparately;
@property (nonatomic, retain) NSArray *secondarySymbolStyles;
@property (nonatomic, retain) UIKBTextStyle *symbolStyle;
@property (nonatomic, retain) NSArray *variantGeometries;
@property (nonatomic, retain) UIKBRenderTraits *variantTraits;

+ (id)emptyTraits;
+ (id)traitsWithGeometry:(id)arg1;
+ (id)traitsWithSymbolStyle:(id)arg1;

- (void)addForegroundRenderEffect:(id)arg1;
- (void)addRenderEffect:(id)arg1;
- (id)backgroundGradient;
- (int)blendForm;
- (BOOL)blurBlending;
- (BOOL)controlOpacities;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)fallbackSymbolStyle;
- (id)foregroundRenderEffects;
- (id)geometry;
- (id)hashString;
- (id)highlightedVariantTraits;
- (BOOL)isEqual:(id)arg1;
- (id)layeredBackgroundGradient;
- (id)layeredForegroundGradient;
- (void)modifyForMasking;
- (void)overlayWithTraits:(id)arg1;
- (void)removeAllRenderEffects;
- (id)renderEffects;
- (id)renderFlags;
- (BOOL)renderSecondarySymbolsSeparately;
- (id)secondarySymbolStyles;
- (void)setBackgroundGradient:(id)arg1;
- (void)setBlendForm:(int)arg1;
- (void)setBlurBlending:(BOOL)arg1;
- (void)setControlOpacities:(BOOL)arg1;
- (void)setFallbackSymbolStyle:(id)arg1;
- (void)setGeometry:(id)arg1;
- (void)setHashString:(id)arg1;
- (void)setHighlightedVariantTraits:(id)arg1;
- (void)setLayeredBackgroundGradient:(id)arg1;
- (void)setLayeredForegroundGradient:(id)arg1;
- (void)setRenderFlags:(id)arg1;
- (void)setRenderSecondarySymbolsSeparately:(BOOL)arg1;
- (void)setSecondarySymbolStyles:(id)arg1;
- (void)setSymbolStyle:(id)arg1;
- (void)setVariantGeometries:(id)arg1;
- (void)setVariantTraits:(id)arg1;
- (id)symbolStyle;
- (id)variantGeometries;
- (id)variantTraits;

@end