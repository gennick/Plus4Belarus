/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PHAbstractDialerView.h"

#import "TPDialerKeypadDelegate.h"

@class NSLayoutConstraint, UIView;

@interface PHHandsetDialerView : PHAbstractDialerView <TPDialerKeypadDelegate>
{
    UIView *_leftBlankView;
    UIView *_rightBlankView;
    UIView *_bottomBlankView;
    UIView *_topBlankView;
    NSLayoutConstraint *_statusBarToLCDViewConstraint;
    NSLayoutConstraint *_callButtonKeypadOffsetConstraint;
    UIView *_dimmingView;
}

@property(retain) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(retain) NSLayoutConstraint *callButtonKeypadOffsetConstraint; // @synthesize callButtonKeypadOffsetConstraint=_callButtonKeypadOffsetConstraint;
@property(retain) NSLayoutConstraint *statusBarToLCDViewConstraint; // @synthesize statusBarToLCDViewConstraint=_statusBarToLCDViewConstraint;
@property(retain) UIView *topBlankView; // @synthesize topBlankView=_topBlankView;
@property(retain) UIView *bottomBlankView; // @synthesize bottomBlankView=_bottomBlankView;
@property(retain) UIView *rightBlankView; // @synthesize rightBlankView=_rightBlankView;
@property(retain) UIView *leftBlankView; // @synthesize leftBlankView=_leftBlankView;
- (void)lcdViewTapped:(id)arg1;
- (id)layoutConstraintMetrics;
- (id)newCallButton;
- (id)newNumberPadView;
- (id)newLCDView;
- (id)dialerColor;
- (float)heightForCallButton;
- (void)updateContraintsForStatusBar;
- (void)setInCallMode:(BOOL)arg1;
- (void)createConstraints;
- (void)dealloc;
- (void)animateInFromDefaultPNG;
- (id)initWithFrame:(struct CGRect)arg1;

@end

