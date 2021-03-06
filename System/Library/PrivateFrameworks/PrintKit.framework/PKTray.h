/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:40 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PrintKit/PrintKit-Structs.h>
@class NSDictionary, NSString;

@interface PKTray : NSObject {

	NSDictionary* _trayDict;

}

@property (retain) NSDictionary * trayDict;                 //@synthesize trayDict=_trayDict - In the implementation block
@property (readonly) BOOL isEmpty; 
@property (readonly) NSString * name; 
@property (readonly) NSString * localizedName; 
+(id)trayWithString:(id)arg1 andMediaSource:(id)arg2 ;
+(id)traysWithAttrs:(ipp_s*)arg1 ;
+(id)filter:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(BOOL)isEmpty;
-(NSString *)localizedName;
-(id)initWithString:(id)arg1 andMediaSource:(id)arg2 ;
-(void)setTrayDict:(NSDictionary *)arg1 ;
-(NSDictionary *)trayDict;
@end

