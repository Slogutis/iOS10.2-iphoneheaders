/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/DownloadsTransaction.h>

@interface PurchaseDownloadsTransaction : DownloadsTransaction
-(BOOL)replaceDownloadsInQuery:(id)arg1 withStoreDownloads:(id)arg2 accountID:(id)arg3 ;
-(BOOL)insertPurchases:(id)arg1 afterPurchaseWithIdentifier:(long long)arg2 forClient:(id)arg3 ;
-(BOOL)movePurchasesWithIdentifiers:(id)arg1 afterPurchaseWithIdentifier:(long long)arg2 ;
-(BOOL)addPurchases:(id)arg1 forClient:(id)arg2 ;
-(BOOL)cancelPurchaseWithIdentifier:(long long)arg1 applyingProperties:(id)arg2 ;
-(BOOL)deletePurchaseWithIdentifier:(long long)arg1 ;
-(id)existingDownloadForPurchase:(id)arg1 ;
-(BOOL)setUpdateState:(long long)arg1 forUpdateWithPurchaseIdentifier:(long long)arg2 ;
-(id)replacePurchase:(id)arg1 withDownloadQueueResponse:(id)arg2 withClientIdentifier:(id)arg3 ;
-(double)_maxOrderIdentifier;
-(BOOL)_insertPurchases:(id)arg1 forClient:(id)arg2 orderIdentifier:(double)arg3 orderSpacing:(double)arg4 ;
-(BOOL)_cancelDownloadForPurchaseIdentifier:(long long)arg1 ;
-(void)_getInsertOrderID:(double*)arg1 nextOrderID:(double*)arg2 afterPurchaseID:(long long)arg3 ;
-(void)_divertStoreQueueRequestWithItems:(id)arg1 ;
-(void)_divertSoftwarePurchase:(id)arg1 withDownloadQueueResponse:(id)arg2 withClientIdenfier:(id)arg3 ;
-(long long)_nextBatchIdentifier;
-(id)_addEntityForPurchase:(id)arg1 managerIdentifier:(long long)arg2 orderIdentifier:(double)arg3 ;
-(BOOL)_addPlaceholderDownloadForPurchase:(id)arg1 clientIdentifier:(id)arg2 ;
-(BOOL)resetPurchasedAutoUpdateForStoreItemID:(id)arg1 ;
-(id)replacePurchase:(id)arg1 withDownloadQueueResponse:(id)arg2 ;
@end

