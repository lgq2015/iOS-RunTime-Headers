/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface _MFMailComposeAttachmentLoader : NSObject {
    id /* block */  _completionBlock;
    id  _content;
    BOOL  _isDraft;
    MFMailMessage * _message;
}

- (void)dealloc;
- (id)initWithMessage:(id)arg1 content:(id)arg2 isDraft:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)loadAttachments;

@end
