/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

@protocol PHAudioPlayerDelegate
- (void)stoppedPlayingWithDataSource:(id)arg1 withError:(id)arg2;
- (void)updateWithElapsedTime:(double)arg1 playableTime:(double)arg2 totalTime:(double)arg3 isPlaying:(BOOL)arg4 isPlayable:(BOOL)arg5 dataSource:(id)arg6;
- (void)startedPlayingWithDataSource:(id)arg1;
@end

