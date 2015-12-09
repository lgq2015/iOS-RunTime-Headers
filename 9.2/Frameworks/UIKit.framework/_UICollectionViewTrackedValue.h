/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UICollectionViewTrackedValue : NSObject {
    int  _currentIndex;
    BOOL  _isAccumulating;
    float  _trackedValue;
    NSArray * _values;
    int  _valuesCount;
}

@property (nonatomic) BOOL isAccumulating;
@property (nonatomic) float trackedValue;

- (void).cxx_destruct;
- (void)addValue:(float)arg1;
- (id)init;
- (BOOL)isAccumulating;
- (void)setIsAccumulating:(BOOL)arg1;
- (void)setTrackedValue:(float)arg1;
- (float)speed;
- (float)trackedValue;

@end