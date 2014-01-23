/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PHStarkGenericTableViewController.h"

@class DialerController;

@interface PHStarkDialerViewController : PHStarkGenericTableViewController
{
    DialerController *_dialerController;
    int _currentHighlightedControlIndex;
}

@property int currentHighlightedControlIndex; // @synthesize currentHighlightedControlIndex=_currentHighlightedControlIndex;
@property(retain) DialerController *dialerController; // @synthesize dialerController=_dialerController;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (void)_wheelChangedWithEvent:(id)arg1;
- (void)dealloc;
- (void)loadView;

@end
