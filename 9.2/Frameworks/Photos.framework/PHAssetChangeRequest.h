/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetChangeRequest : NSObject <PHUpdateChangeRequest> {
    NSString * _assetDescription;
    NSString * _clientName;
    int  _clientProcessID;
    PHContentEditingOutput * _contentEditingOutput;
    BOOL  _didChangeAdjustments;
    BOOL  _didSetVisibilityState;
    NSString * _editorBundleID;
    NSURL * _editorBundleURL;
    BOOL  _entitled;
    PHChangeRequestHelper * _helper;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _imageDisplayTime;
    NSString * _pairingIdentifier;
    unsigned short  _photoIrisVisibilityState;
    NSIndexSet * _supportedEditOperations;
    CLLocation * _updatedLocation;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _videoDuration;
    NSURL * _videoURLForUpdate;
}

@property (nonatomic, retain) NSString *assetDescription;
@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic, readonly) int clientProcessID;
@property (nonatomic, retain) PHContentEditingOutput *contentEditingOutput;
@property (nonatomic, retain) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL didChangeAdjustments;
@property (nonatomic, readonly, copy) NSString *editorBundleID;
@property (getter=isEntitled, nonatomic, readonly) BOOL entitled;
@property (getter=isFavorite, nonatomic) BOOL favorite;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) PHChangeRequestHelper *helper;
@property (getter=isHidden, nonatomic) BOOL hidden;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } imageDisplayTime;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (nonatomic, retain) NSDate *modificationDate;
@property (getter=isMutated, readonly) BOOL mutated;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, retain) NSString *pairingIdentifier;
@property (nonatomic) unsigned short photoIrisVisibilityState;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedAsset;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSIndexSet *supportedEditOperations;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } videoDuration;
@property (nonatomic, retain) NSURL *videoURLForUpdate;

+ (id)_allAssetEditOperations;
+ (id)changeRequestForAsset:(id)arg1;
+ (id)changeRequestForAssetFromVideoFileURL:(id)arg1 imageAsset:(id)arg2 displayTime:(double)arg3;
+ (id)creationRequestForAssetFromImage:(id)arg1;
+ (id)creationRequestForAssetFromImageAtFileURL:(id)arg1;
+ (id)creationRequestForAssetFromVideoAtFileURL:(id)arg1;
+ (id)creationRequestForAssetFromVideoComplementBundle:(id)arg1;
+ (void)deleteAssets:(id)arg1;

- (void).cxx_destruct;
- (BOOL)_validateImageURLForAssetMutation:(id)arg1 error:(id*)arg2;
- (BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3;
- (BOOL)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2;
- (id)assetDescription;
- (id)clientName;
- (int)clientProcessID;
- (id)contentEditingOutput;
- (id)creationDate;
- (BOOL)didChangeAdjustments;
- (void)didMutate;
- (id)editorBundleID;
- (void)encodeToXPCDict:(id)arg1;
- (id)helper;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })imageDisplayTime;
- (id)init;
- (id)initWithHelper:(id)arg1;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 entitled:(BOOL)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (BOOL)isEntitled;
- (BOOL)isFavorite;
- (BOOL)isHidden;
- (BOOL)isHiding;
- (BOOL)isMutated;
- (BOOL)isRevertingContentToOriginal;
- (id)location;
- (id)managedEntityName;
- (void)markDidChangeAdjustments;
- (id)modificationDate;
- (id)mutations;
- (id)objectID;
- (id)pairingIdentifier;
- (unsigned short)photoIrisVisibilityState;
- (id)placeholderForCreatedAsset;
- (void)revertAssetContentToOriginal;
- (void)setAdjustmentData:(id)arg1 withRenderedJPEGData:(id)arg2 orRenderedContentURL:(id)arg3 penultimateRenderedJPEGData:(id)arg4 isSubstandardRender:(BOOL)arg5 fullSizeRenderSize:(struct CGSize { float x1; float x2; })arg6;
- (void)setAssetDescription:(id)arg1;
- (void)setContentEditingOutput:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setFavorite:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setImageDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setLocation:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setPairingIdentifier:(id)arg1;
- (void)setPhotoIrisVisibilityState:(unsigned short)arg1;
- (void)setSupportedEditOperations:(id)arg1;
- (void)setVideoDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setVideoURLForUpdate:(id)arg1;
- (id)supportedEditOperations;
- (id)uuid;
- (BOOL)validateAdjustmentDataForAssetMutation:(id)arg1 error:(id*)arg2;
- (BOOL)validateAssetDescription:(id)arg1 error:(id*)arg2;
- (BOOL)validateContentEditingOutput:(id)arg1 error:(id*)arg2;
- (BOOL)validateContentURL:(id)arg1 error:(id*)arg2 writeAccessRequired:(BOOL)arg3;
- (BOOL)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2;
- (BOOL)validateVideoURLForAssetMutation:(id)arg1 error:(id*)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoDuration;
- (id)videoURLForUpdate;

@end