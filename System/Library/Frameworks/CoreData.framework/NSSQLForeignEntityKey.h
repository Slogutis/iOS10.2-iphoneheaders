/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLColumn.h>

@class NSString, NSSQLForeignKey;

@interface NSSQLForeignEntityKey : NSSQLColumn {

	NSString* _name;
	NSSQLForeignKey* _foreignKey;

}
-(id)toOneRelationship;
-(id)foreignKey;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(id)initWithEntity:(id)arg1 foreignKey:(id)arg2 ;
-(id)initForReadOnlyFetchingOfEntity:(id)arg1 toOneRelationship:(id)arg2 ;
-(void)setFKForReadOnlyFetch:(id)arg1 ;
-(void)dealloc;
-(id)name;
-(void)_setName:(id)arg1 ;
@end

