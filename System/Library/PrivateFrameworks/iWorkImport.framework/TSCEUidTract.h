/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSCEUidTract : NSObject <NSCopying> {

	vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >* _columnUids;
	vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >* _rowUids;
	BOOL _isRangeRef;
	unsigned char _purpose;

}

@property (assign,nonatomic) BOOL isRangeRef;                                      //@synthesize isRangeRef=_isRangeRef - In the implementation block
@property (assign,nonatomic) unsigned char purpose;                                //@synthesize purpose=_purpose - In the implementation block
@property (readonly) vector<TSU::UUIDData<TSP::UUIDData>* columnUids;              //@synthesize columnUids=_columnUids - In the implementation block
@property (readonly) vector<TSU::UUIDData<TSP::UUIDData>* rowUids;                 //@synthesize rowUids=_rowUids - In the implementation block
+(void)saveToArchive:(ASTNodeArrayArchive_ASTUidTract*)arg1 columnUids:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg2 rowUids:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg3 isRangeRef:(BOOL)arg4 purpose:(unsigned char)arg5 ;
+(id)stringForPurpose:(unsigned char)arg1 ;
+(BOOL)p_remapUidVector:(vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 usingUidMap:(const UUIDMap<TSP::UUIDMap>*)arg2 clearIfMissing:(BOOL)arg3 ;
-(vector<TSU::UUIDData<TSP::UUIDData>*)columnUids;
-(vector<TSU::UUIDData<TSP::UUIDData>*)rowUids;
-(BOOL)isRangeRef;
-(id)initWithColumnUid:(const UUIDData<TSP::UUIDData>*)arg1 rowUid:(const UUIDData<TSP::UUIDData>*)arg2 purpose:(unsigned char)arg3 ;
-(BOOL)remapUsingUidMap:(const UUIDMap<TSP::UUIDMap>*)arg1 ;
-(id)initWithColumnUids:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 rowUids:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg2 purpose:(unsigned char)arg3 ;
-(void)setIsRangeRef:(BOOL)arg1 ;
-(BOOL)remapUsingColumnUidMap:(const UUIDMap<TSP::UUIDMap>*)arg1 rowUidMap:(const UUIDMap<TSP::UUIDMap>*)arg2 clearIfMissing:(BOOL)arg3 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned char)purpose;
-(void)setPurpose:(unsigned char)arg1 ;
-(void)saveToArchive:(ASTNodeArrayArchive_ASTUidTract*)arg1 ;
-(id)initWithArchive:(const ASTNodeArrayArchive_ASTUidTract*)arg1 ;
@end

