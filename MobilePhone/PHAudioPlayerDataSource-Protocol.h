/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@protocol PHAudioPlayerDataSource <NSObject>
@property(readonly) BOOL fullFileAvailable;
@property(readonly) NSString *audioFilePath;

@optional
@property(readonly) unsigned long long expectedTotalBytes;
@property(readonly) unsigned long long availableBytes;
@property(readonly) double duration;
@end
