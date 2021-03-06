/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PASampling/PASampling-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSMutableArray, PAGenealogyTracker, PAMountStatusTracker, PAWSUpdateDataStore, NSMutableSet, PABinaryLocator, PASymbolDataStore, NSString, PASampleTimeInsensitiveTaskData, PAImageInfo, NSArray;

@interface PASampleTimeSeriesDataStore : NSObject <NSSecureCoding> {

	NSMutableDictionary* _timeInsensitiveTaskDataDict;
	NSMutableArray* _timeSensitiveSampleDataArray;
	double _startMachTimestamp;
	double _endMachTimestamp;
	double _startWallTimestamp;
	double _endWallTimestamp;
	BOOL _sanitizePaths;
	BOOL _omitThirdPartyProcessStacks;
	BOOL _omitSensitiveStrings;
	NSMutableArray* _fanSpeedArray;
	PAGenealogyTracker* _genealogyTracker;
	PAMountStatusTracker* _mountStatusTracker;
	PAWSUpdateDataStore* _wsDataStore;
	NSMutableSet* _rootKernelFrames;
	PABinaryLocator* _binaryLocator;
	PASymbolDataStore* _symbolDataStore;
	BOOL _usingDsymForUUIDForEverything;
	NSMutableArray* _namesForDsymForUUID;
	NSMutableArray* _numsForDsymForUUID;
	NSMutableDictionary* _symbolHandleCache;
	NSMutableDictionary* _oldSymbolHandleCache;
	NSMutableSet* _pidsToTrack;
	unsigned long long _dataSource;
	NSString* _reason;
	BOOL _expectsLiveProcesses;
	BOOL _shouldPreemptivelyCacheSymbolicators;
	BOOL _shouldSymbolicate;
	BOOL _sampleOnlyMainThreads;
	BOOL _shouldGatherKextStat;
	double _timeWhenTransitionedToSamplingAllProcesses;
	int _targetProcessId;
	PASampleTimeInsensitiveTaskData* _targetTask;
	unsigned long long _targetThreadId;
	unsigned _cpuPercent;
	unsigned _cpuDuration;
	unsigned _wakeupsPerSec;
	unsigned _wakeupsDuration;
	NSString* _event;
	NSString* _eventNote;
	NSString* _signature;
	double _extraDuration;
	NSString* _durationNote;
	NSString* _stepsNote;
	double _attemptedSamplingInterval;
	NSString* _kextStat;
	NSString* _kernelVersion;
	NSString* _osProductName;
	NSString* _osProductVersion;
	NSString* _osBuildVersion;
	NSString* _machineArchitecture;
	unsigned _workQueueSoftThreadLimit;
	unsigned _workQueueHardThreadLimit;
	NSString* _hardwareModel;
	unsigned _numActiveCPUs;
	NSString* _targetProcessBundleVersion;
	NSString* _targetProcessBundleShortVersion;
	NSString* _targetProcessBundleBuildVersion;
	NSString* _targetProcessBundleProjectName;
	NSString* _targetProcessBundleSourceVersion;
	NSString* _targetProcessBundleProductBuildVersion;
	NSString* _targetProcessCommerceAppID;
	NSString* _targetProcessCommerceExternalID;
	unsigned long long _previousSampleTimestamp;
	unsigned _previousStackshotBufferSize;
	mach_timebase_info _machTimebase;
	CSArchitecture _arch;

}

