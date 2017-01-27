/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCacheDelegate.h>

@protocol SKUIResourceLoaderDelegate;
@class SKUIClientContext, NSMutableDictionary, NSMapTable, NSCache, NSOperationQueue, NSString;

@interface SKUIResourceLoader : NSObject <NSCacheDelegate> {

	SKUIClientContext* _clientContext;
	NSMutableDictionary* _operationsByRequestID;
	NSMapTable* _requestsByCacheKey;
	NSCache* _resourcesByRequestID;
	BOOL _inBackground;
	long long _requestCountMap[3];
	NSOperationQueue* _operationQueue;
	id<SKUIResourceLoaderDelegate> _delegate;
	NSString* _name;
	NSOperationQueue* _delegateQueue;

}

@property (nonatomic,retain) NSOperationQueue * delegateQueue;                            //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) SKUIClientContext * clientContext;                         //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * operationQueue;                         //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIResourceLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isIdle,nonatomic,readonly) BOOL idle; 
@property (nonatomic,copy) NSString * name;                                               //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long resourceCacheLimit; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id<SKUIResourceLoaderDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<SKUIResourceLoaderDelegate>)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSOperationQueue *)operationQueue;
-(NSOperationQueue *)delegateQueue;
-(void)setDelegateQueue:(NSOperationQueue *)arg1 ;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(SKUIClientContext *)clientContext;
-(id)initWithClientContext:(id)arg1 ;
-(id)cachedResourceForRequestIdentifier:(unsigned long long)arg1 ;
-(void)enterForeground;
-(void)enterBackground;
-(id)initWithOperationQueue:(id)arg1 clientContext:(id)arg2 ;
-(BOOL)trySetReason:(long long)arg1 forRequestWithIdentifier:(unsigned long long)arg2 ;
-(BOOL)loadResourceWithRequest:(id)arg1 reason:(long long)arg2 ;
-(BOOL)isIdle;
-(BOOL)isIdleForReason:(long long)arg1 ;
-(id)requestIdentifierForCacheKey:(id)arg1 ;
-(void)_sendDidLoadAllForReason:(long long)arg1 ;
-(void)_reprioritizeOperations;
-(long long)_queuePriorityForLoadReason:(long long)arg1 ;
-(void)_updateLoadReason:(long long)arg1 forOperation:(id)arg2 ;
-(long long)_qualityOfService;
-(void)_finishLoadForRequest:(id)arg1 withResource:(id)arg2 ;
-(void)_sendDidBeginLoadingIfNecessary;
-(void)_sendDidIdleIfNecessary;
-(id)initWithOperationQueue:(id)arg1 ;
-(void)addResource:(id)arg1 forRequestIdentifier:(unsigned long long)arg2 ;
-(void)removeAllCachedResources;
-(void)setReason:(long long)arg1 forRequestWithIdentifier:(unsigned long long)arg2 ;
-(long long)resourceCacheLimit;
-(void)setResourceCacheLimit:(long long)arg1 ;
-(void)cancelRequestWithIdentifier:(unsigned long long)arg1 ;
-(void)cancelAllRequests;
@end
