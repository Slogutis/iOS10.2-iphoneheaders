/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISDialog.h>

@class NSString;

@interface ISTouchIDDialog : ISDialog {

	BOOL _isFree;
	NSString* _body;
	NSString* _username;

}

@property (nonatomic,copy) NSString * body;                  //@synthesize body=_body - In the implementation block
@property (nonatomic,copy) NSString * username;              //@synthesize username=_username - In the implementation block
@property (assign,nonatomic) BOOL isFree;                    //@synthesize isFree=_isFree - In the implementation block
-(NSString *)body;
-(void)setBody:(NSString *)arg1 ;
-(void)setIsFree:(BOOL)arg1 ;
-(id)buttonForButtonType:(long long)arg1 ;
-(BOOL)isFree;
-(id)initWithDialogDictionary:(id)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
@end

