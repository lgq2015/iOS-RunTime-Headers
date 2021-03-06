/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@interface RKResponseCollection : NSObject {
    NSURL * _dynamicDataURL;
    NSMutableDictionary * _personalizersByLanguageID;
    NSMutableDictionary * _phraseMap;
    NSMutableDictionary * _responseCatalog;
}

@property (retain) NSURL *dynamicDataURL;
@property (retain) NSMutableDictionary *personalizersByLanguageID;
@property (retain) NSMutableDictionary *phraseMap;
@property (retain) NSMutableDictionary *responseCatalog;

+ (id)displayStringsForPlatform:(id)arg1 languageID:(id)arg2;
+ (id)sharedCollection;
+ (id)speechActsForCategory:(unsigned int)arg1 platform:(id)arg2;

- (void).cxx_destruct;
- (id)dynamicDataURL;
- (void)flushDynamicData;
- (id)initWithDynamicDataURL:(id)arg1;
- (id)personalizerForLanguageID:(id)arg1;
- (id)personalizersByLanguageID;
- (id)phraseMap;
- (void)registerResponse:(id)arg1 forMessage:(id)arg2 withLanguage:(id)arg3 context:(id)arg4 effectiveDate:(id)arg5;
- (void)resetPhraseMap;
- (void)resetRegisteredResponses;
- (id)responseCatalog;
- (id)responsesForCategory:(unsigned int)arg1 gender:(unsigned int)arg2 maximumResponses:(unsigned int)arg3 withLanguage:(id)arg4 context:(id)arg5 options:(unsigned int)arg6;
- (id)responsesForFixedPhrase:(id)arg1 withLanguage:(id)arg2;
- (void)setDynamicDataURL:(id)arg1;
- (void)setPersonalizersByLanguageID:(id)arg1;
- (void)setPhraseMap:(id)arg1;
- (void)setResponseCatalog:(id)arg1;
- (id)standardResponsesByCategoryForLanguageIdentifier:(id)arg1 andUsage:(id)arg2;

@end
