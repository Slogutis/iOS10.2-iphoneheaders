/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFOutgoingMessageContent.h>

@class MFPlainTextDocument, NSArray;

@interface MFOutgoingRichtextMessageContent : MFOutgoingMessageContent {

	BOOL _textPartsAreHTML;
	MFPlainTextDocument* _plaintextAlternative;
	NSArray* _mixedContent;

}

@property (assign,nonatomic) BOOL textPartsAreHTML;                                   //@synthesize textPartsAreHTML=_textPartsAreHTML - In the implementation block
@property (nonatomic,retain) MFPlainTextDocument * plaintextAlternative;              //@synthesize plaintextAlternative=_plaintextAlternative - In the implementation block
@property (nonatomic,retain) NSArray * mixedContent;                                  //@synthesize mixedContent=_mixedContent - In the implementation block
-(void)dealloc;
-(id)copy;
-(id)richtextContent;
-(void)setPlaintextAlternative:(MFPlainTextDocument *)arg1 ;
-(void)setMixedContent:(NSArray *)arg1 ;
-(BOOL)textPartsAreHTML;
-(void)setTextPartsAreHTML:(BOOL)arg1 ;
-(MFPlainTextDocument *)plaintextAlternative;
-(NSArray *)mixedContent;
@end

