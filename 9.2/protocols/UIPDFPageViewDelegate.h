/* Generated by RuntimeBrowser.
 */

@protocol UIPDFPageViewDelegate

@optional

- (Class)classForAnnotationType:(const char *)arg1;
- (void)didTap:(UIPDFPageView *)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)doubleTapIn:(UIPDFPageView *)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)pageWasRendered:(UIPDFPageView *)arg1;
- (void)resetZoom:(UIPDFPageView *)arg1;
- (void)selectionDidEndTracking:(UIPDFPageView *)arg1;
- (BOOL)selectionWillTrack:(UIPDFPageView *)arg1;
- (BOOL)shouldRecognizeTapIn:(UIPDFPageView *)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)zoom:(UIPDFPageView *)arg1 to:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 atPoint:(struct CGPoint { float x1; float x2; })arg3 kind:(int)arg4;

@end
