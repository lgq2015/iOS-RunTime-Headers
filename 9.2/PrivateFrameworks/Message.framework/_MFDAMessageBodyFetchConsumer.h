/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFDAMessageBodyFetchConsumer : NSObject <DAMailAccountStreamConsumerFactory, MFRequestQueueResponseConsumer> {
    NSData * _data;
    MFError * _error;
    <MFDAStreamingContentConsumer> * _streamConsumer;
    BOOL  _succeeded;
}

@property (nonatomic, retain) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MFError *error;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) <MFDAStreamingContentConsumer> *streamConsumer;
@property (nonatomic, readonly) BOOL succeeded;
@property (readonly) Class superclass;

- (id)data;
- (void)dealloc;
- (id)error;
- (void)handleResponse:(id)arg1 error:(id)arg2;
- (void)setData:(id)arg1;
- (void)setError:(id)arg1;
- (void)setStreamConsumer:(id)arg1;
- (id)streamConsumer;
- (id)streamingContentConsumer;
- (BOOL)succeeded;
- (BOOL)wantsData;

@end
