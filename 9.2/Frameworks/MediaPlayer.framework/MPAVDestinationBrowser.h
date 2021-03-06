/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVDestinationBrowser : NSObject {
    BOOL  _isScanning;
    MPAVRoutingController * _routingController;
    BOOL  _scansForDestinationsWhenEnteringForeground;
}

@property (nonatomic) BOOL scansForDestinationsWhenEnteringForeground;

- (void).cxx_destruct;
- (void)_beginScanningForDestinationsNotification:(id)arg1;
- (void)_endScanningForDestinationsNotification:(id)arg1;
- (void)beginScanningForDestinations;
- (void)dealloc;
- (void)endScanningForDestinations;
- (id)init;
- (BOOL)scansForDestinationsWhenEnteringForeground;
- (void)setScansForDestinationsWhenEnteringForeground:(BOOL)arg1;

@end
