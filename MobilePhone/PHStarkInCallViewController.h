/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBUIRemoteAlertServiceViewController.h"

#import "TPStarkInCallViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class TPStarkInCallViewController, UIView, UIViewController;

@interface PHStarkInCallViewController : SBUIRemoteAlertServiceViewController <UIGestureRecognizerDelegate, TPStarkInCallViewControllerDelegate, UINavigationControllerDelegate>
{
    BOOL _nextBackDismissesNavController;
    UIViewController *_contactsViewController;
    UIView *_flippyViewContainer;
    TPStarkInCallViewController *_mainInCallViewController;
}

+ (id)latestInCallViewController;
@property(retain) TPStarkInCallViewController *mainInCallViewController; // @synthesize mainInCallViewController=_mainInCallViewController;
@property(retain) UIView *flippyViewContainer; // @synthesize flippyViewContainer=_flippyViewContainer;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)hardwareControlEventNotification:(id)arg1;
- (void)dismissalRequestedFromInCallViewController:(id)arg1;
- (void)presentKeypadViewControllerRequestedFromInCallViewController:(id)arg1;
- (void)cancelAddCallViewController:(id)arg1;
- (void)backPressed:(id)arg1;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)presentAddCallViewControllerRequestedFromInCallViewController:(id)arg1;
- (BOOL)activePhoneCallExists;
- (void)animateOutIfNecessary;
- (void)updateTPInCallControllerPhoneCalls;
- (void)queueUpdateToTPIncallControllerPhoneCalls;
- (void)conferencedCallsChangedNotification:(id)arg1;
- (void)displayedCallsChangedNotification:(id)arg1;
- (void)incomingCallChangedNotification:(id)arg1;
- (void)muteStateChangedNotification:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

