/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

@interface WFCategoryJudgement : NSObject {
    long  category;
    float  score;
}

+ (id)categoryJudgementWithCategory:(long)arg1 score:(float)arg2;

- (long)category;
- (int)compareByCategory:(id)arg1;
- (int)compareByScore:(id)arg1;
- (id)description;
- (float)score;
- (void)setCategory:(long)arg1;
- (void)setScore:(float)arg1;

@end