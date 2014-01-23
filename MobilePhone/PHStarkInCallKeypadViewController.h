/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

@class DialerController, UIButton;

@interface PHStarkInCallKeypadViewController : UIViewController
{
    UIButton *_backButton;
    UIButton *_endButton;
    DialerController *_dialerController;
    int _currentHighlightedControlIndex;
}

@property int currentHighlightedControlIndex; // @synthesize currentHighlightedControlIndex=_currentHighlightedControlIndex;
@property(retain) DialerController *dialerController; // @synthesize dialerController=_dialerController;
@property(retain) UIButton *endButton; // @synthesize endButton=_endButton;
@property(retain) UIButton *backButton; // @synthesize backButton=_backButton;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (void)_wheelChangedWithEvent:(id)arg1;
- (void)endButtonTapped:(id)arg1;
- (void)backButtonTapped:(id)arg1;
- (void)loadView;
- (void)dealloc;

@end
