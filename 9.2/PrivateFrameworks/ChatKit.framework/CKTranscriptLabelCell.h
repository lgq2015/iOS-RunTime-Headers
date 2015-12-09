/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptLabelCell : CKTranscriptCell {
    UILabel * _label;
    BOOL  _wantsContactImageLayout;
}

@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic) BOOL wantsContactImageLayout;

+ (id)label;

- (id)attributedText;
- (void)configureForChatItem:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)label;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForContents;
- (void)setAttributedText:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setOrientation:(BOOL)arg1;
- (void)setWantsContactImageLayout:(BOOL)arg1;
- (BOOL)wantsContactImageLayout;

@end