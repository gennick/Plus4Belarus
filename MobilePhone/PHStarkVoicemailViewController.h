/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PHStarkGenericTableViewController.h"

@interface PHStarkVoicemailViewController : PHStarkGenericTableViewController
{
}

- (id)badgeString;
- (id)subtitleForNoContentBanner;
- (id)titleForNoContentBanner;
- (void)programmaticallySelectRowAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)voicemailViewControllerPlayVoicemailEventNotification:(id)arg1;
- (void)voicemailManagerChangedNotification:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
