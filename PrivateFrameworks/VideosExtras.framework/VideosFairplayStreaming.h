/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosFairplayStreaming : NSObject

+ (id)_sharedInstance;
+ (bool)handleResourceLoadingRequest:(id)arg1 forRentalWithIdentifier:(id)arg2 requiresCheckout:(bool)arg3 withLoader:(id)arg4;
+ (bool)handleResourceLoadingRequest:(id)arg1 withLoader:(id)arg2;
+ (bool)loaderShouldWaitForResourceLoadingRequest:(id)arg1;

- (bool)_handleResourceLoadingRequest:(id)arg1 withRentalIdentifier:(id)arg2 requiresCheckout:(bool)arg3 andLoader:(id)arg4;
- (id)_pastisCertificateURL;
- (id)_pastisKeyServerURL;

@end