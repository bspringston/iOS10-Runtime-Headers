/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class NSObject<OS_dispatch_semaphore>, NSMutableSet, NSMapTable;

@interface TUCallCenterCallsCache : NSObject  {
    NSMutableSet *_currentCallSet;
    NSMapTable *_callRefToTelephonyCall;
    NSObject<OS_dispatch_semaphore> *_callRefToTelephonyCallSemaphore;
    NSMapTable *_chatGUIDToFaceTimeCall;
    NSObject<OS_dispatch_semaphore> *_chatGUIDToFaceTimeCallSemaphore;
    NSMapTable *_uniqueProxyIdentifierToProxyCall;
    NSObject<OS_dispatch_semaphore> *_uniqueProxyIdentifierToProxyCallSemaphore;
    NSMapTable *_conferenceIdentifierToFaceTimeProxyCall;
    NSObject<OS_dispatch_semaphore> *_conferenceIdentifierToFaceTimeProxyCallSemaphore;
}

@property(retain) NSMutableSet * currentCallSet;
@property(retain) NSMapTable * callRefToTelephonyCall;
@property(retain) NSObject<OS_dispatch_semaphore> * callRefToTelephonyCallSemaphore;
@property(retain) NSMapTable * chatGUIDToFaceTimeCall;
@property(retain) NSObject<OS_dispatch_semaphore> * chatGUIDToFaceTimeCallSemaphore;
@property(retain) NSMapTable * uniqueProxyIdentifierToProxyCall;
@property(retain) NSObject<OS_dispatch_semaphore> * uniqueProxyIdentifierToProxyCallSemaphore;
@property(retain) NSMapTable * conferenceIdentifierToFaceTimeProxyCall;
@property(retain) NSObject<OS_dispatch_semaphore> * conferenceIdentifierToFaceTimeProxyCallSemaphore;


- (void)setConferenceIdentifierToFaceTimeProxyCallSemaphore:(id)arg1;
- (void)setUniqueProxyIdentifierToProxyCallSemaphore:(id)arg1;
- (void)setChatGUIDToFaceTimeCallSemaphore:(id)arg1;
- (void)setCallRefToTelephonyCallSemaphore:(id)arg1;
- (id)proxyCallForProxyCall:(id)arg1;
- (id)callForChat:(id)arg1;
- (id)conferenceIdentifierToFaceTimeProxyCall;
- (id)conferenceIdentifierToFaceTimeProxyCallSemaphore;
- (id)uniqueProxyIdentifierToProxyCall;
- (id)uniqueProxyIdentifierToProxyCallSemaphore;
- (id)chatGUIDToFaceTimeCall;
- (id)chatGUIDToFaceTimeCallSemaphore;
- (id)_callForChat:(id)arg1 proxyCall:(id)arg2;
- (id)currentCallSet;
- (void)_updateCallWithPersistentValues:(id)arg1;
- (id)callRefToTelephonyCall;
- (id)callRefToTelephonyCallSemaphore;
- (void)setCurrentCallSet:(id)arg1;
- (void)setConferenceIdentifierToFaceTimeProxyCall:(id)arg1;
- (void)setUniqueProxyIdentifierToProxyCall:(id)arg1;
- (void)setChatGUIDToFaceTimeCall:(id)arg1;
- (void)setCallRefToTelephonyCall:(id)arg1;
- (id)callForCTCall:(struct __CTCall { }*)arg1;
- (id)init;
- (void)dealloc;

@end