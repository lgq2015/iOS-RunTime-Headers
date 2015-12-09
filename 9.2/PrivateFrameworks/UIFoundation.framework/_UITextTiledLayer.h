/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface _UITextTiledLayer : CALayer {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _gridBounds;
    struct { 
        unsigned int disableTiling : 1; 
        unsigned int ditchAllTiles : 1; 
        unsigned int suspendLayout : 4; 
    }  _tcTiledLayerFlags;
    struct CGSize { 
        float width; 
        float height; 
    }  _tileSize;
    NSMutableArray * _unusedTiles;
    NSMutableArray * _visibleTiles;
}

@property (nonatomic) BOOL usesTiledLayers;

- (void)_prepareGridForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_prepareTilesForVisibleBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)_preparedTileForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)drawDirtyLayer:(id)arg1 intoContext:(struct CGContext { }*)arg2;
- (id)init;
- (void)layoutSublayers;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (void)resumeTiling;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDrawsAsynchronously:(BOOL)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setUsesTiledLayers:(BOOL)arg1;
- (void)suspendTiling;
- (BOOL)usesTiledLayers;

@end