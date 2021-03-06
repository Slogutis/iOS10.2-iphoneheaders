/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCMediaStreamProtocol.h>
#import <libobjc.A.dylib/WRMClientDelegate.h>
#import <libobjc.A.dylib/VCAudioIOClient.h>
#import <libobjc.A.dylib/VCMediaStreamSyncSource.h>

@protocol OS_dispatch_source, OS_dispatch_queue, VCMediaStreamDelegate, VCMediaStreamSyncSourceDelegate;
@class NSObject, NSMutableArray, DTMFEventHandler, WRMClient, VCAudioPayload, VCAudioTransmitter, VCPacketBundler, NSString, AVCMediaStreamConfig;

@interface VCAudioStream : NSObject <VCMediaStreamProtocol, WRMClientDelegate, VCAudioIOClient, VCMediaStreamSyncSource> {

	int numBufferBytesAvailable;
	NSObject*<OS_dispatch_source> pausedAudioHeartBeat;
	double dAudioHostTime;
	double _rtpTimeoutEnabledTime;
	double _rtcpTimeoutEnabledTime;
	BOOL lastVoiceActive;
	double lastRTPTimeoutReportTime;
	double lastRTCPTimeoutReportTime;
	tagHANDLE* rtpHandle;
	unsigned conferenceID;
	unsigned lastInputAudioTimeStamp;
	unsigned lastSentAudioSampleTime;
	unsigned packetTimeoutCheckCounter;
	unsigned awdTime;
	long long sampleRate;
	long long samplesPerFrame;
	opaque_pthread_rwlock_t stateLock;
	opaque_pthread_mutex_t sessionLock;
	NSMutableArray* audioPayloads;
	AudioStreamBasicDescription vpioFormat;
	int preferredAudioCodec;
	DTMFEventHandler* dtmfEventHandler;
	WRMClient* wrmClient;
	VCAudioPayload* currentAudioPayload;
	VCAudioPayload* currentDTXPayload;
	char* lastInputSampleBuffer;
	BOOL lastIsTalking;
	tagVCAudioReceiver* _audioReceiver;
	VCAudioTransmitter* audioTransmitter;
	VCPacketBundler* audioBundler;
	NSString* callID;
	opaqueRTCReportingRef reportingAgent;
	METER_INFO soundMeter[2];
	NSObject*<OS_dispatch_queue> delegateNotificationQueue;
	int state;
	BOOL isSRTPInitialized;
	BOOL isValid;
	int deviceRole;
	int operatingMode;
	AVCMediaStreamConfig* streamConfig;
	NSObject*<VCMediaStreamDelegate> delegate;
	NSObject*<VCMediaStreamSyncSourceDelegate> syncSourceDelegate;
	tagWRMMetricsInfo* wrmInfo;
	unsigned datagramChannelToken;

}

