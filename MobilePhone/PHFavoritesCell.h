/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class NSArray, NSLayoutConstraint, PHFavoritesContactPhotoView, PHFavoritesEntry, UIImageView, UILabel;

@interface PHFavoritesCell : UITableViewCell
{
    UILabel *_titleTextLabel;
    UILabel *_labelTextLabel;
    UIImageView *_iconGlyphView;
    PHFavoritesContactPhotoView *_contactPhotoView;
    long _buildConstraintsOnceToken;
    NSLayoutConstraint *_contactPhotoLeftInsetConstraint;
    NSArray *_mutableConstraints;
    NSLayoutConstraint *_rightViewRightInsetConstraint;
    NSLayoutConstraint *_titleLeftInsetConstraint;
    PHFavoritesEntry *_favoritesEntry;
}

+ (float)height;
+ (id)faceTimeAudioGlyphPress;
+ (id)faceTimeAudioGlyph;
+ (id)faceTimeGlyphPress;
+ (id)faceTimeGlyph;
+ (float)editingMarginWidth;
+ (float)marginWidth;
+ (BOOL)shouldShowContactPhotos;
@property(nonatomic) PHFavoritesEntry *favoritesEntry; // @synthesize favoritesEntry=_favoritesEntry;
- (void)_updateFonts;
- (BOOL)_drawsTopSeparatorDuringReordering;
- (void)_setReordering:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_populateSubviewsFromFavoritesItem;
@property(readonly) BOOL shouldShowContactPhotos; // @dynamic shouldShowContactPhotos;
@property(readonly) BOOL shouldShowIconGlyph; // @dynamic shouldShowIconGlyph;
@property(readonly) BOOL shouldShowTextLabel; // @dynamic shouldShowTextLabel;
- (void)_rebuildMutableConstraints;
- (void)_handleContentSizeCategoryDidChange:(id)arg1;
- (void)_handleFavoritesShowsContactPhotosChanged:(id)arg1;
- (void)_handleFavoritesEntryChanged:(id)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
