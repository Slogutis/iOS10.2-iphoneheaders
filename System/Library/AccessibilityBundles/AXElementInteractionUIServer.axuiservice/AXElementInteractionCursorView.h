/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:53:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/AXElementInteractionUIServer.axuiservice/AXElementInteractionUIServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXElementInteractionUIServer/AXElementInteractionUIServer-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface AXElementInteractionCursorView : UIView {

	double _cachedAlpha;
	BOOL _isHidden;
	CGPathRef _path;
	UIColor* _backgroundColor;
	CGRect _cursorFrame;

}

@property (assign,nonatomic) BOOL isHidden;                          //@synthesize isHidden=_isHidden - In the implementation block
@property (nonatomic,retain) CGPathRef path;                         //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) CGRect cursorFrame;                     //@synthesize cursorFrame=_cursorFrame - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
+(CGRect)resizeFrameForDisplay:(CGRect)arg1 ;
-(id)_retrieveFrameBezierPath:(CGRect)arg1 ;
-(CGRect)cursorFrame;
-(void)_orderOut;
-(id)_retrievePathBezierPaths;
-(void)setCursorFrame:(CGRect)arg1 ;
-(id)_retrieveBezierPaths:(CGRect)arg1 usingRealPaths:(BOOL*)arg2 ;
-(void)_orderIn;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)dealloc;
-(BOOL)isHidden;
-(CGPathRef)path;
-(double)lineWidth;
-(void)setPath:(CGPathRef)arg1 ;
-(BOOL)userInteractionEnabled;
-(void)setIsHidden:(BOOL)arg1 ;
@end
