/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKDatePickerImpl_PickerView : UIPickerView <PKDatePickerInternalImplementationProtocol, UIPickerViewDataSource, UIPickerViewDelegate> {
    unsigned int  _calendarUnit;
    SEL  _changeAction;
    id  _changeTarget;
    NSDateFormatter * _dateFormatter;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _possibleRange;
}

@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id)_dateComponentsForCalendarUnit:(unsigned int)arg1 value:(int)arg2;
- (id)_dateForIndex:(unsigned int)arg1;
- (id)_dateFormatForCalendarUnit:(unsigned int)arg1;
- (unsigned int)_defaultIndex;
- (unsigned int)_numberOfItems;
- (id)_stringForIndex:(unsigned int)arg1;
- (id)date;
- (void)dealloc;
- (id)initShowingDay:(BOOL)arg1 month:(BOOL)arg2 year:(BOOL)arg3 useDarkAppearance:(BOOL)arg4;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (float)pickerView:(id)arg1 widthForComponent:(int)arg2;
- (void)prepareToDie;
- (void)setDate:(id)arg1;
- (void)setDateValueChangedTarget:(id)arg1 action:(SEL)arg2;

@end
