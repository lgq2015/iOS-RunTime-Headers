/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

@interface VTUIAudioSessionAVVC : NSObject <AVVoiceControllerRecordDelegate, VTUIAudioSession> {
    NSString * _audioInput;
    <VTUIAudioSessionDelegate> * _delegate;
    BOOL  _isReady;
    NSObject<OS_dispatch_queue> * _queue;
    AVVoiceController * _voiceController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VTUIAudioSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (float)averagePower;
- (int)convertStopReason:(int)arg1;
- (id)delegate;
- (id)init;
- (BOOL)isRecording;
- (BOOL)prepareRecord;
- (void)releaseAudioSession;
- (void)resetEndPointer;
- (void)setDelegate:(id)arg1;
- (void)setEndpointerDelegate:(id)arg1;
- (BOOL)startRecording;
- (void)stopRecording;
- (void)updateMeters;
- (id)voiceController;
- (void)voiceControllerDidStartRecording:(id)arg1 successfully:(BOOL)arg2 error:(id)arg3;
- (void)voiceControllerDidStopRecording:(id)arg1 forReason:(int)arg2;
- (void)voiceControllerEncoderErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)voiceControllerRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2;

@end
