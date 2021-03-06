/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsDataClassMigrator/RecentsItem.h>

@class SearchResult, AddressBookAddress, NSString;

@interface DirectionsHomeHistoryItem : NSObject <RecentsItem> {

	SearchResult* _currentLocation;

}

@property (nonatomic,retain) SearchResult * currentLocation;                  //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,readonly) AddressBookAddress * homeAddress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AddressBookAddress *)homeAddress;
-(id)init;
-(double)timestamp;
-(SearchResult *)currentLocation;
-(void)setCurrentLocation:(SearchResult *)arg1 ;
@end

