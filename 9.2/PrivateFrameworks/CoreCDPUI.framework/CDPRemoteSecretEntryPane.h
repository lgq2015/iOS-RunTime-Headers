/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@interface CDPRemoteSecretEntryPane : CDPPassphraseEntryPane {
    CDPDevice * _device;
    unsigned int  _escapeOffer;
    UIButton * _footerButton;
    <CDPRemoteSecretEntryPaneDelegate> * _paneDelegate;
    unsigned int  _remoteSecretType;
}

@property (nonatomic, retain) CDPDevice *device;
@property (nonatomic) unsigned int escapeOffer;
@property (nonatomic) <CDPRemoteSecretEntryPaneDelegate> *paneDelegate;
@property (nonatomic) unsigned int remoteSecretType;

- (void).cxx_destruct;
- (id)_headerStringForDevice:(id)arg1 localDeviceClass:(id)arg2;
- (id)device;
- (unsigned int)escapeOffer;
- (void)footerTapped:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)paneDelegate;
- (unsigned int)remoteSecretType;
- (void)setDevice:(id)arg1;
- (void)setEscapeOffer:(unsigned int)arg1;
- (void)setPaneDelegate:(id)arg1;
- (void)setRemoteSecretType:(unsigned int)arg1;
- (void)setTitle:(id)arg1;

@end
