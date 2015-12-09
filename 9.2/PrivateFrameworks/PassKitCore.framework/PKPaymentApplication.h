/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentApplication : NSObject <NSCopying, NSSecureCoding> {
    NSString * _applicationIdentifier;
    BOOL  _auxiliary;
    NSString * _displayName;
    NSString * _dpanIdentifier;
    NSString * _dpanSuffix;
    BOOL  _inAppPINRequired;
    NSDecimalNumber * _inAppPINRequiredAmount;
    NSString * _inAppPINRequiredCurrency;
    int  _paymentNetworkIdentifier;
    unsigned int  _paymentType;
    NSString * _sanitizedDPAN;
    NSString * _secureElementIdentifier;
    int  _state;
    BOOL  _supportsContactlessPayment;
    BOOL  _supportsInAppPayment;
    NSString * _suspendedReason;
}

@property (nonatomic, copy) NSString *applicationIdentifier;
@property (getter=isAuxiliary, nonatomic) BOOL auxiliary;
@property (nonatomic, copy) NSString *displayName;
@property (setter=setDPANIdentifier:, nonatomic, copy) NSString *dpanIdentifier;
@property (setter=setDPANSuffix:, nonatomic, copy) NSString *dpanSuffix;
@property (nonatomic) BOOL inAppPINRequired;
@property (nonatomic, copy) NSDecimalNumber *inAppPINRequiredAmount;
@property (nonatomic, copy) NSString *inAppPINRequiredCurrency;
@property (nonatomic) int paymentNetworkIdentifier;
@property (nonatomic) unsigned int paymentType;
@property (setter=setSanitizedDPAN:, nonatomic, copy) NSString *sanitizedDPAN;
@property (nonatomic, copy) NSString *secureElementIdentifier;
@property (nonatomic) int state;
@property (nonatomic, readonly) NSString *stateAsString;
@property (nonatomic) BOOL supportsContactlessPayment;
@property (nonatomic) BOOL supportsInAppPayment;
@property (nonatomic, copy) NSString *suspendedReason;

+ (BOOL)supportsSecureCoding;

- (id)applicationIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)dpanIdentifier;
- (id)dpanSuffix;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (BOOL)inAppPINRequired;
- (id)inAppPINRequiredAmount;
- (id)inAppPINRequiredCurrency;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentApplicationDictionary:(id)arg1 auxiliaryApplication:(BOOL)arg2;
- (BOOL)isAuxiliary;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPaymentApplication:(id)arg1;
- (int)paymentNetworkIdentifier;
- (unsigned int)paymentType;
- (id)sanitizedDPAN;
- (id)secureElementIdentifier;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setAuxiliary:(BOOL)arg1;
- (void)setDPANIdentifier:(id)arg1;
- (void)setDPANSuffix:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setInAppPINRequired:(BOOL)arg1;
- (void)setInAppPINRequiredAmount:(id)arg1;
- (void)setInAppPINRequiredCurrency:(id)arg1;
- (void)setPaymentNetworkIdentifier:(int)arg1;
- (void)setPaymentType:(unsigned int)arg1;
- (void)setSanitizedDPAN:(id)arg1;
- (void)setSecureElementIdentifier:(id)arg1;
- (void)setState:(int)arg1;
- (void)setSupportsContactlessPayment:(BOOL)arg1;
- (void)setSupportsInAppPayment:(BOOL)arg1;
- (void)setSuspendedReason:(id)arg1;
- (int)state;
- (id)stateAsString;
- (BOOL)supportsContactlessPayment;
- (BOOL)supportsInAppPayment;
- (id)suspendedReason;

@end