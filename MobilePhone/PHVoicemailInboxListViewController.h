/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PHVoicemailListViewController.h"

#import "PHVoicemailGreetingViewControllerDelegate.h"
#import "PHVoicemailListViewControllerConcrete.h"

@class NSArray, NSString;

@interface PHVoicemailInboxListViewController : PHVoicemailListViewController <PHVoicemailGreetingViewControllerDelegate, PHVoicemailListViewControllerConcrete>
{
}

- (void)_updateGreetingButtonAllowed;
- (void)voicemailGreetingViewControllerFinished:(id)arg1;
- (void)greetingButtonTapped;
- (void)willShowVoicemails:(id)arg1;
@property(readonly) BOOL popOffIfEmpty;
- (void)performCellDetailDestructiveActionForVoicemail:(id)arg1;
@property(readonly) NSString *cellDetailDestructiveActionText;
- (void)performTableViewDestructiveActionForVoicemail:(id)arg1;
@property(readonly) NSString *tableViewDestructiveActionText;
@property(readonly) NSArray *childListControllers;
@property(readonly) unsigned int flagsNotToHave;
@property(readonly) unsigned int flagsToHave;
@property(readonly) NSString *navigationBarTextWithCountFormat;
@property(readonly) NSString *folderName;
@property(readonly) NSString *navigationBarText;
- (void)dealloc;
- (id)initWithNavigationController:(id)arg1;

@end
