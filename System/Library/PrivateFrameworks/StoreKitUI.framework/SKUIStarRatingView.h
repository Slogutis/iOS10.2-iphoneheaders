/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIImage;

@interface SKUIStarRatingView : UIView {

	double _elementSpacing;
	UIImageView* _ratingStarsImageView;
	UILabel* _textLabel;

}

@property (assign,nonatomic) double elementSpacing;                   //@synthesize elementSpacing=_elementSpacing - In the implementation block
@property (nonatomic,retain) UIImage * ratingStarsImage; 
@property (nonatomic,readonly) UILabel * textLabel; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)textLabel;
-(void)setElementSpacing:(double)arg1 ;
-(UIImage *)ratingStarsImage;
-(void)setRatingStarsImage:(UIImage *)arg1 ;
-(double)elementSpacing;
@end
