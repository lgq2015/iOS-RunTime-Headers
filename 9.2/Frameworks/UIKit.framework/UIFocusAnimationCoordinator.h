/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIFocusAnimationCoordinator : NSObject {
    int  _activeFocusAnimation;
    NSMutableDictionary * _configurations;
    NSMutableDictionary * _coordinatedAnimations;
    NSMutableDictionary * _coordinatedCompletions;
    UIFocusUpdateContext * _focusUpdateContext;
    BOOL  _locked;
}

@property (getter=_activeAnimationDuration, nonatomic, readonly) double activeAnimationDuration;
@property (getter=_activeConfiguration, nonatomic, readonly, copy) _UIFocusAnimationConfiguration *activeConfiguration;
@property (nonatomic, readonly) int activeFocusAnimation;
@property (getter=_animationOptions, nonatomic, readonly) unsigned int animationOptions;
@property (getter=_configurations, nonatomic, readonly) NSMutableDictionary *configurations;
@property (getter=_coordinatedAnimations, nonatomic, readonly) NSMutableDictionary *coordinatedAnimations;
@property (getter=_coordinatedCompletions, nonatomic, readonly) NSMutableDictionary *coordinatedCompletions;
@property (getter=_focusUpdateContext, nonatomic, readonly) UIFocusUpdateContext *focusUpdateContext;
@property (getter=_focusingAnimationDuration, nonatomic, readonly) double focusingAnimationDuration;
@property (getter=_isLocked, nonatomic, readonly) BOOL locked;
@property (getter=_unfocusingAnimationDuration, nonatomic, readonly) double unfocusingAnimationDuration;
@property (getter=_unfocusingRepositionAnimationDuration, nonatomic, readonly) double unfocusingRepositionAnimationDuration;

+ (id)_focusAnimationCoordinatorForAnimationType:(int)arg1 withConfiguration:(id)arg2 inContext:(id)arg3;
+ (id)_focusingAnimationCoordinatorWithConfiguration:(id)arg1 inContext:(id)arg2;
+ (id)_unfocusingAnimationCoordinatorWithConfiguration:(id)arg1 inContext:(id)arg2;

- (void).cxx_destruct;
- (double)_activeAnimationDuration;
- (id)_activeConfiguration;
- (void)_animate;
- (void)_animateFocusAnimation:(int)arg1;
- (unsigned int)_animationOptions;
- (void)_applyBlocks:(id)arg1 releaseBlocks:(id /* block */)arg2;
- (void)_cancelFocusAnimation:(int)arg1;
- (id)_configurationForFocusAnimation:(int)arg1;
- (id)_configurations;
- (void)_configureWithFocusUpdateContext:(id)arg1;
- (id)_coordinatedAnimations;
- (id)_coordinatedAnimationsForFocusAnimation:(int)arg1 createIfNeeded:(BOOL)arg2;
- (id)_coordinatedCompletions;
- (id)_coordinatedCompletionsForFocusAnimation:(int)arg1 createIfNeeded:(BOOL)arg2;
- (id)_focusUpdateContext;
- (double)_focusingAnimationDuration;
- (id)_initWithFocusUpdateContext:(id)arg1;
- (BOOL)_isLocked;
- (void)_prepareForFocusAnimation:(int)arg1;
- (void)_setConfiguration:(id)arg1 forFocusAnimation:(int)arg2;
- (double)_unfocusingAnimationDuration;
- (double)_unfocusingRepositionAnimationDuration;
- (int)activeFocusAnimation;
- (void)addCoordinatedAnimations:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)addCoordinatedAnimationsForAnimation:(int)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)init;

@end
