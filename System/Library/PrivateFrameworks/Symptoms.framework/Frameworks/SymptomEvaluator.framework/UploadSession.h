/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@protocol UploadSessionDelegate;
@class NSArray, NSURL, NSDictionary, NSURLSession, NSMutableArray, NSMutableDictionary, NSString;

@interface UploadSession : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate> {

	NSArray* _uploadingFilesInfo;
	NSURL* _uploadDestination;
	long long _urgencyFlag;
	NSDictionary* _extraHTTPHeaders;
	NSURLSession* _urlSession;
	NSMutableArray* _uploadSessionTasks;
	NSMutableDictionary* _uploadSessionTaskToFileUploadInfo;
	BOOL _radarAPI;
	id<UploadSessionDelegate> _uploadManager;
	NSString* _identifier;

}

@property (assign,nonatomic,__weak) id<UploadSessionDelegate> uploadManager;              //@synthesize uploadManager=_uploadManager - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL radarAPI;                                               //@synthesize radarAPI=_radarAPI - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSString *)debugDescription;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(id)initWithFilesToUpload:(id)arg1 destination:(id)arg2 urgency:(long long)arg3 additionalHTTPHeaders:(id)arg4 ;
-(void)setUploadManager:(id<UploadSessionDelegate>)arg1 ;
-(void)setRadarAPI:(BOOL)arg1 ;
-(void)prepareUploadSession;
-(void)startUploadSession;
-(id)uploadTaskForFileInfo:(id)arg1 ;
-(id)destinationURLForFile:(id)arg1 ;
-(BOOL)radarAPI;
-(id<UploadSessionDelegate>)uploadManager;
-(BOOL)_allFilesUploaded;
@end
