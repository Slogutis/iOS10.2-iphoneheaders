/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKit/UIView.h>

@class _UIBackdropView, UIImageView, UILabel, UIView, UIButton, NSString;

@interface _SFCrashBanner : UIView {

	_UIBackdropView* _backdrop;
	UIImageView* _closeButtonOverlayImageView;
	UILabel* _label;
	UIView* _separator;
	UIView* _separatorOverlay;
	CGSize _cachedLabelLayoutSize;
	BOOL _usesLightControls;
	UIButton* _closeButton;

}

@property (nonatomic,retain) UIButton * closeButton;                  //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,copy) NSString * backdropGroupName; 
@property (nonatomic,readonly) BOOL usesLightControls;                //@synthesize usesLightControls=_usesLightControls - In the implementation block
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)backdropGroupName;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(UIButton *)closeButton;
-(void)_layoutCloseButton;
-(BOOL)_shouldUseManuallyWrappedCrashMessageForWidth:(double)arg1 ;
-(CGSize)_labelLayoutSizeForWidth:(double)arg1 ;
-(id)initUsingLightControls:(BOOL)arg1 ;
-(BOOL)usesLightControls;
-(void)setCloseButton:(UIButton *)arg1 ;
@end

