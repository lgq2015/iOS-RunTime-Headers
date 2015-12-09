/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKDOMRange : NSObject {
    struct RefPtr<WebCore::Range> { 
        struct Range {} *m_ptr; 
    }  _impl;
}

@property (readonly, retain) WKDOMNode *endContainer;
@property (readonly) int endOffset;
@property (readonly) BOOL isCollapsed;
@property (readonly, retain) WKDOMNode *startContainer;
@property (readonly) int startOffset;
@property (readonly, copy) NSString *text;
@property (readonly) NSArray *textRects;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct OpaqueWKBundleRangeHandle { }*)_copyBundleRangeHandleRef;
- (id)_initWithImpl:(struct Range { unsigned int x1; struct Ref<WebCore::Document> { struct Document {} *x_2_1_1; } x2; struct RangeBoundaryPoint { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_3_1_1; int x_3_1_2; struct RefPtr<WebCore::Node> { struct Node {} *x_3_2_1; } x_3_1_3; } x3; struct RangeBoundaryPoint { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_4_1_1; int x_4_1_2; struct RefPtr<WebCore::Node> { struct Node {} *x_3_2_1; } x_4_1_3; } x4; }*)arg1;
- (void)collapse:(BOOL)arg1;
- (void)dealloc;
- (id)endContainer;
- (int)endOffset;
- (id)initWithDocument:(id)arg1;
- (BOOL)isCollapsed;
- (void)selectNode:(id)arg1;
- (void)selectNodeContents:(id)arg1;
- (void)setEnd:(id)arg1 offset:(int)arg2;
- (void)setStart:(id)arg1 offset:(int)arg2;
- (id)startContainer;
- (int)startOffset;
- (id)text;
- (id)textRects;

@end