/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CHSynchronizedLoggable : NSObject <CHLoggerProtocol, CHSynchronizableProtocol> {
    CHLogger * _logger;
    CHSynchronizable * _synchronizable;
}

- (void).cxx_destruct;
- (void)execute:(id /* block */)arg1;
- (void)executeSync:(id /* block */)arg1;
- (BOOL)executeSyncWithBOOL:(id /* block */)arg1;
- (id)executeSyncWithResult:(id /* block */)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 queue:(id)arg2;
- (void)logWithLevel:(unsigned int)arg1 withFormat:(id)arg2;
- (id)queue;
- (BOOL)shouldLogForLevel:(unsigned int)arg1;

@end