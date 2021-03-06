/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, _AVViewSublayerAnimationDelegateProxy, NSArray;

@interface AVView : UIView {

	NSMutableArray* _sublayers;
	_AVViewSublayerAnimationDelegateProxy* _sublayerAnimationDelegateProxy;

}

@property (nonatomic,readonly) NSArray * sublayers; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)addSublayer:(id)arg1 ;
-(NSArray *)sublayers;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)removeSublayer:(id)arg1 ;
@end

