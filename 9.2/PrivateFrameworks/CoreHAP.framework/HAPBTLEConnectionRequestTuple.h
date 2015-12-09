/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPBTLEConnectionRequestTuple : NSObject {
    NSObject<OS_dispatch_source> * _connectionRequestTimer;
    NSString * _identifier;
    unsigned int  _protocolVersion;
}

@property (nonatomic, retain) NSObject<OS_dispatch_source> *connectionRequestTimer;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) unsigned int protocolVersion;

+ (id)connectionRequestTupleWithTimer:(id)arg1 identifier:(id)arg2 protocolVersion:(unsigned int)arg3;

- (void).cxx_destruct;
- (id)connectionRequestTimer;
- (id)identifier;
- (unsigned int)protocolVersion;
- (void)setConnectionRequestTimer:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setProtocolVersion:(unsigned int)arg1;

@end