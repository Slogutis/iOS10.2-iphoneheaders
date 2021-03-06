/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsLockScreen/BannerView.h>

@class _MKUILabel, TransitBannerItem;

@interface BannerTransitView : BannerView {

	_MKUILabel* _titleLabel;
	_MKUILabel* _subtitleLabel;

}

@property (nonatomic,retain) _MKUILabel * titleLabel;                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) _MKUILabel * subtitleLabel;                           //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) TransitBannerItem * transitBannerItem; 
-(TransitBannerItem *)transitBannerItem;
-(void)updateFromBannerItem;
-(_MKUILabel *)titleLabel;
-(id)initWithContext:(id)arg1 ;
-(void)setTitleLabel:(_MKUILabel *)arg1 ;
-(void)setSubtitleLabel:(_MKUILabel *)arg1 ;
-(_MKUILabel *)subtitleLabel;
@end

