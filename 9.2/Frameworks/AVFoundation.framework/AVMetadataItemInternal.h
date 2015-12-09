/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMetadataItemInternal : NSObject {
    NSString * commonKey;
    NSString * dataType;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  duration;
    NSString * extendedLanguageTag;
    NSDictionary * extras;
    NSString * identifier;
    long  itemIndex;
    <NSObject><NSCopying> * key;
    NSString * keySpace;
    NSString * languageCode;
    NSLocale * locale;
    struct OpaqueFigMetadataReader { } * reader;
    NSDate * startDate;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  time;
    <NSObject><NSCopying> * value;
}

@end