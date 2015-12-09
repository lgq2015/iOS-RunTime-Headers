/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@interface PRSEngagementFeedback : PRSFeedback {
    unsigned int  _action_area;
    NSString * _action_card_type;
    NSURL * _action_destination;
    unsigned int  _action_type;
    int  _dpos;
    NSString * _fbr;
    NSString * _lastSearchQuery;
    NSString * _local_result;
    NSString * _parsec_result;
    NSString * _prsActivityBundleID;
    NSString * _prsActivityIdentifier;
    NSString * _prsActivityInfo;
    BOOL  _prsActivityIsPublic;
    NSString * _prsAppShortVersion;
    double  _resultScore;
    unsigned int  _result_action_target;
    double  _sectionScore;
    BOOL  _userReturnedToResultsList;
}

@property unsigned int action_area;
@property (nonatomic, retain) NSString *action_card_type;
@property (nonatomic, retain) NSURL *action_destination;
@property unsigned int action_type;
@property (nonatomic) int dpos;
@property (nonatomic, retain) NSString *fbr;
@property (nonatomic, retain) NSString *lastSearchQuery;
@property (nonatomic, retain) NSString *local_result;
@property (nonatomic, retain) NSString *parsec_result;
@property (nonatomic, retain) NSString *prsActivityBundleID;
@property (nonatomic, retain) NSString *prsActivityIdentifier;
@property (nonatomic, retain) NSString *prsActivityInfo;
@property BOOL prsActivityIsPublic;
@property (nonatomic, retain) NSString *prsAppShortVersion;
@property (nonatomic) double resultScore;
@property unsigned int result_action_target;
@property (nonatomic) double sectionScore;
@property BOOL userReturnedToResultsList;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)action_area;
- (id)action_card_type;
- (id)action_destination;
- (id)action_target;
- (unsigned int)action_type;
- (int)dpos;
- (void)encodeWithCoder:(id)arg1;
- (id)fbr;
- (id)initWithCoder:(id)arg1;
- (id)initWithInput:(id)arg1 timestamp:(int)arg2;
- (id)lastSearchQuery;
- (id)local_result;
- (id)parsec_result;
- (id)plist;
- (id)prsActivityBundleID;
- (id)prsActivityIdentifier;
- (id)prsActivityInfo;
- (BOOL)prsActivityIsPublic;
- (id)prsAppShortVersion;
- (double)resultScore;
- (unsigned int)result_action_target;
- (double)sectionScore;
- (void)setAction_area:(unsigned int)arg1;
- (void)setAction_card_type:(id)arg1;
- (void)setAction_destination:(id)arg1;
- (void)setAction_type:(unsigned int)arg1;
- (void)setDpos:(int)arg1;
- (void)setFbr:(id)arg1;
- (void)setLastSearchQuery:(id)arg1;
- (void)setLocal_result:(id)arg1;
- (void)setParsec_result:(id)arg1;
- (void)setPrsActivityBundleID:(id)arg1;
- (void)setPrsActivityIdentifier:(id)arg1;
- (void)setPrsActivityInfo:(id)arg1;
- (void)setPrsActivityIsPublic:(BOOL)arg1;
- (void)setPrsAppShortVersion:(id)arg1;
- (void)setResultScore:(double)arg1;
- (void)setResult_action_target:(unsigned int)arg1;
- (void)setSectionScore:(double)arg1;
- (void)setUserReturnedToResultsList:(BOOL)arg1;
- (id)type;
- (id)typeString;
- (BOOL)userReturnedToResultsList;
- (void)validate;

@end