/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "UINavigationControllerDelegate.h"

@class PHStarkMainMenuContainerViewController, UINavigationController;

@interface PHStarkRootContainerViewController : UIViewController <UINavigationControllerDelegate>
{
    UINavigationController *_wrapperNavigationController;
    PHStarkMainMenuContainerViewController *_mainMenuContainerViewController;
}

@property(retain) PHStarkMainMenuContainerViewController *mainMenuContainerViewController; // @synthesize mainMenuContainerViewController=_mainMenuContainerViewController;
@property(retain) UINavigationController *wrapperNavigationController; // @synthesize wrapperNavigationController=_wrapperNavigationController;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

