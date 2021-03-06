/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKDayPreviewController : UIViewController <EKDayViewDataSource, EKEditItemViewControllerProtocol> {
    NSArray * _cachedTimedEvents;
    NSDate * _date;
    EKDayView * _dayView;
    EKEvent * _event;
    BOOL  _firstshow;
    BOOL  _hasOverriddenEventDates;
    BOOL  _hidesAllDayEvents;
    UIViewController * _hostingViewController;
    BOOL  _isAnimating;
    BOOL  _isInline;
    NSDate * _originalEventEndDate;
    NSDate * _originalEventStartDate;
    NSDate * _overriddenEventEndDate;
    NSDate * _overriddenEventStartDate;
    BOOL  _respectsSelectedCalendarsFilter;
    UIView * _roundedView;
    BOOL  _userHasTappedToExpand;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <EKEditItemViewControllerDelegate> *editDelegate;
@property (nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL hidesAllDayEvents;
@property (nonatomic) UIViewController *hostingViewController;
@property (nonatomic) BOOL isInline;
@property (nonatomic) BOOL presentModally;
@property (nonatomic) BOOL respectsSelectedCalendarsFilter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_anchorEvent;
- (id)_dateForFirstHourMarker;
- (float)_dayViewHeight;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_displayedHoursRange;
- (id)_eventsForStartDate:(id)arg1 endDate:(id)arg2;
- (id)_hourMaskForEvents:(id)arg1;
- (void)_scrollDayViewToCorrectOffsetAnimated:(BOOL)arg1;
- (id)_selectedCalendars;
- (void)_setNewVisibleHourLabels;
- (void)_setupAutoLayout;
- (BOOL)_shouldShowAllVisibleEvents;
- (float)_verticalMarginForInlineDayPreview;
- (id)dayView:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3;
- (BOOL)hidesAllDayEvents;
- (id)hostingViewController;
- (id)initWithDate:(id)arg1 event:(id)arg2 overriddenEventStartDate:(id)arg3 overriddenEventEndDate:(id)arg4;
- (BOOL)isInline;
- (void)loadView;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (void)renderPressHighlight:(BOOL)arg1;
- (BOOL)respectsSelectedCalendarsFilter;
- (void)setHidesAllDayEvents:(BOOL)arg1;
- (void)setHostingViewController:(id)arg1;
- (void)setIsInline:(BOOL)arg1;
- (void)setRespectsSelectedCalendarsFilter:(BOOL)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)toggleExpandedState;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