@property (assign,nonatomic) int state; 
@property (assign,nonatomic) NSObject*<VCMediaStreamDelegate> delegate; 
@property (assign,nonatomic) NSObject*<VCMediaStreamSyncSourceDelegate> syncSourceDelegate; 
@property (readonly) unsigned conferenceID; 
@property (assign,nonatomic) BOOL isValid; 
@property (assign,nonatomic) int deviceRole; 
@property (assign,nonatomic) int operatingMode; 
@property (nonatomic,retain) AVCMediaStreamConfig * streamConfig; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSameSRTPKey:(id)arg1 newKey:(id)arg2 ;
+(id)supportedAudioPayloads;
+(id)capabilities;
-(id)init;
-(void)setDelegate:(NSObject*<VCMediaStreamDelegate>)arg1 ;
-(void)dealloc;
-(NSObject*<VCMediaStreamDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(BOOL)isValid;
-(void)stop;
-(void)lock;
-(void)unlock;
-(void)start;
-(void)setOperatingMode:(int)arg1 ;
-(int)operatingMode;
-(void)stateExit;
-(void)stateEnter;
-(unsigned)computePacketTimestampWithInputTimestamp:(unsigned)arg1 numSamples:(int)arg2 hostTime:(double)arg3 ;
-(int)encodeAudio:(void*)arg1 numInputBytes:(int)arg2 outputBytes:(void*)arg3 numOutputBytes:(int)arg4 withPayload:(int*)arg5 isTalking:(BOOL)arg6 ;
-(int)bundleAndSendSamples:(char*)arg1 numEncodedBytes:(int)arg2 withPayload:(int)arg3 timeStamp:(unsigned)arg4 voiceActivity:(BOOL)arg5 ;
-(void)checkPacketTimeouts;
-(void)setInputTimestamp:(unsigned)arg1 packetTimestamp:(int)arg2 hostTime:(double)arg3 ;
-(AVCMediaStreamConfig *)streamConfig;
-(NSObject*<VCMediaStreamSyncSourceDelegate>)syncSourceDelegate;
-(BOOL)setupAudioEncoders;
-(unsigned)maximumPayloadSize;
-(BOOL)allocateLastInputSampleBuffer;
-(unsigned)codecTypeFromAudioPayload:(int)arg1 ;
-(int)deviceRole;
-(int)sendSamples:(char*)arg1 numEncodedBytes:(int)arg2 withPayload:(int)arg3 timeStamp:(unsigned)arg4 voiceActivity:(BOOL)arg5 ;
-(BOOL)setupAudioCodecWithPayload:(int)arg1 ;
-(unsigned)AMRModeToBitrate:(long long)arg1 ;
-(id)addAudioPayload:(int)arg1 ;
-(unsigned)preferredAudioBitrate;
-(void)setupSpecialPayload:(id)arg1 ;
-(int)getSRTPMasterKeyLength:(long long)arg1 ;
-(int)getCryptoSet:(tagSRTPExchangeInfo*)arg1 withMasterKey:(id)arg2 ;
-(int)SRTPCipherSuiteForLTECipherSuite:(long long)arg1 ;
-(char*)streamStateToString:(int)arg1 ;
-(void)initializeWRM;
-(void)setFrequencyMeteringEnabled:(BOOL)arg1 meterType:(int)arg2 ;
-(void)uninitializeWRM;
-(id)setupRTPWithSockets:(id)arg1 error:(id*)arg2 ;
-(id)setupRTPWithLocalParticipantInfo:(id)arg1 error:(id*)arg2 ;
-(id)setupRTPWithIDSDestination:(id)arg1 error:(id*)arg2 ;
-(id)setupRTPWithIPInfo:(id)arg1 error:(id*)arg2 ;
-(BOOL)isSameSRTPConfig:(id)arg1 ;
-(void)setStreamConfig:(AVCMediaStreamConfig *)arg1 ;
-(void)setDeviceRole:(int)arg1 ;
-(void)setupRTPPayloads;
-(int)setupSRTP;
-(BOOL)configureAudioStreamWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(BOOL)choosePayload:(int*)arg1 count:(int)arg2 ;
-(BOOL)setRTPPayloads:(int*)arg1 numPayloads:(int)arg2 withError:(id*)arg3 ;
-(BOOL)setMediaQueueStreamSettings;
-(void)registerAMRModeChangeNotifications;
-(void)startWRM;
-(void)stopWRM;
-(void)prepareAudio;
-(void)cleanupAudio;
-(void)startAudioWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stopPausedHeartbeat;
-(void)stopAudioWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startPausedHeartbeat;
-(int)captureMeshMode:(char*)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned)arg4 bufferedSamples:(int)arg5 hostTime:(double)arg6 voiceActivity:(BOOL)arg7 ;
-(void)updateSoundMeter:(int)arg1 samples:(char*)arg2 numSamples:(int)arg3 averagePower:(float)arg4 voiceActivity:(unsigned)arg5 ;
-(void)pullDecodedMeshMode:(char*)arg1 timestamp:(unsigned)arg2 numBytes:(int)arg3 numSamples:(int)arg4 ;
-(void)setIsValid:(BOOL)arg1 ;
-(BOOL)setStreamConfig:(id)arg1 withError:(id*)arg2 ;
-(void)setPause:(BOOL)arg1 ;
-(id)setLocalParticipantInfo:(id)arg1 networkSockets:(id)arg2 withError:(id*)arg3 ;
-(void)setStreamDirection:(long long)arg1 ;
-(long long)streamDirection;
-(void)setWRMMetricConfig:(SCD_Struct_VC24*)arg1 ;
-(void)setWRMNotification:(SCD_Struct_VC25*)arg1 ;
-(BOOL)onCaptureSound:(char*)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned)arg4 timeStampDelta:(int)arg5 bufferedSamples:(int)arg6 hostTime:(double)arg7 averagePower:(float)arg8 voiceActivity:(unsigned)arg9 ;
-(BOOL)onPlaySound:(char*)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned)arg4 averagePower:(float)arg5 ;
-(BOOL)canProcessAudio;
-(void)setCanProcessAudio:(BOOL)arg1 ;
-(void)setSyncSourceDelegate:(NSObject*<VCMediaStreamSyncSourceDelegate>)arg1 ;
-(long long)getSyncSourceSampleRate;
-(void)generateWRMReport;
-(void)reportRTCPPackets:(tagRTCPPACKET*)arg1 withCount:(int)arg2 ;
-(BOOL)isFrequencyMeteringEnabled:(int)arg1 ;
-(void)sendDTMFEvent:(id)arg1 ;
-(void)stopSendDTMFEvent;
-(void)reportWRMMetrics:(const SCD_Struct_VC30*)arg1 ;
-(void)unregisterAMRModeChangeNotifications;
-(void)handleAMRCodecModeChange:(unsigned char)arg1 ;
-(unsigned)conferenceID;
-(void)setRtcpEnabled:(BOOL)arg1 ;
-(void)setRtpTimeOutEnabled:(BOOL)arg1 ;
-(void)setRtcpTimeOutEnabled:(BOOL)arg1 ;
-(void)setRtcpSendInterval:(double)arg1 ;
-(void)setRtcpTimeOutInterval:(double)arg1 ;
-(void)setRtpTimeOutInterval:(double)arg1 ;
@end

