/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PHStarkGenericTableViewCell.h"

@class NSLayoutConstraint, PHStarkLozengeLabel, UIDateLabel, UILabel;

@interface PHStarkRecentsTableViewCell : PHStarkGenericTableViewCell
{
    UILabel *_nameLabel;
    UILabel *_phoneNumberTypeLabel;
    UIDateLabel *_dateLabel;
    NSLayoutConstraint *_nameLabelVerticalLayoutConstraint;
    NSLayoutConstraint *_dateLabelVerticalLayoutConstraint;
    PHStarkLozengeLabel *_missedCallLabel;
}

@property(retain) PHStarkLozengeLabel *missedCallLabel; // @synthesize missedCallLabel=_missedCallLabel;
@property(retain) NSLayoutConstraint *dateLabelVerticalLayoutConstraint; // @synthesize dateLabelVerticalLayoutConstraint=_dateLabelVerticalLayoutConstraint;
@property(retain) NSLayoutConstraint *nameLabelVerticalLayoutConstraint; // @synthesize nameLabelVerticalLayoutConstraint=_nameLabelVerticalLayoutConstraint;
@property(retain) UIDateLabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain) UILabel *phoneNumberTypeLabel; // @synthesize phoneNumberTypeLabel=_phoneNumberTypeLabel;
@property(retain) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void)setRepresentedRecentCall:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

