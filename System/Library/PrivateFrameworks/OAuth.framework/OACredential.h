/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OAuth.framework/OAuth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface OACredential : NSObject {

	NSString* _consumerKey;
	NSString* _consumerSecret;
	NSString* _oauthToken;
	NSString* _oauthTokenSecret;

}

@property (nonatomic,copy) NSString * consumerKey;                   //@synthesize consumerKey=_consumerKey - In the implementation block
@property (nonatomic,copy) NSString * consumerSecret;                //@synthesize consumerSecret=_consumerSecret - In the implementation block
@property (nonatomic,copy) NSString * oauthToken;                    //@synthesize oauthToken=_oauthToken - In the implementation block
@property (nonatomic,copy) NSString * oauthTokenSecret;              //@synthesize oauthTokenSecret=_oauthTokenSecret - In the implementation block
-(id)signingKey;
-(void)dealloc;
-(NSString *)consumerKey;
-(NSString *)consumerSecret;
-(NSString *)oauthTokenSecret;
-(NSString *)oauthToken;
-(void)setOauthTokenSecret:(NSString *)arg1 ;
-(void)setOauthToken:(NSString *)arg1 ;
-(void)setConsumerSecret:(NSString *)arg1 ;
-(void)setConsumerKey:(NSString *)arg1 ;
@end

