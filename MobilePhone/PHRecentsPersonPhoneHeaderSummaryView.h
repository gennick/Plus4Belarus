/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

#import "PHRecentsPersonHeaderSummaryView.h"

@class UILabel;

@interface PHRecentsPersonPhoneHeaderSummaryView : UIView <PHRecentsPersonHeaderSummaryView>
{
    UILabel *_topmostLabel;
    UILabel *_bottommostLabel;
    float _intrinsicContentHeight;
}

@property float intrinsicContentHeight; // @synthesize intrinsicContentHeight=_intrinsicContentHeight;
@property UILabel *bottommostLabel; // @synthesize bottommostLabel=_bottommostLabel;
@property UILabel *topmostLabel; // @synthesize topmostLabel=_topmostLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1 recentCall:(id)arg2 occurrenceDate:(id)arg3 type:(int)arg4 duration:(double)arg5 category:(int)arg6;

@end

