/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptPreviewController : CKViewController <CKTranscriptCollectionViewControllerDelegate> {
    CKConversation * _conversation;
    NSObject<CKTranscriptPreviewControllerDelegate> * _delegate;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _layoutMargins;
    float  _transcriptWidth;
}

@property (nonatomic, retain) CKConversation *conversation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CKTranscriptPreviewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } layoutMargins;
@property (readonly) Class superclass;
@property (nonatomic) float transcriptWidth;

- (id)conversation;
- (void)dealloc;
- (id)delegate;
- (id)initWithConversation:(id)arg1 transcriptWidth:(float)arg2 layoutMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg3;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })layoutMargins;
- (void)loadView;
- (id)previewMenuItems;
- (void)setConversation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setTranscriptWidth:(float)arg1;
- (id)textInputContextIdentifier;
- (void)transcriptCollectionViewController:(id)arg1 balloonViewTappedForItemWithIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 balloonViewTitleTappedForItemWithIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 collectionViewContentSizeDidChange:(struct CGSize { float x1; float x2; })arg2;
- (void)transcriptCollectionViewController:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 moreButtonTappedForRowAtIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 replyButtonTappedForRowAtIndexPath:(id)arg2;
- (void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1;
- (void)transcriptCollectionViewControllerDidInset:(id)arg1;
- (void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg1;
- (void)transcriptCollectionViewControllerReportSpamButtonTapped:(id)arg1;
- (BOOL)transcriptCollectionViewControllerShouldPlayAudio:(id)arg1;
- (void)transcriptCollectionViewControllerWillInset:(id)arg1 targetContentInset:(inout struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg2;
- (void)transcriptCollectionViewControllerWillScrollToBottom:(id)arg1;
- (float)transcriptWidth;

@end
