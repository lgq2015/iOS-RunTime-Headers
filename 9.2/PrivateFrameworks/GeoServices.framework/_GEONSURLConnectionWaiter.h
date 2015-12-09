/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEONSURLConnectionWaiter : NSObject <NSURLConnectionDelegate> {
    id /* block */  _callback;
    NSURLConnection * _conn;
    NSMutableData * _data;
    NSURLResponse * _response;
}

@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic, retain) NSURLConnection *conn;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id /* block */)callback;
- (id)conn;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (void)setCallback:(id /* block */)arg1;
- (void)setConn:(id)arg1;

@end