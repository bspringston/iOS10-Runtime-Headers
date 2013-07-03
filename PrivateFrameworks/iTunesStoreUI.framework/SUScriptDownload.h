/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSNumber, ISUDownload, NSString;

@interface SUScriptDownload : SUScriptObject  {
    ISUDownload *_download;
}

@property(readonly) NSNumber * adamID;
@property(readonly) NSString * phase;
@property(readonly) float progress;

+ (id)phaseStringForDownload:(id)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (void)initialize;

- (id)initWithSSDownload:(id)arg1;
- (id)initWithISUDownload:(id)arg1;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)adamID;
- (id)attributeKeys;
- (void)dealloc;
- (float)progress;
- (id)phase;

@end