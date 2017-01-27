/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/ApplicationWorkspaceOperation.h>

@class ApplicationHandle;

@interface ApplicationWorkspaceInstallPlaceholderOperation : ApplicationWorkspaceOperation {

	ApplicationHandle* _applicationHandle;

}
-(id)initWithApplicationHandle:(id)arg1 ;
-(BOOL)blocksAppInstallation;
-(void)runWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_makePlaceholderDirectoryForApplication:(id)arg1 error:(id*)arg2 ;
-(id)_newITunesMetadataWithApplicationHandle:(id)arg1 ;
-(id)_placeholdersContainerDirectoryPath;
-(id)_newInfoPlistWithApplicationHandler:(id)arg1 ;
@end
