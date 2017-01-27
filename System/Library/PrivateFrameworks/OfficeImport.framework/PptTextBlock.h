/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableString, NSMutableArray;

@interface PptTextBlock : NSObject {

	PptTextHeaderAtom* mTextHeader;
	NSMutableString* mText;
	PptTextBlockStylingAtom* mStyleText;
	PptTextBlockSpecialInfoAtom* mSpecialInfo;
	NSMutableArray* mMetaCharacterFields;
	NSMutableArray* mBookmarks;
	NSMutableArray* mHyperlinks;
	PptTextRulerAtom* mTextRuler;

}
-(id)init;
-(void)dealloc;
-(id)text;
-(unsigned)textIndex;
-(id)hyperlinks;
-(int)textType;
-(void)readTextBlock:(id)arg1 ;
-(PptTextRulerAtom*)textRuler;
-(int)paragraphRunCount;
-(PptParaRun*)paragraphRunAtIndex:(int)arg1 ;
-(int)characterRunCount;
-(PptCharRun*)characterRunAtIndex:(int)arg1 ;
-(int)specialInfoRunCount;
-(PptSpecialInfoRun*)specialInfoRunAtIndex:(int)arg1 ;
-(id)metaCharacterFields;
-(void)readString:(id)arg1 ;
-(void)readStyles:(id)arg1 ;
-(void)readSpecialInfo:(id)arg1 ;
-(void)readMetaCharacterFieldsBookmarksAndHyperlinks:(id)arg1 ;
-(void)writeTextBlock:(id)arg1 ;
-(id)bookmarks;
@end
