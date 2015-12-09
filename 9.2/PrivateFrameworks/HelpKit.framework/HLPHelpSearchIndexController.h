/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface HLPHelpSearchIndexController : HLPRemoteDataController {
    HLPHelpBookController * _helpBookController;
    NSDictionary * _searchIndex;
}

@property (nonatomic, retain) HLPHelpBookController *helpBookController;
@property (nonatomic, retain) NSDictionary *searchIndex;

- (void).cxx_destruct;
- (id)helpBookController;
- (void)processData:(id)arg1 formattedData:(id)arg2;
- (id)resultsWithSearchText:(id)arg1 localeCode:(id)arg2 searchTerms:(id*)arg3;
- (id)searchIndex;
- (id)searchTermsForSearchText:(id)arg1 localeCode:(id)arg2;
- (void)setHelpBookController:(id)arg1;
- (void)setSearchIndex:(id)arg1;

@end