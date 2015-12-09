/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDatePickerMode_TimeInterval : _UIDatePickerMode {
    float  _componentWidth;
}

+ (int)datePickerMode;
+ (unsigned int)extractableCalendarUnits;

- (BOOL)_shouldEnableValueForRow:(int)arg1 inComponent:(int)arg2 calendarUnit:(unsigned int)arg3;
- (BOOL)areValidDateComponents:(id)arg1 comparingUnits:(int)arg2;
- (id)dateComponentsByRestrictingSelectedComponents:(id)arg1 withLastManipulatedColumn:(int)arg2;
- (id)font;
- (int)hourForRow:(int)arg1;
- (BOOL)isTimeIntervalMode;
- (id)localizedFormatString;
- (unsigned int)nextUnitLargerThanUnit:(unsigned int)arg1;
- (unsigned int)nextUnitSmallerThanUnit:(unsigned int)arg1;
- (int)numberOfRowsForCalendarUnit:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeForCalendarUnit:(unsigned int)arg1;
- (void)resetComponentWidths;
- (float)rowHeight;
- (void)takeExtremesFromMinimumDate:(id)arg1 maximumDate:(id)arg2;
- (int)titleAlignmentForCalendarUnit:(unsigned int)arg1;
- (id)titleForRow:(int)arg1 inComponent:(int)arg2;
- (int)valueForDate:(id)arg1 dateComponents:(id)arg2 calendarUnit:(unsigned int)arg3;
- (float)widthForCalendarUnit:(unsigned int)arg1 font:(id)arg2 maxWidth:(float)arg3;

@end