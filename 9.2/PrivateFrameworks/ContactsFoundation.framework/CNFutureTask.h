/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNFutureTask : NSObject <CNFuture, CNPromise> {
    CNFutureCompletionBlocks * _completionBlocks;
    CNFutureResult * _futureResult;
    NSConditionLock * _stateLock;
    CNTask * _task;
}

@property (getter=isCancelled, readonly) BOOL cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFinished, readonly) BOOL finished;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)_flushCompletionBlocks;
- (void)addFailureBlock:(id /* block */)arg1;
- (void)addSuccessBlock:(id /* block */)arg1;
- (BOOL)cancel;
- (id /* block */)completionHandlerAdapter;
- (void)dealloc;
- (void)didCancel;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (BOOL)finishWithError:(id)arg1;
- (BOOL)finishWithResult:(id)arg1;
- (BOOL)finishWithResult:(id)arg1 error:(id)arg2;
- (id)flatMap:(id /* block */)arg1;
- (id)futureResult;
- (id)init;
- (id)initWithTask:(id)arg1;
- (BOOL)isCancelled;
- (BOOL)isFinished;
- (BOOL)nts_isFinished;
- (id)recover:(id /* block */)arg1;
- (id)result:(id*)arg1;
- (id)resultBeforeDate:(id)arg1 error:(id*)arg2;
- (id)resultWithTimeout:(double)arg1 error:(id*)arg2;
- (BOOL)run;

@end
