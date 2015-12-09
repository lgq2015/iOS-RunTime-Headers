/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileWritingWritingClaim : NSFileAccessClaim {
    NSFileAccessNode * _location1;
    NSFileAccessNode * _location2;
    unsigned int  _options1;
    unsigned int  _options2;
    NSURL * _url1;
    BOOL  _url1DidChange;
    NSURL * _url2;
    BOOL  _url2DidChange;
}

- (id)allURLs;
- (BOOL)blocksClaim:(id)arg1;
- (void)dealloc;
- (void)devalueSelf;
- (BOOL)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(BOOL)arg2;
- (void)forwardUsingMessageSender:(id /* block */)arg1 crashHandler:(id /* block */)arg2;
- (void)granted;
- (id)initWithClient:(id)arg1 messageParameters:(id)arg2 arbiterQueue:(id)arg3 replySender:(id /* block */)arg4;
- (id)initWithPurposeID:(id)arg1 url:(id)arg2 options:(unsigned int)arg3 url:(id)arg4 options:(unsigned int)arg5 claimer:(id /* block */)arg6;
- (void)invokeClaimer;
- (BOOL)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned int)arg2;
- (BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned int)arg2;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (void)resolveURLsThenContinueInvokingClaimer:(id /* block */)arg1;

@end