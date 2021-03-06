/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/CloudKitSettings.bundle/CloudKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIActivityIndicatorView, NSString;

@interface CKVettingAddressSelectionTableViewCell : UITableViewCell {

	UIActivityIndicatorView* _spinner;
	NSString* _participantID;
	NSString* _email;
	NSString* _number;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) NSString * participantID;                       //@synthesize participantID=_participantID - In the implementation block
@property (nonatomic,retain) NSString * email;                               //@synthesize email=_email - In the implementation block
@property (nonatomic,retain) NSString * number;                              //@synthesize number=_number - In the implementation block
-(void)deselect;
-(void)clearSpinner;
-(void)select;
-(NSString *)participantID;
-(void)setParticipantID:(NSString *)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(id)address;
-(NSString *)email;
-(void)startSpinner;
-(NSString *)number;
-(void)setNumber:(NSString *)arg1 ;
-(void)setEmail:(NSString *)arg1 ;
@end

