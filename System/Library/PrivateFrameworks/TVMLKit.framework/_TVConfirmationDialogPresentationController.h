/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UIPresentationController.h>

@class UIVisualEffectView;

@interface _TVConfirmationDialogPresentationController : UIPresentationController {

	UIVisualEffectView* _backdropView;
	/*^block*/id _completedAnimationBlock;
	CGSize _modalSize;

}

@property (nonatomic,readonly) UIVisualEffectView * backdropView; 
@property (assign,nonatomic) CGSize modalSize;                                 //@synthesize modalSize=_modalSize - In the implementation block
@property (nonatomic,copy) id completedAnimationBlock;                         //@synthesize completedAnimationBlock=_completedAnimationBlock - In the implementation block
-(void)dealloc;
-(long long)presentationStyle;
-(void)presentationTransitionWillBegin;
-(void)dismissalTransitionWillBegin;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(UIVisualEffectView *)backdropView;
-(void)_tapGesture:(id)arg1 ;
-(void)_layoutPresentedView;
-(CGSize)modalSize;
-(void)setModalSize:(CGSize)arg1 ;
-(id)completedAnimationBlock;
-(void)setCompletedAnimationBlock:(id)arg1 ;
@end

