/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDResources;

@interface CHDLegendEntry : NSObject {

	unsigned long long mFontIndex;
	unsigned mEntryIndex;
	EDResources* mResources;

}
-(void)dealloc;
-(id)description;
-(void)setFont:(id)arg1 ;
-(id)font;
-(void)setFontIndex:(unsigned long long)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(void)setEntryIndex:(unsigned)arg1 ;
-(unsigned long long)fontIndex;
-(unsigned)entryIndex;
@end

