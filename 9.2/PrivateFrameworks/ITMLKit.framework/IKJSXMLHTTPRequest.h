/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSXMLHTTPRequest : IKJSEventListenerObject <IKJSXMLHTTPRequest, ISStoreURLOperationDelegate> {
    BOOL  _async;
    NSString * _dataToSend;
    BOOL  _inProgress;
    ISURLOperation * _jingleOperation;
    BOOL  _jingleRequest;
    JSManagedValue * _managedSelf;
    NSMutableArray * _onReadyStateChangeMessageQueue;
    int  _onReadyStateChangeMessageQueueLock;
    NSString * _password;
    NSDictionary * _performanceMetrics;
    BOOL  _primeEnabled;
    int  _primeRetryCount;
    unsigned int  _readyState;
    NSMutableData * _receivedData;
    int  _reprimingResponseStatus;
    NSError * _requestError;
    int  _requestReadyState;
    int  _requestResponseType;
    unsigned int  _requestStatusCode;
    NSString * _requestStatusText;
    BOOL  _shouldSquashOnReadyStateEvents;
    unsigned int  _status;
    NSString * _statusText;
    NSURLConnection * _urlConnection;
    NSMutableURLRequest * _urlRequest;
    NSHTTPURLResponse * _urlResponse;
    NSString * _user;
    unsigned long  timeout;
}

@property (nonatomic, copy) NSString *dataToSend;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) ISURLOperation *jingleOperation;
@property (nonatomic) BOOL jingleRequest;
@property (nonatomic, retain) JSManagedValue *managedSelf;
@property (readonly) NSDictionary *metrics;
@property (nonatomic, retain) NSMutableArray *onReadyStateChangeMessageQueue;
@property (nonatomic, retain) NSString *password;
@property (retain) NSDictionary *performanceMetrics;
@property (nonatomic, readonly) BOOL primeEnabled;
@property (nonatomic) int primeRetryCount;
@property unsigned int readyState;
@property (nonatomic, retain) NSMutableData *receivedData;
@property (nonatomic, readonly) int reprimingResponseStatus;
@property (nonatomic, retain) NSError *requestError;
@property (nonatomic) int requestReadyState;
@property (nonatomic) int requestResponseType;
@property (nonatomic) unsigned int requestStatusCode;
@property (nonatomic, retain) NSString *requestStatusText;
@property (readonly) id response;
@property (readonly) NSString *responseText;
@property (retain) NSString *responseType;
@property (readonly) IKDOMDocument *responseXML;
@property unsigned int status;
@property (retain) NSString *statusText;
@property (readonly) Class superclass;
@property unsigned long timeout;
@property (nonatomic, retain) NSURLConnection *urlConnection;
@property (nonatomic, retain) NSMutableURLRequest *urlRequest;
@property (nonatomic, retain) NSHTTPURLResponse *urlResponse;
@property (nonatomic, retain) NSString *user;

+ (id)xhrOperationQueue;

- (void).cxx_destruct;
- (void)_abort;
- (void)_clearAllReadyStateChangeMessagesAndSquashFutureOnes;
- (id)_constructProgressEventData;
- (id)_createStoreOperation:(id)arg1;
- (id)_dequeueReadyStateChangeMessage;
- (BOOL)_isPrimeError:(int)arg1 output:(id)arg2;
- (void)_openWithMethod:(id)arg1 url:(id)arg2 async:(BOOL)arg3 user:(id)arg4 password:(id)arg5;
- (void)_operationFinished:(id)arg1;
- (void)_prime:(id)arg1;
- (void)_reprime:(id)arg1;
- (void)_sendWithData:(id)arg1;
- (void)_setException:(id)arg1;
- (id)_timeIntervalSince1970;
- (void)abort;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)dataToSend;
- (id)getAllResponseHeaders;
- (id)getResponseHeader:(id)arg1;
- (id)init;
- (id)initWithAppContext:(id)arg1 jingleRequest:(BOOL)arg2;
- (id)jingleOperation;
- (BOOL)jingleRequest;
- (id)managedSelf;
- (id)metrics;
- (id)onReadyStateChangeMessageQueue;
- (void)open:(id)arg1 :(id)arg2 :(id)arg3 :(id)arg4 :(id)arg5;
- (void)operation:(id)arg1 didDiscoverContentLength:(id)arg2;
- (void)operation:(id)arg1 didReceiveResponse:(id)arg2;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(id)arg1 willSendRequest:(id)arg2;
- (id)password;
- (id)performanceMetrics;
- (BOOL)primeEnabled;
- (int)primeRetryCount;
- (unsigned int)readyState;
- (id)receivedData;
- (int)reprimingResponseStatus;
- (id)requestError;
- (int)requestReadyState;
- (int)requestResponseType;
- (unsigned int)requestStatusCode;
- (id)requestStatusText;
- (id)response;
- (id)responseBlob;
- (id)responseText;
- (id)responseType;
- (id)responseXML;
- (void)send:(id)arg1;
- (void)setDataToSend:(id)arg1;
- (void)setJingleOperation:(id)arg1;
- (void)setJingleRequest:(BOOL)arg1;
- (void)setManagedSelf:(id)arg1;
- (void)setOnReadyStateChangeMessageQueue:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPerformanceMetrics:(id)arg1;
- (void)setPrimeRetryCount:(int)arg1;
- (void)setReadyState:(unsigned int)arg1;
- (void)setReceivedData:(id)arg1;
- (void)setRequestError:(id)arg1;
- (void)setRequestHeader:(id)arg1 :(id)arg2;
- (void)setRequestReadyState:(int)arg1;
- (void)setRequestResponseType:(int)arg1;
- (void)setRequestStatusCode:(unsigned int)arg1;
- (void)setRequestStatusText:(id)arg1;
- (void)setResponseType:(id)arg1;
- (void)setStatus:(unsigned int)arg1;
- (void)setStatusText:(id)arg1;
- (void)setTimeout:(unsigned long)arg1;
- (void)setUrlConnection:(id)arg1;
- (void)setUrlRequest:(id)arg1;
- (void)setUrlResponse:(id)arg1;
- (void)setUser:(id)arg1;
- (unsigned int)status;
- (id)statusText;
- (unsigned long)timeout;
- (id)urlConnection;
- (id)urlRequest;
- (id)urlResponse;
- (id)user;

@end
