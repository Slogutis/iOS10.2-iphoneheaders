/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:36:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FTMessageDelivery;

@interface StickerRefreshDeliveryController : NSObject {

	FTMessageDelivery* _messageDelivery;

}

@property (nonatomic,retain) FTMessageDelivery * messageDelivery;              //@synthesize messageDelivery=_messageDelivery - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)sendFTMessage:(id)arg1 attempts:(unsigned long long)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_sendFTMessage:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(FTMessageDelivery *)messageDelivery;
-(void)setMessageDelivery:(FTMessageDelivery *)arg1 ;
@end

