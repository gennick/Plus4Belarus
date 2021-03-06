/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class CALayer;

@interface PHInCallRingView : UIView
{
    CALayer *_luminanceRingLayer;
    CALayer *_dodgeRingLayer;
    CALayer *_highlightDodgeLayer;
    CALayer *_highlightLuminanceLayer;
    CALayer *_selectionLayer;
}

+ (id)_createRingImageWithSize:(struct CGSize)arg1 strokeWidth:(float)arg2 color:(id)arg3;
+ (id)ringImageForDodge;
+ (id)ringImageForLuminance;
@property(retain) CALayer *selectionLayer; // @synthesize selectionLayer=_selectionLayer;
@property(retain) CALayer *highlightLuminanceLayer; // @synthesize highlightLuminanceLayer=_highlightLuminanceLayer;
@property(retain) CALayer *highlightDodgeLayer; // @synthesize highlightDodgeLayer=_highlightDodgeLayer;
@property(retain) CALayer *dodgeRingLayer; // @synthesize dodgeRingLayer=_dodgeRingLayer;
@property(retain) CALayer *luminanceRingLayer; // @synthesize luminanceRingLayer=_luminanceRingLayer;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;

@end

