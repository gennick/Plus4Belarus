/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class PHFavoritesEntry, UIImageView;

@interface PHFavoritesContactPhotoView : UIView
{
    PHFavoritesEntry *_entry;
    UIImageView *_imageView;
}

+ (float)defaultDiameter;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) PHFavoritesEntry *entry; // @synthesize entry=_entry;
- (void)handleAddressBookChangedNotification:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
