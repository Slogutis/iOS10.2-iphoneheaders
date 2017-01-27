/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/IMTranscoding.framework/IMTranscoding
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface IMTranscodeController : NSObject {

	NSObject*<OS_xpc_object> _connection;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_disconnected;
-(void)transcodeLocalTransferPayloadData:(id)arg1 balloonBundleID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 maxDimension:(unsigned long long)arg6 transcoderUserInfo:(id)arg7 representations:(long long)arg8 retries:(int)arg9 completionBlock:(/*^block*/id)arg10 ;
-(void)_transcodeFileTransferPayloadData:(id)arg1 balloonBundleID:(id)arg2 attachments:(id)arg3 retries:(unsigned long long)arg4 fallBack:(BOOL)arg5 completionBlock:(/*^block*/id)arg6 ;
-(BOOL)_connect;
-(void)transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 maxDimension:(unsigned long long)arg6 transcoderUserInfo:(id)arg7 representations:(long long)arg8 completionBlock:(/*^block*/id)arg9 ;
-(void)transcodeFallbackFileTransferPayloadData:(id)arg1 balloonBundleID:(id)arg2 attachments:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
@end
