/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class UIButton, UILabel;

@interface PHConferenceParticipantCell : UITableViewCell
{
    BOOL _shouldShowPrivateButton;
    id <PHConferenceParticipantCellProtocol> _delegate;
    UILabel *_nameLabel;
    UIButton *_endCallButton;
    UIButton *_privateButton;
}

@property UIButton *privateButton; // @synthesize privateButton=_privateButton;
@property UIButton *endCallButton; // @synthesize endCallButton=_endCallButton;
@property(nonatomic) BOOL shouldShowPrivateButton; // @synthesize shouldShowPrivateButton=_shouldShowPrivateButton;
@property(readonly) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property id <PHConferenceParticipantCellProtocol> delegate; // @synthesize delegate=_delegate;
- (void)makeHeld;
- (void)buttonTapped:(id)arg1;
- (void)setRepresentedCall:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

