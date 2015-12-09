/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISCrossfadeChefOperation : NSOperation {
    double  _crossfadeDuration;
    unsigned int  _numberOfFrames;
    int  _photoEXIFOrientation;
    id /* block */  _resultHandler;
    double  _sourceStartTime;
    id  _stillPhoto;
    struct CGSize { 
        float width; 
        float height; 
    }  _targetSize;
    AVAsset * _videoAsset;
}

@property (nonatomic, readonly) double crossfadeDuration;
@property (nonatomic, readonly) unsigned int numberOfFrames;
@property (nonatomic, readonly) int photoEXIFOrientation;
@property (nonatomic, readonly, copy) id /* block */ resultHandler;
@property (nonatomic, readonly) double sourceStartTime;
@property (nonatomic, retain) id stillPhoto;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } targetSize;
@property (nonatomic, readonly) AVAsset *videoAsset;

- (void).cxx_destruct;
- (double)crossfadeDuration;
- (id)initWithVideoAsset:(id)arg1 sourceStartTime:(double)arg2 stillPhoto:(struct CGImage { }*)arg3 photoEXIFOrientation:(int)arg4 crossfadeDuration:(double)arg5 numberOfFrames:(unsigned int)arg6 targetSize:(struct CGSize { float x1; float x2; })arg7 resultHandler:(id /* block */)arg8;
- (unsigned int)numberOfFrames;
- (int)photoEXIFOrientation;
- (id /* block */)resultHandler;
- (void)setStillPhoto:(id)arg1;
- (double)sourceStartTime;
- (id)stillPhoto;
- (struct CGSize { float x1; float x2; })targetSize;
- (id)videoAsset;

@end