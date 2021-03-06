/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MobileContainerManager.framework/Support/containermanagerd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSMutableDictionary, NSArray;

@interface MCMGlobalConfiguration : NSObject {

	NSURL* _homeDirectory;
	NSURL* _installdHomeDirectory;
	NSURL* _sharedContainersDirectory;
	NSURL* _cachesDirectory;
	NSURL* _libraryDirectory;
	NSURL* _stagingDirectory;
	NSURL* _deathrowDirectory;
	NSURL* _replaceDirectory;
	NSURL* _pendingUpdatesDirectory;
	NSURL* _bundleDirectory;
	NSURL* _transientDirectory;
	NSURL* _transientBundleDirectory;
	unsigned _currentMobileUserId;
	NSMutableDictionary* _perUserConfigurations;

}

@property (readonly) NSURL * logDirectory; 
@property (readonly) NSURL * libraryDirectory; 
@property (readonly) NSURL * stagingDirectory; 
@property (readonly) NSURL * deathrowDirectory; 
@property (readonly) NSURL * replaceDirectory; 
@property (readonly) NSURL * pendingUpdatesDirectory; 
@property (readonly) NSURL * sharedContainersDirectory; 
@property (readonly) NSURL * bundleDirectory; 
@property (readonly) NSURL * transientDirectory; 
@property (readonly) NSURL * transientBundleDirectory; 
@property (readonly) NSArray * appUserDataItemNames; 
@property (nonatomic,readonly) unsigned currentMobileUserId;              //@synthesize currentMobileUserId=_currentMobileUserId - In the implementation block
+(id)sharedInstance;
-(id)getPerUserConfigurationForUserId:(unsigned)arg1 ;
-(id)getPerUserConfigurationForCurrentMobileUser;
-(NSURL *)sharedContainersDirectory;
-(NSURL *)libraryDirectory;
-(NSURL *)transientDirectory;
-(NSURL *)transientBundleDirectory;
-(NSURL *)stagingDirectory;
-(NSURL *)deathrowDirectory;
-(NSURL *)replaceDirectory;
-(NSURL *)pendingUpdatesDirectory;
-(NSURL *)bundleDirectory;
-(id)globalContainerBaseURLWithContentClass:(unsigned long long)arg1 transient:(BOOL)arg2 ;
-(id)containerDirectoryURLForUser:(unsigned)arg1 contentClass:(unsigned long long)arg2 transient:(BOOL)arg3 ;
-(NSArray *)appUserDataItemNames;
-(BOOL)migrationFileExistsWithName:(id)arg1 ;
-(unsigned)currentMobileUserId;
-(id)cachesDirectory;
-(id)init;
-(NSURL *)logDirectory;
@end

