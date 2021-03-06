/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXContainerServices.framework/AXContainerServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AXUIClient;

@interface AXContainerManager : NSObject {

	AXUIClient* _containerServerClient;

}

@property (nonatomic,retain) AXUIClient * containerServerClient;              //@synthesize containerServerClient=_containerServerClient - In the implementation block
+(id)sharedManager;
-(void)dealloc;
-(void)setContainerServerClient:(AXUIClient *)arg1 ;
-(AXUIClient *)containerServerClient;
-(void)writeData:(id)arg1 toFileAtAccessibilityContainerPath:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteFileAtAccessibilityContainerPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)readDataForFileAtAccessibilityContainerPath:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

