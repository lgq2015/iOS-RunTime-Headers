/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITraitCollection : NSObject <NSCopying, NSSecureCoding> {
    struct { 
        int userInterfaceIdiom; 
        float displayScale; 
        int touchLevel; 
        unsigned int interactionModel; 
        unsigned int primaryInteractionModel; 
        int horizontalSizeClass; 
        int verticalSizeClass; 
        int userInterfaceStyle; 
        int forceTouchCapability; 
    }  _builtinTraits;
    NSDictionary * _clientDefinedTraits;
}

@property (nonatomic, readonly) BOOL MPU_hasCompactHeight;
@property (nonatomic, readonly) BOOL MPU_hasCompactWidth;
@property (nonatomic, readonly) BOOL MPU_hasRegularHeight;
@property (nonatomic, readonly) BOOL MPU_hasRegularWidth;
@property (nonatomic, readonly) int barMetrics;
@property (nonatomic, readonly) int barPosition;
@property (nonatomic, readonly) float displayScale;
@property (nonatomic, readonly) int forceTouchCapability;
@property (nonatomic, readonly) int horizontalSizeClass;
@property (getter=music_isContainedWithinSplitViewDetail, nonatomic, readonly) BOOL music_containedWithinSplitViewDetail;
@property (getter=music_isContainedWithinSplitViewPrimary, nonatomic, readonly) BOOL music_containedWithinSplitViewPrimary;
@property (nonatomic, readonly) int userInterfaceIdiom;
@property (nonatomic, readonly) int verticalSizeClass;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)_emptyTraitCollection;
+ (id)_traitCollectionWithValue:(id)arg1 forTraitNamed:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)traitCollectionWithBarMetrics:(int)arg1;
+ (id)traitCollectionWithBarPosition:(int)arg1;
+ (id)traitCollectionWithDisplayScale:(float)arg1;
+ (id)traitCollectionWithForceTouchCapability:(int)arg1;
+ (id)traitCollectionWithHorizontalSizeClass:(int)arg1;
+ (id)traitCollectionWithInteractionModel:(unsigned int)arg1;
+ (id)traitCollectionWithPrimaryInteractionModel:(unsigned int)arg1;
+ (id)traitCollectionWithTouchLevel:(int)arg1;
+ (id)traitCollectionWithTraitsFromCollections:(id)arg1;
+ (id)traitCollectionWithUserInterfaceIdiom:(int)arg1;
+ (id)traitCollectionWithUserInterfaceStyle:(int)arg1;
+ (id)traitCollectionWithVerticalSizeClass:(int)arg1;

- (int)_compare:(id)arg1;
- (id)_initWithBuiltinTraitStorage:(struct { int x1; float x2; int x3; unsigned int x4; unsigned int x5; int x6; int x7; int x8; int x9; }*)arg1 clientDefinedTraits:(id)arg2;
- (BOOL)_matchesIntersectionWithTraitCollection:(id)arg1;
- (id)_namedImageDescription;
- (id)_valueForTraitNamed:(id)arg1;
- (int)barMetrics;
- (int)barPosition;
- (BOOL)containsTraitsInCollection:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (float)displayScale;
- (void)encodeWithCoder:(id)arg1;
- (int)forceTouchCapability;
- (unsigned int)hash;
- (int)horizontalSizeClass;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned int)interactionModel;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)primaryInteractionModel;
- (int)touchLevel;
- (int)userInterfaceIdiom;
- (int)userInterfaceStyle;
- (int)verticalSizeClass;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (BOOL)mf_supportsPopoverPresentation;

// Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI

+ (id)music_traitCollectionWithContainedWithinSplitViewDetail:(BOOL)arg1;
+ (id)music_traitCollectionWithContainedWithinSplitViewPrimary:(BOOL)arg1;

- (BOOL)music_isContainedWithinSplitViewDetail;
- (BOOL)music_isContainedWithinSplitViewPrimary;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (BOOL)MPU_hasCompactHeight;
- (BOOL)MPU_hasCompactWidth;
- (BOOL)MPU_hasRegularHeight;
- (BOOL)MPU_hasRegularWidth;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

- (BOOL)tsu_isCompactHeight;
- (BOOL)tsu_isCompactWidth;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

- (BOOL)tsu_isCompactHeight;
- (BOOL)tsu_isCompactWidth;

@end
