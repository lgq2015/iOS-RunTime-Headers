/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchResultsContentView : UIView {
    NSAttributedString * _attributedTitle;
    NSString * _auxSubtitle;
    UILabel * _auxSubtitleLabel;
    float  _clippingOffsetY;
    UIView * _clippingView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _contentInsets;
    float  _draggingOffsetX;
    struct CGSize { 
        float width; 
        float height; 
    }  _imageSize;
    NSMutableArray * _imageViews;
    NSPointerArray * _images;
    unsigned int  _maxImageCount;
    NSString * _subtitle;
    UILabel * _subtitleLabel;
    NSAttributedString * _title;
    UILabel * _titleLabel;
}

@property (nonatomic, copy) NSString *auxSubtitle;
@property (nonatomic) float clippingOffsetY;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInsets;
@property (nonatomic) float draggingOffsetX;
@property (nonatomic) struct CGSize { float x1; float x2; } imageSize;
@property (nonatomic) unsigned int maxImageCount;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSAttributedString *title;

- (void).cxx_destruct;
- (void)_preferredContentSizeChanged:(id)arg1;
- (void)_updateAuxSubtitleLabel;
- (void)_updateImageContainers;
- (void)_updateImageView;
- (void)_updateSubtitleLabel;
- (void)_updateTitleLabel;
- (id)auxSubtitle;
- (void)clearImages;
- (float)clippingOffsetY;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (void)dealloc;
- (float)draggingOffsetX;
- (struct CGSize { float x1; float x2; })imageSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (unsigned int)maxImageCount;
- (void)setAuxSubtitle:(id)arg1;
- (void)setClippingOffsetY:(float)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setDraggingOffsetX:(float)arg1;
- (void)setImage:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setMaxImageCount:(unsigned int)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
