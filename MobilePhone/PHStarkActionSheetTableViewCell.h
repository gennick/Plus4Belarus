/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PHStarkGenericTableViewCell.h"

@class UILabel;

@interface PHStarkActionSheetTableViewCell : PHStarkGenericTableViewCell
{
    UILabel *_mainLabel;
    UILabel *_secondaryLabel;
}

@property(retain) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
