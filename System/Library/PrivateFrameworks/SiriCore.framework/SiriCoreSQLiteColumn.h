/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol SiriCoreSQLiteColumn <NSObject>
@property (nonatomic,readonly) long long identifier; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * type; 
@property (nonatomic,readonly) BOOL isPrimaryKey; 
@property (nonatomic,readonly) BOOL isNotNull; 
@property (nonatomic,copy,readonly) id<SiriCoreSQLiteValue> defaultValue; 
@required
-(NSString *)name;
-(long long)identifier;
-(NSString *)type;
-(id<SiriCoreSQLiteValue>)defaultValue;
-(BOOL)isPrimaryKey;
-(BOOL)isNotNull;

@end

