/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPDirectoryPackage.h>

@interface TSPExpandedDirectoryPackage : TSPDirectoryPackage
+(BOOL)isValidPackageAtURL:(id)arg1 ;
+(BOOL)hasZipArchive;
-(void)prepareForDocumentReplacementWithSuccess:(BOOL)arg1 forSafeSave:(BOOL)arg2 originalURL:(id)arg3 ;
-(unsigned long long)encodedLengthForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(BOOL)arg2 ;
-(id)newRawReadChannelForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(BOOL)arg2 ;
@end
