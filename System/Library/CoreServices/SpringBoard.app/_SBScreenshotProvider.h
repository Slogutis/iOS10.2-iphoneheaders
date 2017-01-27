/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIScreen, SBScreenFlash;


@protocol _SBScreenshotProvider <NSObject>
@property (nonatomic,readonly) UIScreen * screen; 
@property (nonatomic,readonly) SBScreenFlash * flasher; 
@required
-(id)captureScreenshot;
-(SBScreenFlash *)flasher;
-(UIScreen *)screen;

@end
