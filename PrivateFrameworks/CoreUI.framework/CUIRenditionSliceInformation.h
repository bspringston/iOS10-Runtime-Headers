/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIRenditionSliceInformation : NSObject <NSCopying> {
    int _renditionType;
    float _boundaries[4];
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _destinationRect;
    struct { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _edgeInsets;
}

@property(readonly) int renditionType;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } destinationRect;
@property(readonly) struct { float x1; float x2; float x3; float x4; } edgeInsets;


- (struct { float x1; float x2; float x3; float x4; })edgeInsets;
- (id)initWithRenditionType:(int)arg1 destinationRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 topLeftInset:(struct CGSize { float x1; float x2; })arg3 bottomRightInset:(struct CGSize { float x1; float x2; })arg4;
- (struct CGSize { float x1; float x2; })_bottomRightCapSize;
- (struct CGSize { float x1; float x2; })_topLeftCapSize;
- (int)renditionType;
- (id)initWithSliceInformation:(id)arg1 destinationRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (float)positionOfSliceBoundary:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })destinationRect;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end