/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicQueryQueueFeeder : MPMediaQueryQueueFeeder

@property (nonatomic, retain) MPMediaPlaylist *mixPlaylist;

+ (Class)playbackItemMetadataClass;
+ (BOOL)supportsStateRestoration;

- (id)errorResolverForItem:(id)arg1;
- (Class)itemClass;
- (id)mixPlaylist;
- (int)realRepeatType;
- (int)realShuffleType;
- (void)setMixPlaylist:(id)arg1;

@end
