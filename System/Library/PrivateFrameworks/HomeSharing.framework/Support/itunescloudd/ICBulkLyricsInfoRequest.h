/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/ICRequest.h>

@interface ICBulkLyricsInfoRequest : ICRequest {

	BOOL _useLongIDs;

}
+(id)requestWithDatabaseID:(unsigned)arg1 itemIDs:(id)arg2 useLongIDs:(BOOL)arg3 ;
-(id)_bodyDataForItemIDs:(id)arg1 ;
-(id)initWithDatabaseID:(unsigned)arg1 itemIDs:(id)arg2 useLongIDs:(BOOL)arg3 ;
-(id)canonicalResponseForResponse:(id)arg1 ;
@end
