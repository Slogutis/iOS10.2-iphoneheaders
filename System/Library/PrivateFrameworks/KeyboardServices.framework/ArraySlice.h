/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSArray.h>

@class NSArray;

@interface ArraySlice : NSArray {

	NSArray* _array;
	unsigned long long _offset;
	unsigned long long _count;

}
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)initWithArray:(id)arg1 offset:(unsigned long long)arg2 count:(unsigned long long)arg3 ;
@end
