/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoEditMutableModel : PLPhotoEditModel {
    _UIDynamicValueAnimation * _currentCopyAnimation;
    int  _transactionDepth;
}

@property (nonatomic) int appliedOrientation;
@property (getter=isAutoCropped, nonatomic) BOOL autoCropped;
@property (nonatomic, copy) NSArray *autoRedEyeCorrections;
@property (nonatomic, copy) NSString *autoSmartColorIdentifier;
@property (nonatomic) float autoSmartColorLevel;
@property (nonatomic, copy) NSString *autoSmartToneIdentifier;
@property (nonatomic) float autoSmartToneLevel;
@property (nonatomic, copy) NSString *autoWhiteBalanceIdentifier;
@property (nonatomic, copy) NSDictionary *autoWhiteBalanceSettings;
@property (nonatomic) float blackPointLevelOffset;
@property (nonatomic) float brightnessLevelOffset;
@property (nonatomic) float bwGrainLevelOffset;
@property (nonatomic) float bwHueLevelOffset;
@property (nonatomic) float bwNeutralGammaLevelOffset;
@property (nonatomic) float bwStrengthLevelOffset;
@property (nonatomic) float bwToneLevelOffset;
@property (nonatomic) float colorCastLevelOffset;
@property (nonatomic) float colorContrastLevelOffset;
@property (nonatomic) float colorVibrancyLevelOffset;
@property (nonatomic) float contrastLevelOffset;
@property (nonatomic, copy) NSString *effectFilterName;
@property (nonatomic) int effectFilterVersion;
@property (nonatomic) float exposureLevelOffset;
@property (nonatomic) float highlightsLevelOffset;
@property (nonatomic, copy) NSArray *legacyAutoEnhanceFilters;
@property (nonatomic) BOOL legacyAutoEnhanceIsOn;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } normalizedCropRect;
@property (nonatomic, copy) NSArray *redEyeCorrections;
@property (nonatomic) float shadowsLevelOffset;
@property (getter=isSmartBWEnabled, nonatomic) BOOL smartBWEnabled;
@property (nonatomic) float smartBWLevel;
@property (nonatomic, copy) NSDictionary *smartBWStatistics;
@property (getter=isSmartColorEnabled, nonatomic) BOOL smartColorEnabled;
@property (nonatomic) float smartColorLevel;
@property (nonatomic, copy) NSDictionary *smartColorStatistics;
@property (getter=isSmartToneEnabled, nonatomic) BOOL smartToneEnabled;
@property (nonatomic) float smartToneLevel;
@property (nonatomic, copy) NSDictionary *smartToneStatistics;
@property (nonatomic) float straightenAngle;
@property (getter=isWhiteBalanceEnabled, nonatomic) BOOL whiteBalanceEnabled;
@property (nonatomic) float whiteBalanceFaceI;
@property (nonatomic) float whiteBalanceFaceQ;
@property (nonatomic) float whiteBalanceFaceStrength;
@property (nonatomic) float whiteBalanceFaceWarmth;

- (id)_newModelChangeAnimation;
- (void)_setLevelInstanceVariable:(float*)arg1 toValue:(float)arg2;
- (void)addRedEyeCorrections:(id)arg1;
- (void)copyValuesFromModel:(id)arg1 animated:(BOOL)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)performChangesWithBlock:(id /* block */)arg1;
- (void)pl_setCropConstraintForDataConstraint:(struct CGSize { float x1; float x2; })arg1 imageGeometry:(id)arg2;
- (void)pl_setNormalizedCropRectForDataCrop:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 straightenAngle:(float)arg2 imageGeometry:(id)arg3;
- (void)removeRedEyeCorrections:(id)arg1;
- (void)setAppliedOrientation:(int)arg1;
- (void)setAutoCropped:(BOOL)arg1;
- (void)setAutoRedEyeCorrections:(id)arg1;
- (void)setAutoSmartColorIdentifier:(id)arg1;
- (void)setAutoSmartColorLevel:(float)arg1;
- (void)setAutoSmartToneIdentifier:(id)arg1;
- (void)setAutoSmartToneLevel:(float)arg1;
- (void)setAutoWhiteBalanceIdentifier:(id)arg1;
- (void)setAutoWhiteBalanceSettings:(id)arg1;
- (void)setBlackPointLevelOffset:(float)arg1;
- (void)setBrightnessLevelOffset:(float)arg1;
- (void)setBwGrainLevelOffset:(float)arg1;
- (void)setBwHueLevelOffset:(float)arg1;
- (void)setBwNeutralGammaLevelOffset:(float)arg1;
- (void)setBwStrengthLevelOffset:(float)arg1;
- (void)setBwToneLevelOffset:(float)arg1;
- (void)setColorCastLevelOffset:(float)arg1;
- (void)setColorContrastLevelOffset:(float)arg1;
- (void)setColorVibrancyLevelOffset:(float)arg1;
- (void)setContrastLevelOffset:(float)arg1;
- (void)setCropConstraintWidth:(int)arg1 height:(int)arg2;
- (void)setEffectFilterName:(id)arg1;
- (void)setEffectFilterVersion:(int)arg1;
- (void)setExposureLevelOffset:(float)arg1;
- (void)setHighlightsLevelOffset:(float)arg1;
- (void)setLegacyAutoEnhanceFilters:(id)arg1;
- (void)setLegacyAutoEnhanceIsOn:(BOOL)arg1;
- (void)setNormalizedCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setRedEyeCorrections:(id)arg1;
- (void)setShadowsLevelOffset:(float)arg1;
- (void)setSmartBWEnabled:(BOOL)arg1;
- (void)setSmartBWLevel:(float)arg1;
- (void)setSmartBWStatistics:(id)arg1;
- (void)setSmartColorEnabled:(BOOL)arg1;
- (void)setSmartColorLevel:(float)arg1;
- (void)setSmartColorStatistics:(id)arg1;
- (void)setSmartToneEnabled:(BOOL)arg1;
- (void)setSmartToneLevel:(float)arg1;
- (void)setSmartToneStatistics:(id)arg1;
- (void)setStraightenAngle:(float)arg1;
- (void)setWhiteBalanceEnabled:(BOOL)arg1;
- (void)setWhiteBalanceFaceI:(float)arg1;
- (void)setWhiteBalanceFaceQ:(float)arg1;
- (void)setWhiteBalanceFaceStrength:(float)arg1;
- (void)setWhiteBalanceFaceWarmth:(float)arg1;

@end
