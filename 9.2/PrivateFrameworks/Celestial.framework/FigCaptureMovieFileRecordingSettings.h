/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureMovieFileRecordingSettings : FigCaptureRecordingSettings <NSCoding, NSCopying> {
    NSDictionary * _audioSettings;
    BOOL  _irisRecording;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _movieFragmentInterval;
    NSArray * _movieLevelMetadata;
    BOOL  _recordVideoOrientationAndMirroringChanges;
    BOOL  _sendThumbnailIOSurface;
    BOOL  _videoMirrored;
    int  _videoOrientation;
    NSDictionary * _videoSettings;
}

@property (nonatomic, copy) NSDictionary *audioSettings;
@property (getter=isIrisRecording, nonatomic) BOOL irisRecording;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } movieFragmentInterval;
@property (nonatomic, copy) NSArray *movieLevelMetadata;
@property (nonatomic) BOOL recordVideoOrientationAndMirroringChanges;
@property (nonatomic) BOOL sendThumbnailIOSurface;
@property (nonatomic) BOOL videoMirrored;
@property (nonatomic) int videoOrientation;
@property (nonatomic, copy) NSDictionary *videoSettings;

- (id)audioSettings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isIrisRecording;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieFragmentInterval;
- (id)movieLevelMetadata;
- (BOOL)recordVideoOrientationAndMirroringChanges;
- (BOOL)sendThumbnailIOSurface;
- (void)setAudioSettings:(id)arg1;
- (void)setIrisRecording:(BOOL)arg1;
- (void)setMovieFragmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMovieLevelMetadata:(id)arg1;
- (void)setRecordVideoOrientationAndMirroringChanges:(BOOL)arg1;
- (void)setSendThumbnailIOSurface:(BOOL)arg1;
- (void)setVideoMirrored:(BOOL)arg1;
- (void)setVideoOrientation:(int)arg1;
- (void)setVideoSettings:(id)arg1;
- (BOOL)videoMirrored;
- (int)videoOrientation;
- (id)videoSettings;

@end
