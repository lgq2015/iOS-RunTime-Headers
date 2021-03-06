/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMagicMoveTextureZOrdererMatch : NSObject {
    TSDMagicMoveAnimationMatch * _animationMatch;
    TSDTextureSet * _incomingTexture;
    int  _incomingZIndex;
    BOOL  _isIncomingZIndexUnmatched;
    BOOL  _isOutgoingZIndexUnmatched;
    TSDTextureSet * _outgoingTexture;
    int  _outgoingZIndex;
}

@property (nonatomic, readonly) TSDMagicMoveAnimationMatch *animationMatch;
@property (nonatomic, readonly) TSDTextureSet *incomingTexture;
@property (nonatomic) int incomingZIndex;
@property (nonatomic, readonly) BOOL isIncomingZIndexUnmatched;
@property (nonatomic, readonly) BOOL isOutgoingZIndexUnmatched;
@property (nonatomic, readonly) TSDTextureSet *outgoingTexture;
@property (nonatomic) int outgoingZIndex;

- (id)animationMatch;
- (void)dealloc;
- (id)description;
- (id)incomingTexture;
- (int)incomingZIndex;
- (id)initWithAnimationMatch:(id)arg1;
- (float)interpolatedZIndexAtPercent:(float)arg1;
- (float)intersectionPercentWithZOrdererMatch:(id)arg1;
- (BOOL)intersectsZOrdererMatch:(id)arg1;
- (BOOL)intersectsZOrdererMatch:(id)arg1 withAttemptedZIndex:(int)arg2;
- (BOOL)isIncomingZIndexUnmatched;
- (BOOL)isOutgoingZIndexUnmatched;
- (id)outgoingTexture;
- (int)outgoingZIndex;
- (void)setIncomingZIndex:(int)arg1;
- (void)setOutgoingZIndex:(int)arg1;

@end
