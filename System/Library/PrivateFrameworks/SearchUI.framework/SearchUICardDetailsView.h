/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, UITextView;

@interface SearchUICardDetailsView : UIView {

	UILabel* _titleLabel;
	UITextView* _detailsTextView;

}

@property (retain) UILabel * titleLabel;                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (retain) UITextView * detailsTextView;                         //@synthesize detailsTextView=_detailsTextView - In the implementation block
@property (assign) unsigned long long maximumNumberOfLines; 
-(void)setMaximumNumberOfLines:(unsigned long long)arg1 ;
-(UILabel *)titleLabel;
-(id)viewForLastBaselineLayout;
-(id)viewForFirstBaselineLayout;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(unsigned long long)maximumNumberOfLines;
-(id)initWithTitle:(id)arg1 details:(id)arg2 controller:(id)arg3 ;
-(void)setDetailsTextView:(UITextView *)arg1 ;
-(UITextView *)detailsTextView;
-(double)idealTextViewHeightForCurrentWidth;
-(double)currentTextViewHeight;
@end
