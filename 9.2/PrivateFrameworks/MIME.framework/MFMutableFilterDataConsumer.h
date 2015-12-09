/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMutableFilterDataConsumer : MFBaseFilterDataConsumer <MFGuaranteedCollectingDataConsumer> {
    MFLock * _consumerLock;
    BOOL  _isDone;
    <MFGuaranteedCollectingDataConsumer> * _mainConsumer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)addDataConsumer:(id)arg1;
- (int)appendData:(id)arg1;
- (id)data;
- (void)dealloc;
- (void)done;
- (id)initWithMainConsumer:(id)arg1;

@end