/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusKit/OKWidgetView.h>
#import <libobjc.A.dylib/OKWidgetEditable.h>
#import <OpusOrigamiProducer/MPAssetKeyDelegate.h>
#import <OpusOrigamiProducer/MRMarimbaViewInteractionDelegate.h>
#import <libobjc.A.dylib/OKPresentationLiveUpdateSupport.h>
#import <OpusOrigamiProducer/MRRenderingDelegate.h>

@protocol OS_dispatch_queue;
@class MRMarimbaView, MPDocument, NSMutableDictionary, NSAttributedString, NSString, NSDictionary, OKMediaFeeder, NSObject, OFUIButton, OKPresentationPage, OKPresentationViewController, MRMarimbaLayer;

@interface OKWidgetMarimbaView : OKWidgetView <OKWidgetEditable, MPAssetKeyDelegate, MRMarimbaViewInteractionDelegate, OKPresentationLiveUpdateSupport, MRRenderingDelegate> {

	MRMarimbaView* _marimbaView;
	MPDocument* _landscapeMarimbaDocument;
	MPDocument* _portraitMarimbaDocument;
	NSMutableDictionary* _marimbaOptions;
	NSAttributedString* _attributedTitle;
	NSString* _title;
	NSDictionary* _attributedSubtitles;
	NSDictionary* _subtitles;
	NSDictionary* _durations;
	BOOL _autoplay;
	BOOL _loop;
	BOOL _gotoPosterFrame;
	OKMediaFeeder* _mediaFeeder;
	unsigned long long _currentFeederIndex;
	BOOL _forceLive;
	NSObject*<OS_dispatch_queue> _serialQueue;
	BOOL _needsBuildingDocument;
	OFUIButton* _videoPlayButton;
	double _slideshowTimeAtLastUnload;
	BOOL _authoringIsOutsourced;
	BOOL _isBouncing;
	BOOL _shouldResumeAtBounceEnd;

}

@property (nonatomic,retain) OKPresentationPage * page; 
@property (nonatomic,readonly) OKPresentationViewController * presentationViewController; 
@property (assign,nonatomic) BOOL isBouncing;                                                          //@synthesize isBouncing=_isBouncing - In the implementation block
@property (assign,nonatomic) BOOL shouldResumeAtBounceEnd;                                             //@synthesize shouldResumeAtBounceEnd=_shouldResumeAtBounceEnd - In the implementation block
@property (readonly) MRMarimbaLayer * marimbaLayer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hudIsOn; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(CGSize)resolutionForAssetKey:(id)arg1 ;
-(id)absolutePathForAssetKey:(id)arg1 ;
-(BOOL)marimbaViewCanInteract:(id)arg1 ;
-(id)avAssetForAssetKey:(id)arg1 ;
-(void)warmup:(BOOL)arg1 ;
-(void)playSlideshow:(id)arg1 ;
-(MRMarimbaLayer *)marimbaLayer;
-(BOOL)slideshowShouldWrap;
-(void)renderer:(id)arg1 renderingTimeLogMessage:(id)arg2 withTimestamp:(double)arg3 ;
-(id)attributeForKey:(id)arg1 forAssetKey:(id)arg2 withOptions:(id)arg3 ;
-(id)detectRegionsOfInterestForAssetKey:(id)arg1 ;
-(id)absolutePathForAssetKey:(id)arg1 andSize:(CGSize)arg2 ;
-(id)absolutePathForStillAssetAtPath:(id)arg1 andSize:(CGSize)arg2 ;
-(CGImageRef)retainedCGImageForAssetKey:(id)arg1 andSize:(CGSize)arg2 orientation:(char*)arg3 thumbnailIfPossible:(BOOL)arg4 now:(BOOL)arg5 ;
-(CGImageRef)retainedCGImageForAssetKey:(id)arg1 andSize:(CGSize)arg2 orientation:(char*)arg3 ;
-(void)slideshowDidEnd:(id)arg1 ;
-(void)navigatorBounceStart:(id)arg1 ;
-(void)navigatorBounceEnd:(id)arg1 ;
-(id)_mediaPropertiesForMediaURL:(id)arg1 ;
-(void)_updateMarimbaDocument;
-(void)navigateToMediaWithIndex:(unsigned long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)navigateToTextWithIndex:(unsigned long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_restartSlideshowWithCompletion:(/*^block*/id)arg1 ;
-(id)settingAttributedTitle;
-(void)setSettingMediaFeeder:(id)arg1 ;
-(void)setSettingAttributedSubtitles:(id)arg1 ;
-(BOOL)settingGotoPosterFrame;
-(void)setSettingGotoPosterFrame:(BOOL)arg1 ;
-(id)attributedSubtitles;
-(void)setSettingDurations:(id)arg1 ;
-(BOOL)shouldResumeAtBounceEnd;
-(void)setSettingAttributedTitle:(id)arg1 ;
-(void)setSettingSubtitles:(id)arg1 ;
-(void)setSettingForceLive:(BOOL)arg1 ;
-(id)attributesforAssetPath:(id)arg1 ;
-(BOOL)isBouncing;
-(id)subtitles;
-(void)setSettingDocuments:(id)arg1 ;
-(void)setIsBouncing:(BOOL)arg1 ;
-(void)setSettingTitle:(id)arg1 ;
-(void)setShouldResumeAtBounceEnd:(BOOL)arg1 ;
-(id)settingTitle;
-(id)settingMediaFeeder;
-(void)pauseSlideshow:(id)arg1 ;
-(id)settingUrls;
-(void)layoutSubviews;
-(void)dealloc;
-(id)valueForUndefinedKey:(id)arg1 ;
-(BOOL)prepareForDisplay:(BOOL)arg1 ;
-(void)play;
-(void)instantPause;
-(id)durations;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setSettingUrls:(id)arg1 ;
-(BOOL)settingAutoplay;
-(void)setSettingAutoplay:(BOOL)arg1 ;
-(BOOL)settingLoop;
-(void)setSettingLoop:(BOOL)arg1 ;
-(id)settingStyle;
-(void)setSettingStyle:(id)arg1 ;
-(BOOL)prepareForWarmup:(BOOL)arg1 ;
-(BOOL)prepareForUnload:(BOOL)arg1 ;
-(void)instantResume;
-(void)presentationDidLiveUpdate;
-(BOOL)supportsReadiness;
-(void)setSettingTransition:(id)arg1 ;
-(void)setSettingInteractiveTransitionSettings:(id)arg1 ;
-(void)setAntialiasing:(BOOL)arg1 ;
-(double)remainingPlayDuration;
-(BOOL)endAllEditing:(BOOL)arg1 ;
-(void)setSettingSeed:(unsigned long long)arg1 ;
-(id)settingTransition;
-(id)initWithWidget:(id)arg1 ;
@end

