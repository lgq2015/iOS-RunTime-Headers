/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPSearchQuery : NSObject <NSCopying> {
    double  _cancellationTime;
    BOOL  _cancelled;
    int  _contentFilters;
    unsigned long long  _creationStamp;
    double  _creationTime;
    NSDictionary * _dictationResponse;
    BOOL  _dictationStable;
    NSArray * _disabledBundles;
    BOOL  _finished;
    BOOL  _grouped;
    BOOL  _internal;
    NSString * _keyboardLanguage;
    NSString * _keyboardPrimaryLanguage;
    long  _maxCount;
    int  _nextDomainIndex;
    unsigned int  _queryID;
    NSArray * _searchDomains;
    NSString * _searchString;
}

@property (nonatomic, readonly) double cancellationTime;
@property (nonatomic, readonly) BOOL cancelled;
@property (nonatomic) int contentFilters;
@property (nonatomic, readonly) unsigned long long creationStamp;
@property (nonatomic, readonly) double creationTime;
@property (nonatomic, retain) NSDictionary *dictationResponse;
@property (nonatomic) BOOL dictationStable;
@property (nonatomic, retain) NSArray *disabledBundles;
@property (nonatomic) BOOL grouped;
@property (nonatomic) BOOL internal;
@property (nonatomic, readonly) NSString *keyboardLanguage;
@property (nonatomic, readonly) NSString *keyboardPrimaryLanguage;
@property (nonatomic) long maxCount;
@property (nonatomic, readonly) NSArray *searchDomains;
@property (nonatomic, readonly) NSString *searchString;

- (void).cxx_destruct;
- (void)cancel;
- (double)cancellationTime;
- (BOOL)cancelled;
- (int)contentFilters;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)creationStamp;
- (double)creationTime;
- (id)dictationResponse;
- (BOOL)dictationStable;
- (id)disabledBundles;
- (BOOL)grouped;
- (unsigned int)hash;
- (id)initWithQuery:(id)arg1 domains:(id)arg2;
- (id)initWithSearchString:(id)arg1;
- (id)initWithSearchString:(id)arg1 keyboardLanguage:(id)arg2 forSearchDomains:(id)arg3 disabledBundles:(id)arg4;
- (id)initWithSearchString:(id)arg1 keyboardLanguage:(id)arg2 keyboardPrimaryLanguage:(id)arg3 forSearchDomains:(id)arg4 disabledBundles:(id)arg5;
- (BOOL)internal;
- (BOOL)isEqual:(id)arg1;
- (id)keyboardLanguage;
- (id)keyboardPrimaryLanguage;
- (long)maxCount;
- (id)searchDomains;
- (id)searchString;
- (void)setContentFilters:(int)arg1;
- (void)setDictationResponse:(id)arg1;
- (void)setDictationStable:(BOOL)arg1;
- (void)setDisabledBundles:(id)arg1;
- (void)setGrouped:(BOOL)arg1;
- (void)setInternal:(BOOL)arg1;
- (void)setMaxCount:(long)arg1;

@end
