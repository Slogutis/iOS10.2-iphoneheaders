/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol _UIViewModel
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) CGPoint center; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) NSArray * subviews; 
@property (nonatomic,retain) NSArray * mSubviews; 
@property (nonatomic,readonly) id<_UIViewModel> superview; 
@property (nonatomic,readonly) id stateData; 
@property (nonatomic,readonly) id<_UIViewPresentation> viewPresentation; 
@required
-(CGRect)bounds;
-(CGRect)frame;
-(id<_UIViewModel>)superview;
-(NSArray *)subviews;
-(CGPoint)center;
-(id)stateData;
-(id<_UIViewPresentation>)viewPresentation;
-(NSArray *)mSubviews;
-(void)setMSubviews:(id)arg1;

@end

