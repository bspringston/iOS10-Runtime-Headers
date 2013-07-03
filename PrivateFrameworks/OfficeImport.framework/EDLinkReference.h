/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDLinkReference : NSObject  {
    unsigned int mLinkIndex;
    unsigned int mFirstSheetIndex;
    unsigned int mLastSheetIndex;
}

+ (id)linkReferenceWithLinkIndex:(unsigned int)arg1 firstSheetIndex:(unsigned int)arg2 lastSheetIndex:(unsigned int)arg3;

- (bool)isWorkbookLevelReference;
- (void)setLinkIndex:(unsigned int)arg1;
- (void)setLastSheetIndex:(unsigned int)arg1;
- (void)setFirstSheetIndex:(unsigned int)arg1;
- (BOOL)isEqualToLinkReference:(id)arg1;
- (id)initWithLinkIndex:(unsigned int)arg1 firstSheetIndex:(unsigned int)arg2 lastSheetIndex:(unsigned int)arg3;
- (unsigned int)linkIndex;
- (unsigned int)lastSheetIndex;
- (unsigned int)firstSheetIndex;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;

@end