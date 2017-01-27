/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>

@class UILabel, NSString;

@interface HUAssociatedServiceTypeOptionCell : UITableViewCell <HUDisableableCellProtocol> {

	BOOL _disabled;
	BOOL _checked;
	BOOL _suggestion;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,getter=isChecked,nonatomic) BOOL checked;                    //@synthesize checked=_checked - In the implementation block
@property (assign,getter=isSuggestion,nonatomic) BOOL suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                  //@synthesize disabled=_disabled - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setChecked:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)isChecked;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(BOOL)isDisabled;
-(id)colorForCurrentState;
-(BOOL)isSuggestion;
-(void)setSuggestion:(BOOL)arg1 ;
@end
