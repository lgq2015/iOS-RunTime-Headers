/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapSnapshotCreator : NSObject <VKImageCanvasDelegate> {
    id /* block */  _completion;
    BOOL  _didBecomeFullyDrawn;
    struct GLRenderer { int (**x1)(); struct Device {} *x2; unsigned int x3; unsigned int x4; bool x5; float x6; struct vector<std::__1::shared_ptr<ggl::DebugRenderer>, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_7_1_1; struct shared_ptr<ggl::DebugRenderer> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::DebugRenderer> *, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_3_2_1; } x_7_1_3; } x7; struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue> > { struct __compressed_pair<ggl::RenderQueue *, std::__1::default_delete<ggl::RenderQueue> > { struct RenderQueue {} *x_1_2_1; } x_8_1_1; } x8; struct unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > { struct __compressed_pair<ggl::CommandBuffer *, std::__1::default_delete<ggl::CommandBuffer> > { struct CommandBuffer {} *x_1_2_1; } x_9_1_1; } x9; bool x10; id x11; struct RenderState {} x12; struct unique_ptr<ggl::OESContext, std::__1::default_delete<ggl::OESContext> > { struct __compressed_pair<ggl::OESContext *, std::__1::default_delete<ggl::OESContext> > { struct OESContext {} *x_1_2_1; } x_13_1_1; } x13; struct RenderTarget {} *x14; struct TransactionBuffer { struct deque<std::__1::shared_ptr<ggl::RenderTransaction>, std::__1::allocator<std::__1::shared_ptr<ggl::RenderTransaction> > > { struct __split_buffer<std::__1::shared_ptr<ggl::RenderTransaction> *, std::__1::allocator<std::__1::shared_ptr<ggl::RenderTransaction> *> > { struct shared_ptr<ggl::RenderTransaction> {} **x_1_3_1; struct shared_ptr<ggl::RenderTransaction> {} **x_1_3_2; struct shared_ptr<ggl::RenderTransaction> {} **x_1_3_3; struct __compressed_pair<std::__1::shared_ptr<ggl::RenderTransaction> **, std::__1::allocator<std::__1::shared_ptr<ggl::RenderTransaction> *> > { struct shared_ptr<ggl::RenderTransaction> {} **x_4_4_1; } x_1_3_4; } x_1_2_1; unsigned int x_1_2_2; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::shared_ptr<ggl::RenderTransaction> > > { unsigned long x_3_3_1; } x_1_2_3; } x_15_1_1; } x15; struct unique_ptr<ggl::PerformanceHUD, std::__1::default_delete<ggl::PerformanceHUD> > { struct __compressed_pair<ggl::PerformanceHUD *, std::__1::default_delete<ggl::PerformanceHUD> > { struct PerformanceHUD {} *x_1_2_1; } x_16_1_1; } x16; struct deque<std::__1::pair<unsigned long, void *>, std::__1::allocator<std::__1::pair<unsigned long, void *> > > { struct __split_buffer<std::__1::pair<unsigned long, void *> *, std::__1::allocator<std::__1::pair<unsigned long, void *> *> > { struct pair<unsigned long, void *> {} **x_1_2_1; struct pair<unsigned long, void *> {} **x_1_2_2; struct pair<unsigned long, void *> {} **x_1_2_3; struct __compressed_pair<std::__1::pair<unsigned long, void *> **, std::__1::allocator<std::__1::pair<unsigned long, void *> *> > { struct pair<unsigned long, void *> {} **x_4_3_1; } x_1_2_4; } x_17_1_1; unsigned int x_17_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::pair<unsigned long, void *> > > { unsigned long x_3_2_1; } x_17_1_3; } x17; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_18_1_1; struct BufferLoadItem {} *x_18_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_18_1_3; } x18; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_19_1_1; struct Texture2DLoadItem {} *x_19_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_19_1_3; } x19; unsigned int x20; } * _gglRenderer;
    VKGlobeImageCanvas * _globeCanvas;
    BOOL  _hasFailedTiles;
    NSLocale * _locale;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    VKMapImageCanvas * _mapCanvas;
    int  _mapType;
    VKMemoryObserver * _memoryObserver;
}

@property (nonatomic) int labelScaleFactor;
@property (nonatomic) BOOL localizeLabels;
@property (nonatomic) int mapType;
@property (nonatomic) BOOL showsBuildings;
@property (nonatomic) BOOL showsPointsOfInterest;
@property (readonly) struct CGSize { float x1; float x2; } size;

// Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit

+ (struct shared_ptr<ggl::GLDevice> { struct GLDevice {} *x1; struct __shared_weak_count {} *x2; })device;
+ (BOOL)supportsHighResolutionSnapshots;
+ (BOOL)supportsSharingThumbnails;

- (void)_transferSettingsFrom:(id)arg1 to:(id)arg2;
- (id)activeCanvas;
- (void)cancel;
- (void)cancelFlushingTileDecodes:(BOOL)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)imageCanvasDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2;
- (void)imageCanvasWillBecomeFullyDrawn:(id)arg1;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2 homeQueue:(id)arg3;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2 homeQueue:(id)arg3 manifestConfiguration:(id)arg4 locale:(id)arg5;
- (BOOL)isRoadClassDisabled:(int)arg1;
- (int)labelScaleFactor;
- (BOOL)localizeLabels;
- (void)lookAtX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;
- (int)mapType;
- (void)renderRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)renderSnapshot:(id /* block */)arg1;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4;
- (void)setLabelScaleFactor:(int)arg1;
- (void)setLocalizeLabels:(BOOL)arg1;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3;
- (void)setMapType:(int)arg1;
- (void)setShowsBuildings:(BOOL)arg1;
- (void)setShowsPointsOfInterest:(BOOL)arg1;
- (BOOL)showsBuildings;
- (BOOL)showsPointsOfInterest;
- (struct CGSize { float x1; float x2; })size;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (void)_mapkit_configureFromDefaults;
- (void)_mapkit_configureWithOptions:(id)arg1;

@end
