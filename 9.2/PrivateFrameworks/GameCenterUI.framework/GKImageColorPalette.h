/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKImageColorPalette : GKColorPalette {
    float  _borderPercentageForBorderDetection;
    unsigned long  _brightnessHistogram;
    unsigned long  _brightnessSpread;
    NSArray * _bubbleColors;
    unsigned long  _grayscaleSpread;
    unsigned long  _hueHistogram;
    unsigned long  _hueSpread;
    struct HSVColor { float x1; float x2; float x3; } * _imageHSVMap;
    struct CGSize { 
        float width; 
        float height; 
    }  _imageSize;
    unsigned long  _saturationHistogram;
    unsigned long  _saturationSpread;
}

@property (retain) NSArray *bubbleColors;

- (BOOL)analyzeImage:(struct CGImage { }*)arg1;
- (id)bubbleColors;
- (void)clearMainHistograms;
- (void)clearSaturationAndBrightnessHistograms;
- (void)findBrightColors;
- (void)generateHSVMapWithContext:(struct CGContext { }*)arg1;
- (id)initWithImage:(id)arg1;
- (void)iterateOverPixelsWithBlock:(id /* block */)arg1 forHue:(unsigned long)arg2;
- (void)printHistogram:(unsigned int*)arg1 ofSize:(unsigned long)arg2;
- (void)reset;
- (void)setBubbleColors:(id)arg1;
- (unsigned long)weightHistogram:(unsigned int*)arg1 size:(unsigned long)arg2 spread:(unsigned long)arg3;

@end