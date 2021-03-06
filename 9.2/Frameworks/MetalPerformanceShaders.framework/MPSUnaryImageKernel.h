/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
 */

@interface MPSUnaryImageKernel : MPSKernel {
    int  _checkFlags;
    struct { 
        struct { 
            unsigned int x; 
            unsigned int y; 
            unsigned int z; 
        } origin; 
        struct { 
            unsigned int width; 
            unsigned int height; 
            unsigned int depth; 
        } size; 
    }  _clipRect;
    unsigned int  _edgeMode;
    struct { 
        int x; 
        int y; 
        int z; 
    }  _offset;
}

@property (nonatomic) struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; } clipRect;
@property (nonatomic) unsigned int edgeMode;
@property (nonatomic) struct { int x1; int x2; int x3; } offset;

- (struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; })clipRect;
- (id)copyWithZone:(struct _NSZone { }*)arg1 device:(id)arg2;
- (id)debugDescription;
- (unsigned int)edgeMode;
- (BOOL)encodeToCommandBuffer:(id)arg1 inPlaceTexture:(id*)arg2 fallbackCopyAllocator:(id /* block */)arg3;
- (void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3;
- (long)encodeWithComputeEncoder:(id)arg1 commandBuffer:(id)arg2 sourceTexture:(id)arg3 destinationTexture:(id)arg4 callInfo:(const struct { struct MIPixelInfo {} *x1; struct MIPixelInfo {} *x2; struct { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; } x_3_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; } x_3_1_2; } x3; }*)arg5;
- (id)init;
- (id)initWithDevice:(id)arg1;
- (struct { int x1; int x2; int x3; })offset;
- (void)setClipRect:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; })arg1;
- (void)setEdgeMode:(unsigned int)arg1;
- (void)setOffset:(struct { int x1; int x2; int x3; })arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })sourceRegionForDestinationSize:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg1;

@end
