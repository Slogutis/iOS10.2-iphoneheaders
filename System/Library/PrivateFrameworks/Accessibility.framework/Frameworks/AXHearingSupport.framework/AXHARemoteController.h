/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AXIDCRemoteController.h>
#import <AXHearingSupport/AXHARemoteControllerProtocol.h>

@class AXHADispatchTimer, NSString;

@interface AXHARemoteController : AXIDCRemoteController <AXHARemoteControllerProtocol> {

	BOOL didValidateHIID;
	AXHADispatchTimer* _communicationTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL didValidateHIID; 
@property (nonatomic,retain) AXHADispatchTimer * communicationTimer;              //@synthesize communicationTimer=_communicationTimer - In the implementation block
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(void)closeConnectionWithError:(id)arg1 ;
-(BOOL)sendObject:(id)arg1 withSendCompletion:(/*^block*/id)arg2 ;
-(void)acceptConnection:(int)arg1 ;
-(void)receivedData:(id)arg1 ;
-(void)didCommunicate;
-(void)sendDataChunk;
-(BOOL)outputStreamReady;
-(void)setCommunicationTimer:(AXHADispatchTimer *)arg1 ;
-(void)setDidValidateHIID:(BOOL)arg1 ;
-(AXHADispatchTimer *)communicationTimer;
-(BOOL)didValidateHIID;
-(void)validatePairedAid;
@end
