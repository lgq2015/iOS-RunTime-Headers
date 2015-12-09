/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchRequester : NSObject {
    NSMapTable * _pendingSearches;
    NSLock * _pendingSearchesLock;
}

+ (id)sharedSearchRequester;

- (void)cancelSearch:(id)arg1;
- (void)completions:(id)arg1 timeout:(int)arg2 useBackgroundConnection:(BOOL)arg3 finished:(id /* block */)arg4 networkActivity:(id /* block */)arg5 error:(id /* block */)arg6;
- (void)dealloc;
- (id)init;

@end