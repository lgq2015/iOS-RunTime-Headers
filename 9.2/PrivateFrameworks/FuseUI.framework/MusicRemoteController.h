/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicRemoteController : NSObject {
    <MusicRemoteControllerDelegate> * _delegate;
    BOOL  _hasPlayCatalogContentCapability;
    BOOL  _isObservingAddToLibraryCommand;
    BOOL  _isObservingBookmarkCommand;
    BOOL  _isObservingDislikeCommand;
    BOOL  _isObservingLikeCommand;
    BOOL  _isObservingShuffleRepeatCommands;
    NSString * _lastReloadPlaybackContextID;
    MusicAVPlayer * _player;
}

@property (nonatomic) <MusicRemoteControllerDelegate> *delegate;
@property (nonatomic, readonly) MusicAVPlayer *player;

- (void).cxx_destruct;
- (void)_avItemStoreIDDidChangeNotification:(id)arg1;
- (void)_buyOffersDidChangeNotification:(id)arg1;
- (void)_cloudLibraryEnabledDidChangeNotification:(id)arg1;
- (id)_currentFeederContextID;
- (void)_getLibraryAddAction:(id*)arg1 removeAction:(id*)arg2 forItem:(id)arg3;
- (void)_handleAddItemToLibrary:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)_handleAddNowPlayingItemToLibraryCommand:(id)arg1;
- (int)_handleAdvanceRepeatModeCommand:(id)arg1;
- (int)_handleAdvanceShuffleModeCommand:(id)arg1;
- (int)_handleBookmarkCommand:(id)arg1;
- (int)_handleBuyTrackCommand:(id)arg1;
- (int)_handleCancelDownloadCommand:(id)arg1;
- (int)_handleChangePlaybackPositionCommand:(id)arg1;
- (int)_handleChangePlaybackRateCommand:(id)arg1;
- (int)_handleChangeRepeatModeCommand:(id)arg1;
- (int)_handleChangeShuffleModeCommand:(id)arg1;
- (int)_handleCreateRadioStationCommand:(id)arg1;
- (int)_handleDislikeCommand:(id)arg1;
- (void)_handleInsertIntoPlaybackQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)_handleLikeCommand:(id)arg1;
- (int)_handleNextTrackCommand:(id)arg1;
- (int)_handlePauseCommand:(id)arg1;
- (int)_handlePlayCommand:(id)arg1;
- (int)_handlePreviousTrackCommand:(id)arg1;
- (int)_handleRatingCommand:(id)arg1;
- (int)_handleSeekBackwardCommand:(id)arg1;
- (int)_handleSeekForwardCommand:(id)arg1;
- (void)_handleSetPlaybackQueueCommand:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)_handleSkipBackwardCommand:(id)arg1;
- (int)_handleSkipForwardCommand:(id)arg1;
- (int)_handleSpecialSeekBackwardCommand:(id)arg1;
- (int)_handleSpecialSeekForwardCommand:(id)arg1;
- (int)_handleStopCommand:(id)arg1;
- (int)_handleTogglePlayPauseCommand:(id)arg1;
- (void)_isBannedDidChangeNotification:(id)arg1;
- (void)_isInWishListDidChangeNotification:(id)arg1;
- (void)_likedStateDidChangeNotification:(id)arg1;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (void)_musicDefaultsDidChangeNotification:(id)arg1;
- (void)_nowPlayingItemDidChangeNotification:(id)arg1;
- (void)_numberOfRadioStationSkipsAvailableDidChangeNotification:(id)arg1;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)_playerContentsDidChangeNotification:(id)arg1;
- (void)_playerRepeatTypeDidChangeNotification:(id)arg1;
- (void)_playerShuffleTypeDidChangeNotification:(id)arg1;
- (void)_prominentRadioStationDidChangeNotification:(id)arg1;
- (void)_registerPlayerNotifications;
- (void)_registerPrivateCommands;
- (void)_registerPublicCommands;
- (void)_reloadPlayerWithPlaybackContext:(id)arg1 fromCommandEvent:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_subscriptionStatusDidChangeNotification:(id)arg1;
- (void)_unregisterAllCommands;
- (void)_unregisterPlayerNotifications;
- (void)_updateProminentRadioStationAvailability;
- (void)_updateRepeatShuffleCommands;
- (void)_updateSupportedCommandsForItem:(id)arg1;
- (void)_updateUserCapabilities;
- (void)beginRespondingToRemoteControlEvents;
- (struct __CFArray { }*)copySupportedCommands;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithPlayer:(id)arg1;
- (id)player;
- (void)setDelegate:(id)arg1;
- (void)stopRespondingToRemoteControlEvents;

@end
