/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Notes/Notes-Structs.h>
@class NSString, NSDate, NSArray;

@interface ICSpotlightAttributeSet : NSObject {

	NSString* _identifier;
	NSString* _objectIdentifier;
	NSDate* _modificationDate;
	NSString* _title;
	NSString* _contentText;
	NSArray* _authors;

}

@property (nonatomic,copy,readonly) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * objectIdentifier;              //@synthesize objectIdentifier=_objectIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * modificationDate;                //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentText;                   //@synthesize contentText=_contentText - In the implementation block
@property (nonatomic,copy,readonly) NSArray * authors;                        //@synthesize authors=_authors - In the implementation block
-(id)init;
-(NSString *)identifier;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithIdentifier:(id)arg1 objectIdentifier:(id)arg2 modificationDate:(id)arg3 title:(id)arg4 contentText:(id)arg5 authors:(id)arg6 ;
-(id)coreSpotlightAttributeSet;
-(id)coreSpotlightAttributeSetForUserActivity;
-(NSString *)contentText;
-(NSDate *)modificationDate;
-(NSString *)objectIdentifier;
-(NSArray *)authors;
@end

