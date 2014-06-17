/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaQuery, MPMediaItem;

@interface MPLocalMediaQueryRemotePlaybackQueue : MPRemotePlaybackQueue  {
    MPMediaQuery *_mediaQuery;
    MPMediaItem *_firstItem;
    unsigned long long _shuffleType;
    unsigned long long _repeatType;
}

@property(readonly) MPMediaQuery * mediaQuery;
@property(readonly) MPMediaItem * firstItem;
@property(readonly) unsigned long long shuffleType;
@property(readonly) unsigned long long repeatType;


- (id)mediaQuery;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { }*)arg1;
- (unsigned long long)shuffleType;
- (unsigned long long)repeatType;
- (void).cxx_destruct;
- (id)description;
- (id)firstItem;

@end