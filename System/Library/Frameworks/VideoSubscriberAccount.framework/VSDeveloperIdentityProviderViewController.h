/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class VSIdentityProvider;


@protocol VSDeveloperIdentityProviderViewController <NSObject>
@property (nonatomic,copy) VSIdentityProvider * identityProvider; 
@property (assign,nonatomic) long long editingMode; 
@property (assign,nonatomic,__weak) id<VSDeveloperIdentityProviderViewControllerDelegate> delegate; 
@required
-(void)setDelegate:(id)arg1;
-(id<VSDeveloperIdentityProviderViewControllerDelegate>)delegate;
-(VSIdentityProvider *)identityProvider;
-(void)setIdentityProvider:(id)arg1;
-(void)setEditingMode:(long long)arg1;
-(long long)editingMode;

@end
