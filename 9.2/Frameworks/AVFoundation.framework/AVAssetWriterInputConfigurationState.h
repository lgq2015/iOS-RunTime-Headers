/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputConfigurationState : NSObject {
    short  _alternateGroupID;
    BOOL  _attachedToPixelBufferAdaptor;
    int  _chunkAlignment;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _chunkDuration;
    int  _chunkSize;
    BOOL  _expectsMediaDataInRealTime;
    NSString * _extendedLanguageTag;
    NSString * _languageCode;
    int  _layer;
    BOOL  _marksOutputTrackAsEnabled;
    int  _mediaTimeScale;
    NSString * _mediaType;
    NSArray * _metadataItems;
    struct CGSize { 
        float width; 
        float height; 
    }  _naturalSize;
    AVOutputSettings * _outputSettings;
    BOOL  _performsMultiPassEncodingIfSupported;
    float  _preferredVolume;
    NSURL * _sampleReferenceBaseURL;
    struct opaqueCMFormatDescription { } * _sourceFormatHint;
    NSDictionary * _sourcePixelBufferAttributes;
    NSDictionary * _trackReferences;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    }  _transform;
}

@property (nonatomic) short alternateGroupID;
@property (nonatomic) BOOL attachedToPixelBufferAdaptor;
@property (nonatomic) BOOL expectsMediaDataInRealTime;
@property (nonatomic, copy) NSString *extendedLanguageTag;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic) int layer;
@property (nonatomic) BOOL marksOutputTrackAsEnabled;
@property (nonatomic) int mediaTimeScale;
@property (nonatomic, copy) NSString *mediaType;
@property (nonatomic, copy) NSArray *metadataItems;
@property (nonatomic) struct CGSize { float x1; float x2; } naturalSize;
@property (nonatomic, copy) AVOutputSettings *outputSettings;
@property (nonatomic) BOOL performsMultiPassEncodingIfSupported;
@property (nonatomic) int preferredMediaChunkAlignment;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } preferredMediaChunkDuration;
@property (nonatomic) int preferredMediaChunkSize;
@property (nonatomic) float preferredVolume;
@property (nonatomic, copy) NSURL *sampleReferenceBaseURL;
@property (nonatomic, retain) struct opaqueCMFormatDescription { }*sourceFormatHint;
@property (nonatomic, copy) NSDictionary *sourcePixelBufferAttributes;
@property (nonatomic, copy) NSDictionary *trackReferences;
@property (nonatomic) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } transform;

- (short)alternateGroupID;
- (BOOL)attachedToPixelBufferAdaptor;
- (void)dealloc;
- (BOOL)expectsMediaDataInRealTime;
- (id)extendedLanguageTag;
- (id)languageCode;
- (int)layer;
- (BOOL)marksOutputTrackAsEnabled;
- (int)mediaTimeScale;
- (id)mediaType;
- (id)metadataItems;
- (struct CGSize { float x1; float x2; })naturalSize;
- (id)outputSettings;
- (BOOL)performsMultiPassEncodingIfSupported;
- (int)preferredMediaChunkAlignment;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })preferredMediaChunkDuration;
- (int)preferredMediaChunkSize;
- (float)preferredVolume;
- (id)sampleReferenceBaseURL;
- (void)setAlternateGroupID:(short)arg1;
- (void)setAttachedToPixelBufferAdaptor:(BOOL)arg1;
- (void)setExpectsMediaDataInRealTime:(BOOL)arg1;
- (void)setExtendedLanguageTag:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLayer:(int)arg1;
- (void)setMarksOutputTrackAsEnabled:(BOOL)arg1;
- (void)setMediaTimeScale:(int)arg1;
- (void)setMediaType:(id)arg1;
- (void)setMetadataItems:(id)arg1;
- (void)setNaturalSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setOutputSettings:(id)arg1;
- (void)setPerformsMultiPassEncodingIfSupported:(BOOL)arg1;
- (void)setPreferredMediaChunkAlignment:(int)arg1;
- (void)setPreferredMediaChunkDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPreferredMediaChunkSize:(int)arg1;
- (void)setPreferredVolume:(float)arg1;
- (void)setSampleReferenceBaseURL:(id)arg1;
- (void)setSourceFormatHint:(struct opaqueCMFormatDescription { }*)arg1;
- (void)setSourcePixelBufferAttributes:(id)arg1;
- (void)setTrackReferences:(id)arg1;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (struct opaqueCMFormatDescription { }*)sourceFormatHint;
- (id)sourcePixelBufferAttributes;
- (id)trackReferences;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;

@end