@property (readonly) unsigned long long dataSource;                                  //@synthesize dataSource=_dataSource - In the implementation block
@property (copy) NSString * reason;                                                  //@synthesize reason=_reason - In the implementation block
@property (readonly) PAImageInfo * kernelCache; 
@property (readonly) double startMachTimestamp;                                      //@synthesize startMachTimestamp=_startMachTimestamp - In the implementation block
@property (readonly) double endMachTimestamp;                                        //@synthesize endMachTimestamp=_endMachTimestamp - In the implementation block
@property (readonly) double startWallTimestamp;                                      //@synthesize startWallTimestamp=_startWallTimestamp - In the implementation block
@property (readonly) double endWallTimestamp;                                        //@synthesize endWallTimestamp=_endWallTimestamp - In the implementation block
@property (readonly) unsigned long long numSamples; 
@property (readonly) NSArray * samples;                                              //@synthesize timeSensitiveSampleDataArray=_timeSensitiveSampleDataArray - In the implementation block
@property (readonly) PAMountStatusTracker * mountStatusTracker;                      //@synthesize mountStatusTracker=_mountStatusTracker - In the implementation block
@property (readonly) PAGenealogyTracker * genealogyTracker;                          //@synthesize genealogyTracker=_genealogyTracker - In the implementation block
@property (assign) BOOL expectsLiveProcesses;                                        //@synthesize expectsLiveProcesses=_expectsLiveProcesses - In the implementation block
@property (assign) BOOL shouldPreemptivelyCacheSymbolicators;                        //@synthesize shouldPreemptivelyCacheSymbolicators=_shouldPreemptivelyCacheSymbolicators - In the implementation block
@property (assign) BOOL shouldSymbolicate; 
@property (assign) BOOL shouldUseDsymForUUIDToFindBinaries; 
@property (assign) BOOL sampleOnlyMainThreads;                                       //@synthesize sampleOnlyMainThreads=_sampleOnlyMainThreads - In the implementation block
@property (assign) double timeWhenTransitionedToSamplingAllProcesses;                //@synthesize timeWhenTransitionedToSamplingAllProcesses=_timeWhenTransitionedToSamplingAllProcesses - In the implementation block
@property (assign) BOOL sanitizePaths;                                               //@synthesize sanitizePaths=_sanitizePaths - In the implementation block
@property (assign) BOOL omitThirdPartyProcessStacks;                                 //@synthesize omitThirdPartyProcessStacks=_omitThirdPartyProcessStacks - In the implementation block
@property (assign) BOOL omitSensitiveStrings;                                        //@synthesize omitSensitiveStrings=_omitSensitiveStrings - In the implementation block
@property (assign) BOOL shouldGatherKextStat;                                        //@synthesize shouldGatherKextStat=_shouldGatherKextStat - In the implementation block
@property (copy,readonly) NSString * kextStat;                                       //@synthesize kextStat=_kextStat - In the implementation block
@property (readonly) NSString * kernelVersion;                                       //@synthesize kernelVersion=_kernelVersion - In the implementation block
@property (copy) NSString * osProductName;                                           //@synthesize osProductName=_osProductName - In the implementation block
@property (copy) NSString * osProductVersion;                                        //@synthesize osProductVersion=_osProductVersion - In the implementation block
@property (copy) NSString * osBuildVersion;                                          //@synthesize osBuildVersion=_osBuildVersion - In the implementation block
@property (copy) NSString * machineArchitecture;                                     //@synthesize machineArchitecture=_machineArchitecture - In the implementation block
@property (readonly) unsigned workQueueSoftThreadLimit;                              //@synthesize workQueueSoftThreadLimit=_workQueueSoftThreadLimit - In the implementation block
@property (readonly) unsigned workQueueHardThreadLimit;                              //@synthesize workQueueHardThreadLimit=_workQueueHardThreadLimit - In the implementation block
@property (copy) NSString * hardwareModel;                                           //@synthesize hardwareModel=_hardwareModel - In the implementation block
@property (assign) unsigned numActiveCPUs;                                           //@synthesize numActiveCPUs=_numActiveCPUs - In the implementation block
@property (assign) int targetProcessId;                                              //@synthesize targetProcessId=_targetProcessId - In the implementation block
@property (assign) unsigned long long targetThreadId;                                //@synthesize targetThreadId=_targetThreadId - In the implementation block
@property (assign) unsigned cpuPercent;                                              //@synthesize cpuPercent=_cpuPercent - In the implementation block
@property (assign) unsigned cpuDuration;                                             //@synthesize cpuDuration=_cpuDuration - In the implementation block
@property (assign) unsigned wakeupsPerSec;                                           //@synthesize wakeupsPerSec=_wakeupsPerSec - In the implementation block
@property (assign) unsigned wakeupsDuration;                                         //@synthesize wakeupsDuration=_wakeupsDuration - In the implementation block
@property (copy) NSString * event;                                                   //@synthesize event=_event - In the implementation block
@property (copy) NSString * eventNote;                                               //@synthesize eventNote=_eventNote - In the implementation block
@property (copy) NSString * signature;                                               //@synthesize signature=_signature - In the implementation block
@property (assign) double extraDuration;                                             //@synthesize extraDuration=_extraDuration - In the implementation block
@property (copy) NSString * durationNote;                                            //@synthesize durationNote=_durationNote - In the implementation block
@property (copy) NSString * stepsNote;                                               //@synthesize stepsNote=_stepsNote - In the implementation block
@property (assign) double attemptedSamplingInterval;                                 //@synthesize attemptedSamplingInterval=_attemptedSamplingInterval - In the implementation block
@property (readonly) NSString * targetProcessName; 
@property (readonly) NSString * targetProcessAbsolutePath; 
@property (readonly) NSString * targetProcessBundleName; 
@property (readonly) NSString * targetProcessBundleVersion;                          //@synthesize targetProcessBundleVersion=_targetProcessBundleVersion - In the implementation block
@property (readonly) NSString * targetProcessBundleShortVersion;                     //@synthesize targetProcessBundleShortVersion=_targetProcessBundleShortVersion - In the implementation block
@property (readonly) NSString * targetProcessBundleBuildVersion;                     //@synthesize targetProcessBundleBuildVersion=_targetProcessBundleBuildVersion - In the implementation block
@property (readonly) NSString * targetProcessBundleProjectName;                      //@synthesize targetProcessBundleProjectName=_targetProcessBundleProjectName - In the implementation block
@property (readonly) NSString * targetProcessBundleSourceVersion;                    //@synthesize targetProcessBundleSourceVersion=_targetProcessBundleSourceVersion - In the implementation block
@property (readonly) NSString * targetProcessBundleProductBuildVersion;              //@synthesize targetProcessBundleProductBuildVersion=_targetProcessBundleProductBuildVersion - In the implementation block
@property (readonly) NSString * targetProcessCommerceAppID;                          //@synthesize targetProcessCommerceAppID=_targetProcessCommerceAppID - In the implementation block
@property (readonly) NSString * targetProcessCommerceExternalID;                     //@synthesize targetProcessCommerceExternalID=_targetProcessCommerceExternalID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)dataSource;
-(NSString *)event;
-(void)setEvent:(NSString *)arg1 ;
-(NSString *)reason;
-(NSArray *)samples;
-(NSString *)hardwareModel;
-(void)setHardwareModel:(NSString *)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(void)setSignature:(NSString *)arg1 ;
-(NSString *)signature;
-(id)symbolHandleForAddress:(unsigned long long)arg1 inLivingPid:(int)arg2 ;
-(void)addDSCSymFromBuffer:(const void*)arg1 withLength:(unsigned long long)arg2 ;
-(void)addDsymPaths:(id)arg1 ;
-(void)addSymbolsFromTailspin:(id)arg1 ;
-(BOOL)shouldSymbolicate;
-(void)setShouldSymbolicate:(BOOL)arg1 ;
-(BOOL)shouldUseDsymForUUIDToFindBinaries;
-(void)setShouldUseDsymForUUIDToFindBinaries:(BOOL)arg1 ;
-(PAImageInfo *)kernelCache;
-(void)_asynchronouslyCacheSymbolicatorForPid:(int)arg1 ;
-(id)timeInsensitiveTaskDataPid:(int)arg1 andUniqueId:(unsigned long long)arg2 andName:(const char*)arg3 didExec:(BOOL)arg4 ;
-(id)getMissingSampleTaskInCurrentSampleForPid:(int)arg1 andTaskName:(const char*)arg2 didExecSinceLastSample:(BOOL)arg3 needNewTaskForThisSample:(BOOL)arg4 ;
-(id)getMissingSampleThreadInCurrentSampleInTask:(id)arg1 forTid:(unsigned long long)arg2 needNewThreadForThisSample:(BOOL)arg3 ;
-(id)addKernelStack:(id)arg1 ;
-(mach_timebase_info)machTimebase;
-(CSArchitecture)arch;
-(id)timeInsensitiveTaskDataForKCDataStackshotTask:(const task_snapshot_v2*)arg1 withLoadInfos:(const dyld_uuid_info_64*)arg2 numLoadInfos:(unsigned)arg3 andMachineArchitecture:(CSArchitecture)arg4 ;
-(void)backfillKPerfTaskWithDataFromKCDataTask:(const task_snapshot_v2*)arg1 ;
-(void)backfillKPerfThreadWithDataFromKCDataThread:(const thread_snapshot_v2*)arg1 inPid:(int)arg2 withLeafUserFrame:(id)arg3 andLeafKernelFrame:(id)arg4 andName:(const char*)arg5 taskIsSuspended:(BOOL)arg6 ;
-(void)setMachTimebase:(mach_timebase_info)arg1 ;
-(void)setArch:(CSArchitecture)arg1 ;
-(int)addKPerfDataFromKTraceSession:(ktrace_sessionRef)arg1 beforeTime:(unsigned long long)arg2 ;
-(unsigned long long)useKCDataStackshotAsLastKPerSampleFromBuffer:(const void*)arg1 withLength:(unsigned long long)arg2 ;
-(void)cacheSymbolInformationForAllSymbols;
-(NSString *)osProductName;
-(NSString *)osProductVersion;
-(NSString *)osBuildVersion;
-(NSString *)machineArchitecture;
-(BOOL)sanitizePaths;
-(id)symbolHandleForAddress:(unsigned long long)arg1 inSampleTask:(id)arg2 ;
-(NSString *)kernelVersion;
-(unsigned)workQueueSoftThreadLimit;
-(unsigned)workQueueHardThreadLimit;
-(PAGenealogyTracker *)genealogyTracker;
-(BOOL)omitThirdPartyProcessStacks;
-(int)targetProcessId;
-(void)flushCachedSymbolicatorForTask:(id)arg1 ;
-(unsigned long long)numSamples;
-(double)attemptedSamplingInterval;
-(PAMountStatusTracker *)mountStatusTracker;
-(id)symbolHandleForOffset:(unsigned long long)arg1 inBinaryWithUUID:(id)arg2 inSampleTask:(id)arg3 ;
-(id)newArrayOfSamplesForSampleIndexRangeStart:(unsigned long long)arg1 end:(unsigned long long)arg2 ;
-(BOOL)hasSampleOnOrAfterTime:(double)arg1 returningFirstIndex:(unsigned long long*)arg2 ;
-(id)newArrayOfSamplesForTimeRangeWithMachStartTime:(double)arg1 andEndTime:(double)arg2 ;
-(double)timeWhenTransitionedToSamplingAllProcesses;
-(NSString *)targetProcessBundleShortVersion;
-(NSString *)targetProcessBundleVersion;
-(NSString *)targetProcessBundleBuildVersion;
-(NSString *)targetProcessBundleProductBuildVersion;
-(NSString *)targetProcessBundleProjectName;
-(NSString *)targetProcessBundleSourceVersion;
-(NSString *)targetProcessCommerceAppID;
-(NSString *)targetProcessCommerceExternalID;
-(NSString *)eventNote;
-(unsigned long long)targetThreadId;
-(unsigned)cpuPercent;
-(unsigned)cpuDuration;
-(unsigned)wakeupsPerSec;
-(unsigned)wakeupsDuration;
-(double)extraDuration;
-(NSString *)durationNote;
-(NSString *)stepsNote;
-(unsigned)numActiveCPUs;
-(id)fanSpeedClosestToMachTime:(double)arg1 ;
-(NSString *)kextStat;
-(void)printFrameRateReportWithStartSampleIndex:(unsigned long long)arg1 andEndIndex:(unsigned long long)arg2 andStartDisplayIndex:(unsigned long long)arg3 toStream:(id)arg4 ;
-(id)newArrayOfSamplesForTimeRangeWithWallClockStartTime:(double)arg1 andEndTime:(double)arg2 ;
-(id)copyImageInfosForPid:(int)arg1 ;
-(id)targetTask;
-(void)gatherKextStat;
-(void)gatherKernelVersion;
-(void)gatherOsVersions;
-(void)gatherMachineArchitecture;
-(void)gatherWorkQueueSoftThreadLimit;
-(void)gatherWorkQueueHardThreadLimit;
-(void)gatherHardwareModel;
-(void)gatherNumActiveCPUs;
-(unsigned long long)_addKCDataStackshotFromBuffer:(const void*)arg1 withLength:(unsigned long long)arg2 toSample:(id)arg3 shouldSkipSampleOut:(BOOL*)arg4 ;
-(void)_addSampleToSampleArray:(id)arg1 ;
-(id)timeInsensitiveTaskDataForKCDataStackshotDeltaTask:(const task_delta_snapshot_v2*)arg1 withLoadInfos:(const dyld_uuid_info_64*)arg2 numLoadInfos:(unsigned)arg3 andMachineArchitecture:(CSArchitecture)arg4 ;
-(BOOL)addKCDataThread:(const thread_snapshot_v2*)arg1 orDeltaThread:(const thread_delta_snapshot_v2*)arg2 withStack:(id)arg3 andName:(const char*)arg4 toTask:(id)arg5 withCurrentThreads:(id)arg6 withPreviousThreads:(id)arg7 ;
-(id)timeInsensitiveTaskDataForUniqueId:(unsigned long long)arg1 ;
-(BOOL)_addStackshot:(id)arg1 ;
-(id)timeInsensitiveTaskDataForStackshotTask:(id)arg1 andMachineArchitecture:(CSArchitecture)arg2 ;
-(void)useDsymForUUIDFor:(id)arg1 ;
-(NSString *)targetProcessName;
-(NSString *)targetProcessAbsolutePath;
-(NSString *)targetProcessBundleName;
-(void)gatherOccasionalLiveDataForMachTime:(double)arg1 ;
-(void)startingSamplingLiveSystem;
-(void)doneSamplingLiveSystem;
-(void)gatherNonTimeCriticalDataFromLiveSystem;
-(id)cachedSymbolHandleForAddress:(unsigned long long)arg1 inPid:(int)arg2 ;
-(void)flushAllSymbolicators;
-(void)flushAllCachedSymbolInformation;
-(void)setDSCSymDir:(id)arg1 ;
-(void)addProcessInfoFromTailspin:(id)arg1 ;
-(unsigned long long)addKCDataStackshots:(id)arg1 createSeparateSamplePerStackshot:(BOOL)arg2 ;
-(unsigned long long)addKCDataStackshotFromBuffer:(const void*)arg1 withLength:(unsigned long long)arg2 ;
-(unsigned long long)addStackshots:(id)arg1 ;
-(void)addStackshot:(id)arg1 ;
-(void)addPidToSampledPids:(int)arg1 ;
-(void)addPidsWithNameToSampledPids:(id)arg1 ;
-(void)sampleTrackedPidsNow;
-(void)setMachineArchitecture:(NSString *)arg1 ;
-(double)startMachTimestamp;
-(double)endMachTimestamp;
-(double)startWallTimestamp;
-(double)endWallTimestamp;
-(void)setAttemptedSamplingInterval:(double)arg1 ;
-(void)setSanitizePaths:(BOOL)arg1 ;
-(void)setOmitThirdPartyProcessStacks:(BOOL)arg1 ;
-(BOOL)omitSensitiveStrings;
-(void)setOmitSensitiveStrings:(BOOL)arg1 ;
-(void)setTargetProcessId:(int)arg1 ;
-(void)setTargetThreadId:(unsigned long long)arg1 ;
-(void)setCpuPercent:(unsigned)arg1 ;
-(void)setCpuDuration:(unsigned)arg1 ;
-(void)setWakeupsPerSec:(unsigned)arg1 ;
-(void)setWakeupsDuration:(unsigned)arg1 ;
-(void)setEventNote:(NSString *)arg1 ;
-(void)setExtraDuration:(double)arg1 ;
-(void)setDurationNote:(NSString *)arg1 ;
-(void)setStepsNote:(NSString *)arg1 ;
-(void)setOsProductName:(NSString *)arg1 ;
-(void)setOsProductVersion:(NSString *)arg1 ;
-(void)setOsBuildVersion:(NSString *)arg1 ;
-(void)setNumActiveCPUs:(unsigned)arg1 ;
-(BOOL)shouldPreemptivelyCacheSymbolicators;
-(void)setShouldPreemptivelyCacheSymbolicators:(BOOL)arg1 ;
-(BOOL)expectsLiveProcesses;
-(void)setExpectsLiveProcesses:(BOOL)arg1 ;
-(BOOL)sampleOnlyMainThreads;
-(void)setSampleOnlyMainThreads:(BOOL)arg1 ;
-(BOOL)shouldGatherKextStat;
-(void)setShouldGatherKextStat:(BOOL)arg1 ;
-(void)setTimeWhenTransitionedToSamplingAllProcesses:(double)arg1 ;
@end

