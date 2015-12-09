/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUBasicProgress : OITSUProgress {
    OITSUBasicProgressStorage * mStorage;
}

@property (getter=isIndeterminate) BOOL indeterminate;
@property double value;

- (void)dealloc;
- (id)init;
- (id)initWithMaxValue:(double)arg1;
- (BOOL)isIndeterminate;
- (double)maxValue;
- (void)setIndeterminate:(BOOL)arg1;
- (void)setValue:(double)arg1;
- (double)value;

@end