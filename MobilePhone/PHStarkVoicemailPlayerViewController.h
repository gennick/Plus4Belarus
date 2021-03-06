/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PHStarkGenericViewController.h"

#import "PHAudioPlayerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class PHAudioPlayer, PHAudioPlayerVoicemailDataSource, PHStarkPlayPauseButton, UIButton, UIImageView, UILabel, UIProgressView, VMVoicemail;

@interface PHStarkVoicemailPlayerViewController : PHStarkGenericViewController <PHAudioPlayerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    BOOL _firstAppearanceEvent;
    VMVoicemail *_representedVoicemail;
    UILabel *_nameLabel;
    UILabel *_detailLabel;
    UIImageView *_personImageView;
    PHStarkPlayPauseButton *_playPauseButton;
    UIProgressView *_progressBar;
    UILabel *_elapsedLabel;
    UILabel *_remainingLabel;
    UIButton *_callBackButton;
    UIButton *_backButton;
    PHAudioPlayer *_audioPlayerController;
    PHAudioPlayerVoicemailDataSource *_voicemailDataSource;
}

+ (id)detailStringForVoicemail:(id)arg1;
@property BOOL firstAppearanceEvent; // @synthesize firstAppearanceEvent=_firstAppearanceEvent;
@property(retain) PHAudioPlayerVoicemailDataSource *voicemailDataSource; // @synthesize voicemailDataSource=_voicemailDataSource;
@property(retain) PHAudioPlayer *audioPlayerController; // @synthesize audioPlayerController=_audioPlayerController;
@property(retain) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain) UIButton *callBackButton; // @synthesize callBackButton=_callBackButton;
@property(retain) UILabel *remainingLabel; // @synthesize remainingLabel=_remainingLabel;
@property(retain) UILabel *elapsedLabel; // @synthesize elapsedLabel=_elapsedLabel;
@property(retain) UIProgressView *progressBar; // @synthesize progressBar=_progressBar;
@property(retain) PHStarkPlayPauseButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(retain) UIImageView *personImageView; // @synthesize personImageView=_personImageView;
@property(retain) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) VMVoicemail *representedVoicemail; // @synthesize representedVoicemail=_representedVoicemail;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (void)hardwareControlEventNotification:(id)arg1;
- (void)backButtonTapped:(id)arg1;
- (void)callBackButtonTapped:(id)arg1;
- (void)playPauseButtonTapped:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)updateWithElapsedTime:(double)arg1 playableTime:(double)arg2 totalTime:(double)arg3 isPlaying:(BOOL)arg4 isPlayable:(BOOL)arg5 dataSource:(id)arg6;
- (void)stoppedPlayingWithDataSource:(id)arg1 withError:(id)arg2;
- (void)startedPlayingWithDataSource:(id)arg1;
- (void)dealloc;
- (id)init;

@end

