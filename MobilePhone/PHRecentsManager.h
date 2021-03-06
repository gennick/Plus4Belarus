/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSRecursiveLock;

@interface PHRecentsManager : NSObject
{
    BOOL _showsFaceTimeCalls;
    BOOL _showsFaceTimeAudioCalls;
    BOOL _showsTelephonyCalls;
    NSMutableArray *calls;
    NSRecursiveLock *callsLock;
}

+ (int)numberOfUnseenMissedCalls;
@property BOOL showsTelephonyCalls; // @synthesize showsTelephonyCalls=_showsTelephonyCalls;
@property BOOL showsFaceTimeAudioCalls; // @synthesize showsFaceTimeAudioCalls=_showsFaceTimeAudioCalls;
@property BOOL showsFaceTimeCalls; // @synthesize showsFaceTimeCalls=_showsFaceTimeCalls;
@property(retain) NSRecursiveLock *callsLock; // @synthesize callsLock;
@property(retain) NSMutableArray *calls; // @synthesize calls;
- (BOOL)dialRecentCall:(id)arg1;
- (void)deleteCall:(id)arg1;
- (void)deleteAllCalls;
- (id)recentCalls;
- (void)reloadCallsArray;
- (void)reloadCallsArrayIfNecessary;
- (id)copyDisplayableCTCalls;
- (BOOL)recentsArray:(id)arg1 representsCTCallsArray:(id)arg2;
- (id)copyRecentCallsArrayWithCTCalls:(id)arg1;
- (void)markRepresentedCallsAsSeen;
- (void)applicationDidReceiveMemoryWarningNotification:(id)arg1;
- (void)phoneApplicationLocaleChangedNotification:(id)arg1;
- (void)phoneApplicationAddressBookChangedNotification:(id)arg1;
- (void)homeCountryCodeChangedNotification:(id)arg1;
- (void)faceTimeAvailabilityChangedNotification:(id)arg1;
- (void)callHistorySignificantChangeNotification;
- (void)callHistoryRecordAddedNotification:(struct __CTCall *)arg1;
- (void)dealloc;
- (id)init;

@end

