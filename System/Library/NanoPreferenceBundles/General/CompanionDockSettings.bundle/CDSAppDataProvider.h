/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/NanoPreferenceBundles/General/CompanionDockSettings.bundle/CompanionDockSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDSAppDataProvider <NSObject>
@property (assign,nonatomic,__weak) id<CDSAppDataProviderDelegate> delegate; 
@required
-(void)loadAppsWithCompletion:(/*^block*/id)arg1;
-(void)setDelegate:(id)arg1;
-(id<CDSAppDataProviderDelegate>)delegate;

@end

