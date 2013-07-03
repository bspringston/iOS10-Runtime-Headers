/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class RadioRequestContext, NSObject<OS_dispatch_queue>;

@interface RadioRequest : NSObject  {
    int _errorCode;
    NSObject<OS_dispatch_queue> *_queue;
    RadioRequestContext *_requestContext;
    int _status;
}

@property(copy) RadioRequestContext * requestContext;
@property(readonly) int status;
@property(readonly) int errorCode;

+ (void)loadServiceConfigurationWithCompletionHandler:(id)arg1;

- (void)setRequestContext:(id)arg1;
- (id)requestContext;
- (void)_loadRadioURLBagAndAllowRetry:(BOOL)arg1 withCompletionHandler:(id)arg2;
- (void)_loadRadioURLBagWithCompletionHandler:(id)arg1;
- (void)setErrorCode:(int)arg1;
- (int)errorCode;
- (int)status;
- (void)setStatus:(int)arg1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;

@end