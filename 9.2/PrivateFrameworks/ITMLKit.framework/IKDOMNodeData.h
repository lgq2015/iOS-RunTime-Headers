/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMNodeData : NSObject {
    BOOL  _autoHighlightRead;
    BOOL  _childrenUpdated;
    NSMutableDictionary * _featuresMap;
    IKDOMNode * _ownerJSNode;
    BOOL  _subtreeUpdated;
    BOOL  _updated;
}

@property (getter=isAutoHighlightRead, nonatomic) BOOL autoHighlightRead;
@property (getter=isChildrenUpdated, nonatomic) BOOL childrenUpdated;
@property (nonatomic, retain) NSMutableDictionary *featuresMap;
@property (nonatomic) IKDOMNode *ownerJSNode;
@property (getter=isSubtreeUpdated, nonatomic) BOOL subtreeUpdated;
@property (getter=isUpdated, nonatomic) BOOL updated;

+ (id)jsNodeDataForNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 create:(BOOL)arg2;

- (void).cxx_destruct;
- (id)featureForName:(id)arg1;
- (id)featuresMap;
- (BOOL)isAutoHighlightRead;
- (BOOL)isChildrenUpdated;
- (BOOL)isSubtreeUpdated;
- (BOOL)isUpdated;
- (id)ownerJSNode;
- (void)setAutoHighlightRead:(BOOL)arg1;
- (void)setChildrenUpdated:(BOOL)arg1;
- (void)setFeature:(id)arg1 forName:(id)arg2;
- (void)setFeaturesMap:(id)arg1;
- (void)setOwnerJSNode:(id)arg1;
- (void)setSubtreeUpdated:(BOOL)arg1;
- (void)setUpdated:(BOOL)arg1;

@end
