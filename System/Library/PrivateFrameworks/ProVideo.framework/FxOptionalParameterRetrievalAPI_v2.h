/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FxOptionalParameterRetrievalAPI_v2 <NSObject>
@required
-(BOOL)getHistogramBlackIn:(double*)arg1 BlackOut:(double*)arg2 WhiteIn:(double*)arg3 WhiteOut:(double*)arg4 Gamma:(double*)arg5 forChannel:(unsigned long long)arg6 fromParm:(unsigned)arg7 atFxTime:(/*function pointer*/void**)arg8;
-(BOOL)getGradientSamples:(void*)arg1 numSamples:(unsigned long long)arg2 depth:(unsigned long long)arg3 fromParm:(unsigned)arg4 atFxTime:(/*function pointer*/void**)arg5;

@end
