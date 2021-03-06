/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

@interface FUAirport : NSObject <NSCopying> {
    NSString * _IATACode;
    struct { 
        double latitude; 
        double longitude; 
    }  _location;
    NSString * _name;
    CLPlacemark * _placemark;
    NSTimeZone * _timeZone;
}

@property (retain) NSString *IATACode;
@property struct { double x1; double x2; } location;
@property (retain) NSString *name;
@property (retain) CLPlacemark *placemark;
@property (retain) NSTimeZone *timeZone;

- (void).cxx_destruct;
- (id)IATACode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)fetchPlacemarkWithCompletionHandler:(id /* block */)arg1;
- (BOOL)isEqual:(id)arg1;
- (struct { double x1; double x2; })location;
- (id)name;
- (id)placemark;
- (void)setIATACode:(id)arg1;
- (void)setLocation:(struct { double x1; double x2; })arg1;
- (void)setName:(id)arg1;
- (void)setPlacemark:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;

@end
