/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>

@class UITableViewCell, UIImageView, _UITableViewCellEditControlMinusView;

@interface UITableViewCellEditControl : UIControl {

	UITableViewCell* _cell;
	UIImageView* _imageView;
	_UITableViewCellEditControlMinusView* _minusView;
	UIImageView* _shadowView;
	unsigned _style : 2;
	unsigned _rotated : 1;
	unsigned _rotating : 1;
	unsigned _reserved : 27;

}

@property (assign,getter=isRotated,nonatomic) BOOL rotated; 
@property (nonatomic,readonly) BOOL wantsMaskingWhileAnimatingDisabled; 
@property (nonatomic,readonly) BOOL wantsImageShadow; 
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)defaultSize;
-(BOOL)isRotating;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_multiselectColorChanged;
-(void)setSelected:(BOOL)arg1 ;
-(unsigned long long)_controlEventsForActionTriggered;
-(id)_shadowImage;
-(id)_currentImage;
-(void)_toggleRotateAnimationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(BOOL)isRotated;
-(void)setRotated:(BOOL)arg1 ;
-(void)setRotated:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithTableViewCell:(id)arg1 editingStyle:(long long)arg2 ;
-(BOOL)wantsMaskingWhileAnimatingDisabled;
-(void)_updateImageView;
-(id)_minusView;
-(CGRect)_minusRect;
-(void)_toggleRotate;
-(id)_deleteImageBackground:(double)arg1 ;
-(id)_deleteImage:(double)arg1 ;
-(id)_insertImage:(double)arg1 ;
-(id)_multiSelectNotSelectedImage;
-(id)_multiSelectSelectedImage;
-(id)_multiSelectHighlightedImage;
-(BOOL)wantsImageShadow;
@end

