/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UITabBarController.h"

#import "PhoneBaseViewController.h"

@class DialerController, PHAddressBookController, PHFavoritesViewController, PHRecentsViewController, PHVoicemailNavigationController, PhoneNavigationController, UINavigationController;

@interface PhoneTabBarController : UITabBarController <PhoneBaseViewController>
{
    PhoneNavigationController *_favoritesNavigationController;
    PhoneNavigationController *_recentsNavigationController;
    PHFavoritesViewController *_favoritesViewController;
    PHRecentsViewController *_recentsViewController;
    PHAddressBookController *_contactsViewController;
    DialerController *_keypadViewController;
    PHVoicemailNavigationController *_voicemailViewController;
}

+ (id)defaultPNGName;
+ (int)statusBarStyle;
+ (int)viewType;
@property(retain, nonatomic) PHVoicemailNavigationController *voicemailViewController; // @synthesize voicemailViewController=_voicemailViewController;
@property(retain, nonatomic) DialerController *keypadViewController; // @synthesize keypadViewController=_keypadViewController;
@property(retain, nonatomic) PHAddressBookController *contactsViewController; // @synthesize contactsViewController=_contactsViewController;
@property(retain, nonatomic) PHRecentsViewController *recentsViewController; // @synthesize recentsViewController=_recentsViewController;
@property(retain, nonatomic) PHFavoritesViewController *favoritesViewController; // @synthesize favoritesViewController=_favoritesViewController;
@property(retain, nonatomic) UINavigationController *recentsNavigationController; // @synthesize recentsNavigationController=_recentsNavigationController;
@property(retain, nonatomic) UINavigationController *favoritesNavigationController; // @synthesize favoritesNavigationController=_favoritesNavigationController;
- (void)transitionCompleted;
- (void)handleURL:(id)arg1;
- (void)prepareToHandleURL:(id)arg1;
- (void)prepareForSnapshot;
- (BOOL)shouldSnapshot;
- (BOOL)shouldDisableEdgeClip;
- (id)viewControllerForTabViewType:(int)arg1;
- (int)tabTypeForViewController:(id)arg1;
- (void)transitionInFromViewType:(int)arg1 animated:(BOOL)arg2 completionBlock:(id)arg3;
- (void)prepareForTransitionInFromViewType:(int)arg1 animated:(BOOL)arg2;
- (void)switchToTab:(int)arg1;
- (int)currentTabViewType;
- (int)defaultTabViewType;
- (void)setSelectedViewController:(id)arg1;
- (void)applicationDidResume;
- (void)_popCurrentNavigationControllerToRootViewControllerIfAppropriate;
- (void)showFavoritesTab:(BOOL)arg1 recentsTab:(BOOL)arg2 contactsTab:(BOOL)arg3 keypadTab:(BOOL)arg4 voicemailTab:(BOOL)arg5;
- (void)_badgeChanged:(id)arg1;
- (void)_updateAllBadges:(BOOL)arg1;
- (void)_stopListeningForBadgeChangedNotifications:(id)arg1;
- (void)_startListeningForBadgeChangedNotifications:(id)arg1;
- (BOOL)_reallyWantsFullScreenLayout;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end

