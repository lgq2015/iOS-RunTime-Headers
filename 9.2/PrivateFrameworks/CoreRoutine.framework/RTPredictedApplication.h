/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTPredictedApplication : NSObject <NSCopying, NSSecureCoding> {
    RTApplication * _application;
    double  _confidence;
    int  _reason;
    RTSource * _source;
}

@property (nonatomic, readonly) RTApplication *application;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) int reason;
@property (nonatomic, retain) RTSource *source;

+ (id)reasonToString:(int)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)application;
- (double)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithApplication:(id)arg1 reason:(int)arg2 confidence:(double)arg3 source:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (int)reason;
- (void)setSource:(id)arg1;
- (id)source;

@end
