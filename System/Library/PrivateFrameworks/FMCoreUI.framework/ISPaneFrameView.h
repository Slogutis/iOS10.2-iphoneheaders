/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:29 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class FMSlidingPaneViewController;

@interface ISPaneFrameView : UIView {

	FMSlidingPaneViewController* _owningViewController;

}

@property (assign,nonatomic,__weak) FMSlidingPaneViewController * owningViewController;              //@synthesize owningViewController=_owningViewController - In the implementation block
-(void)layoutSubviews;
-(void)setOwningViewController:(FMSlidingPaneViewController *)arg1 ;
-(FMSlidingPaneViewController *)owningViewController;
@end
