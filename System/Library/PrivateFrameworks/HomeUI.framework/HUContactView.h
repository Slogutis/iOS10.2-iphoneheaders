/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UIView.h>

@class CNContact, CNAvatarView, NSMutableArray, UILabel, NSAttributedString;

@interface HUContactView : UIView {

	double _avatarDiameter;
	CNContact* _contact;
	long long _contactNameFormatStyle;
	unsigned long long _numberOfLinesForMessage;
	CNAvatarView* _avatarView;
	NSMutableArray* _constraints;
	UILabel* _nameLabel;
	UILabel* _messageLabel;

}

@property (nonatomic,retain) CNAvatarView * avatarView;                               //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) NSMutableArray * constraints;                            //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                                     //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                                  //@synthesize messageLabel=_messageLabel - In the implementation block
@property (assign,nonatomic) double avatarDiameter;                                   //@synthesize avatarDiameter=_avatarDiameter - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                     //@synthesize contact=_contact - In the implementation block
@property (assign,nonatomic) long long contactNameFormatStyle;                        //@synthesize contactNameFormatStyle=_contactNameFormatStyle - In the implementation block
@property (nonatomic,retain) NSAttributedString * message; 
@property (assign,nonatomic) unsigned long long numberOfLinesForMessage;              //@synthesize numberOfLinesForMessage=_numberOfLinesForMessage - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(NSMutableArray *)constraints;
-(void)setConstraints:(NSMutableArray *)arg1 ;
-(void)setMessage:(NSAttributedString *)arg1 ;
-(NSAttributedString *)message;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(void)_updateConstraints;
-(UILabel *)messageLabel;
-(CNContact *)contact;
-(CNAvatarView *)avatarView;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
-(void)setContact:(CNContact *)arg1 ;
-(void)setAvatarDiameter:(double)arg1 ;
-(double)avatarDiameter;
-(void)setContactNameFormatStyle:(long long)arg1 ;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(long long)contactNameFormatStyle;
-(unsigned long long)numberOfLinesForMessage;
-(void)setNumberOfLinesForMessage:(unsigned long long)arg1 ;
-(void)_setupViews;
@end

