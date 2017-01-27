/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIButton.h>

@protocol MPUEmptyNowPlayingViewDelegate;
@class UIImageView, UILabel, NSString;

@interface MPUEmptyNowPlayingView : UIButton {

	UIImageView* _appIconImageView;
	UILabel* _appDisplayNameLabel;
	UILabel* _continueListeningLabel;
	BOOL _shouldShowActionText;
	id<MPUEmptyNowPlayingViewDelegate> _delegate;
	NSString* _appBundleIdentifier;

}

@property (assign,nonatomic,__weak) id<MPUEmptyNowPlayingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * appBundleIdentifier;                                    //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL shouldShowActionText;                                       //@synthesize shouldShowActionText=_shouldShowActionText - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MPUEmptyNowPlayingViewDelegate>)arg1 ;
-(id<MPUEmptyNowPlayingViewDelegate>)delegate;
-(void)setHighlighted:(BOOL)arg1 ;
-(NSString *)appBundleIdentifier;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(void)setShouldShowActionText:(BOOL)arg1 ;
-(id)_desaturatedImageWithImage:(id)arg1 ;
-(BOOL)shouldShowActionText;
@end
