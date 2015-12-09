/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceDataRequester : GEOServiceRequester

+ (int)_experimentDispatcherRequestTypeForRequest:(id)arg1;
+ (int)_experimentType;
+ (id)_serviceTypeNumber;
+ (BOOL)_shouldThrottleRequests;
+ (unsigned int)_urlType;
+ (id)sharedInstance;

- (id)_validateResponse:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (void)startWithRequest:(id)arg1 traits:(id)arg2 timeout:(double)arg3 auditToken:(id)arg4 completionHandler:(id /* block */)arg5;

@end