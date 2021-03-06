/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFileCoordinator.h>

@class NSString;

@interface PFUbiquityFileCoordinator : NSFileCoordinator {

	NSString* _localPeerID;

}

@property (nonatomic,readonly) NSString * localPeerID;              //@synthesize localPeerID=_localPeerID - In the implementation block
+(id)newFileCoordinatorForUbiquitousExternalDataReferenceLocation:(id)arg1 ;
+(id)newFileCoordinatorForUbiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2 ;
+(id)newFileCoordinatorForUbiquityRootLocation:(id)arg1 ;
-(NSString *)localPeerID;
-(void)coordinateReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 retryOnError:(BOOL)arg3 error:(id*)arg4 byAccessor:(/*^block*/id)arg5 ;
-(BOOL)shouldRetryForError:(id)arg1 ignoreFile:(BOOL*)arg2 ;
-(void)dealloc;
-(id)initWithFilePresenter:(id)arg1 ;
@end

