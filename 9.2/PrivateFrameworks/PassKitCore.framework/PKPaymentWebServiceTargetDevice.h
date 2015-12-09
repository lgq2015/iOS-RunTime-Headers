/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentWebServiceTargetDevice : NSObject <PKPaymentWebServiceTargetDeviceProtocol> {
    BOOL  _assertionActive;
    PKPassLibrary * _passLibrary;
    PKPaymentService * _paymentService;
    PKAssertion * _provisioningAssertion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)phoneTargetDevice;

- (id)bridgedClientInfo;
- (void)dealloc;
- (id)deviceDescriptionForPaymentWebService:(id)arg1;
- (id)deviceName;
- (id)deviceRegion;
- (void)downloadAllPaymentPassesForPaymentWebService:(id)arg1;
- (id)init;
- (void)noteProvisioningInProgress:(BOOL)arg1;
- (int)paymentSupportedInCurrentRegionForWebService:(id)arg1;
- (void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandlerV2:(id /* block */)arg3;
- (BOOL)paymentWebService:(id)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg2;
- (void)paymentWebService:(id)arg1 configurationDataWithCompletionHandler:(id /* block */)arg2;
- (void)paymentWebService:(id)arg1 deleteApplicationWithAID:(id)arg2;
- (void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2;
- (id)paymentWebService:(id)arg1 filterVerificationChannels:(id)arg2;
- (BOOL)paymentWebService:(id)arg1 hasPassesOfType:(unsigned int)arg2;
- (void)paymentWebService:(id)arg1 provisioningDataWithCompletionHandler:(id /* block */)arg2;
- (void)paymentWebService:(id)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 registrationDataWithAuthToken:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 setNewAuthRandomIfNecessary:(id /* block */)arg2;
- (void)paymentWebService:(id)arg1 shouldArchivePaymentWebServiceBackgroundContext:(id)arg2;
- (void)paymentWebService:(id)arg1 shouldArchivePaymentWebServiceContext:(id)arg2;
- (void)paymentWebService:(id)arg1 signData:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 validateAddPreconditionsWithCompletion:(id /* block */)arg2;
- (void)paymentWebServiceDidUpdateConfiguration:(id)arg1;
- (BOOL)supportsAutomaticPassPresentation;

@end