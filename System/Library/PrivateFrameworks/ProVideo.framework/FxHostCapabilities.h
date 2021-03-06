/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@interface FxHostCapabilities : NSObject {

	FxHostCapabilitiesPriv* _hostCapPriv;

}
-(void)dealloc;
-(unsigned)hostVersionNumber;
-(BOOL)formatsFloatRGBABitmapsAsARGB;
-(BOOL)supportsHiddenParameters;
-(BOOL)supportsDisabledParameters;
-(BOOL)supportsGroupParameters;
-(BOOL)notifiesParameterChangedForGenerators;
-(BOOL)parameterChangedUsableForAllParameters;
-(BOOL)supportsTemporalBitmaps;
-(unsigned long long)timeBase;
-(id)glContextPixelFormatAttributes;
-(BOOL)hostIsFCP;
-(BOOL)hostIsFCE;
-(id)hostID;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)hostIsMotion;
-(BOOL)upscalesFields;
@end

