/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PHVoicemailListViewController.h"

#import "PHVoicemailListViewControllerConcrete.h"
#import "UIActionSheetDelegate.h"

@class NSArray, NSString, UIActionSheet;

@interface PHVoicemailTrashListViewController : PHVoicemailListViewController <UIActionSheetDelegate, PHVoicemailListViewControllerConcrete>
{
    UIActionSheet *_clearAllConfirmationActionSheet;
}

- (void)_updateClearAllEnabled;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)_trashHandleVoicemailTaskStartedOrEnded:(id)arg1;
- (void)clearAllTapped;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willShowVoicemails:(id)arg1;
@property(readonly) BOOL popOffIfEmpty;
- (void)performCellDetailDestructiveActionForVoicemail:(id)arg1;
@property(readonly) NSString *cellDetailDestructiveActionText;
- (void)performTableViewDestructiveActionForVoicemail:(id)arg1;
@property(readonly) NSString *tableViewDestructiveActionText;
@property(readonly) unsigned int flagsNotToHave;
@property(readonly) unsigned int flagsToHave;
@property(readonly) NSString *folderName;
@property(readonly) NSString *navigationBarText;
- (void)dealloc;
- (id)initWithNavigationController:(id)arg1;

// Remaining properties
@property(readonly) NSArray *childListControllers;
@property(readonly) NSString *navigationBarTextWithCountFormat;

@end

