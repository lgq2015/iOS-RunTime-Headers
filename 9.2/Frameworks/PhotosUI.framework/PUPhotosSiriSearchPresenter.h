/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosSiriSearchPresenter : NSObject <PUSearchResultsDelegate> {
    PSIDatabase * __searchIndex;
    PUSearchResultsDataSource * __searchResultsDataSource;
    PUPingTimer * __searchResultsPingTimer;
    bool  _first;
    PUPhotosGridViewControllerSpec * _gridSpec;
    PUSearchResultDataSource * _photoCollections;
    bool  _presenting;
    UIViewController * _sCurrentVisibleController;
    PUNavigationController * _searchResultsNav;
    PUSearchResultsViewController * _searchResultsViewController;
    NSObject<OS_dispatch_semaphore> * _siriIntentBackgroundProcessingCompleteSemaphore;
    NSObject<OS_dispatch_semaphore> * _siriSearchSemaphore;
    NSString * _utterance;
}

@property (nonatomic, retain) PSIDatabase *_searchIndex;
@property (nonatomic, retain) PUSearchResultsDataSource *_searchResultsDataSource;
@property (nonatomic, retain) PUPingTimer *_searchResultsPingTimer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool first;
@property (nonatomic, retain) PUPhotosGridViewControllerSpec *gridSpec;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) PUSearchResultDataSource *photoCollections;
@property (nonatomic) bool presenting;
@property (nonatomic, retain) UIViewController *sCurrentVisibleController;
@property (nonatomic, retain) PUNavigationController *searchResultsNav;
@property (nonatomic, retain) PUSearchResultsViewController *searchResultsViewController;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *siriIntentBackgroundProcessingCompleteSemaphore;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *siriSearchSemaphore;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *utterance;

+ (void)_photolibraryDidChange:(id)arg1;
+ (void)registerForSiriIntentsForViewController:(id)arg1;
+ (void)searchWithSiriSearch:(id)arg1;
+ (void)showSiriForForeground;
+ (void)syncSiriIntentDataSoon;

- (void).cxx_destruct;
- (void)_mergeSearchResults;
- (void)_pingTimerFire:(id)arg1;
- (void)_pushMomentsGridForPhotosWithUUIDs:(id)arg1 intent:(id)arg2 title:(id)arg3 completion:(id /* block */)arg4;
- (id)_searchIndex;
- (id)_searchResultsDataSource;
- (id)_searchResultsPingTimer;
- (void)_searchResultsViewControllerDidFinish:(id)arg1;
- (void)completeSearchQueryAndSearch:(id)arg1 intent:(id)arg2 dataSource:(id)arg3;
- (void)completeWithZeroSearchResults:(id)arg1 showUI:(BOOL)arg2;
- (bool)first;
- (id)gridSpec;
- (id)init;
- (id)photoCollections;
- (id)predicateForNearByWithLatitude:(double)arg1 longitude:(double)arg2;
- (void)presentLast;
- (bool)presenting;
- (void)registerForIntents;
- (id)sCurrentVisibleController;
- (void)searchResultsDataSourceHasPendingChanges:(id)arg1;
- (id)searchResultsNav;
- (id)searchResultsViewController;
- (void)searchWithSiriInternal:(id)arg1;
- (void)searchWithSiriPlaceIMP:(id)arg1 dataSource:(id)arg2 searchTerm:(id)arg3 useFuzzyContains:(BOOL)arg4;
- (void)setFirst:(bool)arg1;
- (void)setGridSpec:(id)arg1;
- (void)setPhotoCollections:(id)arg1;
- (void)setPresenting:(bool)arg1;
- (void)setSCurrentVisibleController:(id)arg1;
- (void)setSearchResultsNav:(id)arg1;
- (void)setSearchResultsViewController:(id)arg1;
- (void)setSiriIntentBackgroundProcessingCompleteSemaphore:(id)arg1;
- (void)setSiriSearchSemaphore:(id)arg1;
- (void)setUtterance:(id)arg1;
- (void)set_searchIndex:(id)arg1;
- (void)set_searchResultsDataSource:(id)arg1;
- (void)set_searchResultsPingTimer:(id)arg1;
- (id)siriIntentBackgroundProcessingCompleteSemaphore;
- (id)siriSearchSemaphore;
- (void)synchAlbumNamesToSiriForIntentNaturalLanguageAndSpeechAssist;
- (void)synchImportantThingsToSiri;
- (id)topViewControllerFromRoot;
- (id)topViewControllerWithRootViewController:(id)arg1;
- (id)utterance;

@end
