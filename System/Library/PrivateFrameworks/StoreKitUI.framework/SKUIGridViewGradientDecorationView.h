/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class SKUIGridViewGradientDecorationBackgroundView, IKColor, UIView;

@interface SKUIGridViewGradientDecorationView : UICollectionReusableView {

	SKUIGridViewGradientDecorationBackgroundView* _backgroundView;
	IKColor* _kolor;

}

@property (nonatomic,readonly) UIView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)backgroundView;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)_createGradient:(id)arg1 withGradientType:(long long)arg2 ;
@end
