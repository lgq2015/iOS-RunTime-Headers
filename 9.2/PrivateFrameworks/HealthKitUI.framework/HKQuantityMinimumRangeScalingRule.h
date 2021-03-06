/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKQuantityMinimumRangeScalingRule : HKAbstractMinimumRangeScalingRule {
    NSDictionary * _axisRangeQuantityOverrides;
    HKQuantity * _defaultYAxisRangeQuantity;
    HKUnit * _unit;
}

@property (nonatomic, retain) HKUnit *unit;

+ (id)ruleWithDefaultYAxisRange:(id)arg1 axisRangeOverrides:(id)arg2;

- (void).cxx_destruct;
- (void)_convertQuantities;
- (BOOL)isCompatibleWithQuantityType:(id)arg1;
- (void)setUnit:(id)arg1;
- (id)unit;

@end
