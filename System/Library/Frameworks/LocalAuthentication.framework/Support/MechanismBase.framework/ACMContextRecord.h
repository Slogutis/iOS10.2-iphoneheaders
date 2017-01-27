/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismBase.framework/MechanismBase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LAContextExternalizationProt;
#import <MechanismBase/MechanismBase-Structs.h>
@interface ACMContextRecord : NSObject {

	unsigned _passphrasePurpose;
	ACMHandleRef _context;
	id<LAContextExternalizationProt> _cachedExternalizationDelegate;
	unsigned long long _flags;

}

@property (nonatomic,readonly) ACMHandleRef context;                                                               //@synthesize context=_context - In the implementation block
@property (nonatomic,__weak,readonly) id<LAContextExternalizationProt> cachedExternalizationDelegate;              //@synthesize cachedExternalizationDelegate=_cachedExternalizationDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long flags;                                                             //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) unsigned passphrasePurpose;                                                           //@synthesize passphrasePurpose=_passphrasePurpose - In the implementation block
-(ACMHandleRef)context;
-(void)setFlags:(unsigned long long)arg1 ;
-(unsigned long long)flags;
-(id<LAContextExternalizationProt>)cachedExternalizationDelegate;
-(id)initWithACMContext:(ACMHandleRef)arg1 cachedExternalizationDelegate:(id)arg2 ;
-(unsigned)passphrasePurpose;
-(void)setPassphrasePurpose:(unsigned)arg1 ;
@end
