/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptRecipientsController : UITableViewController <CNAvatarViewDelegate, UIActionSheetDelegate, UIAlertViewDelegate, UITextViewDelegate> {
    CKTranscriptAddRecipientCell * _addRecipientCell;
    CKGroupRecipientSelectionController * _addRecipientsController;
    CKConversation * _conversation;
    <CKTranscriptRecipientsControllerDelegate> * _delegate;
    CKEntity * _entityForPresentedABCard;
    NSDictionary * _facetimeAudioIDStatuses;
    NSDictionary * _facetimeIDStatuses;
    BOOL  _fmfDisabled;
    BOOL  _fmfRestricted;
    NSTimer * _fmfUpdateTimer;
    CKTranscriptDetailsResizableCell * _locationSendCell;
    CKTranscriptLocationShareCell * _locationShareCell;
    UITextView * _locationSharingTextView;
    CKTranscriptDetailsResizableCell * _locationStartShareCell;
    NSString * _serviceAvailabilityKey;
    CKTranscriptRecipientCell * _sizingRecipientCell;
}

@property (nonatomic, retain) CKTranscriptAddRecipientCell *addRecipientCell;
@property (nonatomic, retain) CKGroupRecipientSelectionController *addRecipientsController;
@property (nonatomic, retain) CKConversation *conversation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKTranscriptRecipientsControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CKEntity *entityForPresentedABCard;
@property (nonatomic, retain) NSDictionary *facetimeAudioIDStatuses;
@property (nonatomic, retain) NSDictionary *facetimeIDStatuses;
@property (nonatomic) BOOL fmfDisabled;
@property (nonatomic) BOOL fmfRestricted;
@property (nonatomic, retain) NSTimer *fmfUpdateTimer;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) CKTranscriptDetailsResizableCell *locationSendCell;
@property (nonatomic, retain) CKTranscriptLocationShareCell *locationShareCell;
@property (nonatomic, retain) UITextView *locationSharingTextView;
@property (nonatomic, retain) CKTranscriptDetailsResizableCell *locationStartShareCell;
@property (nonatomic, retain) NSString *serviceAvailabilityKey;
@property (nonatomic, retain) CKTranscriptRecipientCell *sizingRecipientCell;
@property (readonly) Class superclass;

- (void)_configureDNDCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_configureRecipientCell:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)_conversationHasLeft;
- (void)_conversationJoinStateDidChange:(id)arg1;
- (void)_faceTimeAvailabilityChange:(id)arg1;
- (int)_facetimeAudioIDStatusForEntity:(id)arg1;
- (int)_facetimeIDStatusForEntity:(id)arg1;
- (void)_handleActiveDeviceChanged:(id)arg1;
- (void)_handleAddressBookChangedNotification:(id)arg1;
- (void)_handleCancelAction:(id)arg1;
- (void)_handleConversationRecipientsChanged:(id)arg1;
- (void)_handleDoneAction:(id)arg1;
- (void)_handleFriendshipStatusChangedNotification:(id)arg1;
- (void)_handleLocationChangedNotification:(id)arg1;
- (BOOL)_hasLinkedTelephoneNumbersForEntity:(id)arg1;
- (BOOL)_isFaceTimeAudioAvailable;
- (BOOL)_isFaceTimeVideoAvailable;
- (BOOL)_isTelephonyDevice;
- (void)_muteSwitchValueChanged:(id)arg1;
- (void)_presentGroupRecipientSelectionController;
- (void)_presentLeaveActionSheetFromView:(id)arg1;
- (void)_presentRemoveRecipientSheetForRecipient:(id)arg1 fromView:(id)arg2;
- (void)_presentSharingActionSheet:(BOOL)arg1 fromView:(id)arg2;
- (void)_refreshFaceTimeIDSStatusWithCompletion:(id /* block */)arg1;
- (void)_requestCallTypeForEntity:(id)arg1 withAddresses:(id)arg2 withLabels:(id)arg3 faceTimeAudioEnabled:(BOOL)arg4;
- (void)_sendCurrentLocation;
- (void)_setupFMFUpdateTimerIfNecessary;
- (BOOL)_shouldShowActiveDeviceSwitchFooter;
- (BOOL)_shouldShowEnhancedGroupFeatures;
- (void)_showContactCardForEntity:(id)arg1 fromView:(id)arg2;
- (BOOL)_showEmailButtonForEntity:(id)arg1;
- (BOOL)_showFaceTimeVideoButtonForEntity:(id)arg1;
- (BOOL)_showPhoneButtonForEntity:(id)arg1;
- (void)_startCallWithAddress:(id)arg1 entity:(id)arg2;
- (void)_startCommunicationForEntity:(id)arg1;
- (void)_startEmailCommunicationWithEntity:(id)arg1;
- (void)_startFacetimeCommunicationForEntity:(id)arg1 audioOnly:(BOOL)arg2;
- (void)_toggleSharingStateFromABCard;
- (void)_updateTimedFMFState;
- (id)addRecipientCell;
- (id)addRecipientsController;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (id)conversation;
- (void)dealloc;
- (id)delegate;
- (id)dndCellForIndexPath:(id)arg1;
- (id)entityForButton:(id)arg1;
- (id)entityForPresentedABCard;
- (id)facetimeAudioIDStatuses;
- (id)facetimeIDStatuses;
- (void)facetimeVideoAction:(id)arg1;
- (BOOL)fmfDisabled;
- (BOOL)fmfRestricted;
- (id)fmfUpdateTimer;
- (id)indexPathForButton:(id)arg1;
- (void)infoAction:(id)arg1;
- (id)initWithStyle:(int)arg1 conversation:(id)arg2;
- (id)leaveCellForIndexPath:(id)arg1;
- (void)loadView;
- (id)locationCellForIndexPath:(id)arg1;
- (id)locationSendCell;
- (id)locationShareCell;
- (id)locationSharingTextView;
- (id)locationStartShareCell;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)phoneCallAction:(id)arg1;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (id)recipientCellForIndexPath:(id)arg1;
- (id)recipients;
- (void)sendEmailAction:(id)arg1;
- (id)serviceAvailabilityKey;
- (void)setAddRecipientCell:(id)arg1;
- (void)setAddRecipientsController:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEntityForPresentedABCard:(id)arg1;
- (void)setFacetimeAudioIDStatuses:(id)arg1;
- (void)setFacetimeIDStatuses:(id)arg1;
- (void)setFmfDisabled:(BOOL)arg1;
- (void)setFmfRestricted:(BOOL)arg1;
- (void)setFmfUpdateTimer:(id)arg1;
- (void)setLocationSendCell:(id)arg1;
- (void)setLocationShareCell:(id)arg1;
- (void)setLocationSharingTextView:(id)arg1;
- (void)setLocationStartShareCell:(id)arg1;
- (void)setServiceAvailabilityKey:(id)arg1;
- (void)setSizingRecipientCell:(id)arg1;
- (id)sizingRecipientCell;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end