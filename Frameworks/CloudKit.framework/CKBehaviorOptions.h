/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKBehaviorOptions : NSObject {
    NSMutableDictionary * _cachedPrefs;
    NSObject<OS_dispatch_queue> * _cachedPrefsQueue;
    int  _ckToken;
    int  _mcToken;
}

@property (nonatomic, retain) NSMutableDictionary *cachedPrefs;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *cachedPrefsQueue;
@property (nonatomic) int ckToken;
@property (nonatomic) int mcToken;

+ (id)sharedOptions;

- (void).cxx_destruct;
- (bool)CFNetworkLogging;
- (const char *)CKCtlPrompt;
- (bool)CKTimeLogging;
- (bool)CKTimeLoggingDetailed;
- (double)PCSCacheMinTime;
- (unsigned long long)PCSCacheSize;
- (int)PCSRetryCount;
- (id)_behaviorContainerOptionForKey:(id)arg1;
- (id)_behaviorOptionForKey:(id)arg1;
- (bool)_buildIsOverridden;
- (id)_getArrayOptionForKey:(id)arg1 defaultValue:(id)arg2;
- (bool)_getBoolOptionForKey:(id)arg1 defaultValue:(bool)arg2;
- (double)_getDoubleOptionForKey:(id)arg1 defaultValue:(double)arg2;
- (int)_getIntOptionForKey:(id)arg1 defaultValue:(int)arg2;
- (id)_getStringOptionForKey:(id)arg1 defaultValue:(id)arg2;
- (id)_getStringOptionLockedForKey:(id)arg1 defaultValue:(id)arg2;
- (id)_init;
- (void)_setPref:(id)arg1 forKey:(id)arg2;
- (void)_startListeningForNotifications;
- (id)_urlForKey:(id)arg1 defaultURLString:(id)arg2;
- (unsigned long long)assetEvictionGracePeriodOnHighWatermarkWithDefaultValue:(unsigned long long)arg1;
- (unsigned long long)assetEvictionGracePeriodWithDefaultValue:(unsigned long long)arg1;
- (int)backgroundSessionConnectionPoolLimitWithDefaultValue:(int)arg1;
- (id)buildVersion;
- (id)cachedPrefs;
- (id)cachedPrefsQueue;
- (int)cachedRecordExpiryTime;
- (int)ckToken;
- (int)clientThrottleQueueWidth;
- (bool)compressRequests;
- (id)configBaseURL;
- (id)customCloudDBBaseURL;
- (id)customCodeServiceBaseURL;
- (id)customDeviceServiceBaseURL;
- (id)customShareServiceBaseURL;
- (void)dealloc;
- (double)defaultRequestTimeout;
- (double)defaultResourceTimeout;
- (int)defaultRetryAfter;
- (bool)disableCaching;
- (bool)enableMMCSMetricsWithDefaultValue:(bool)arg1;
- (bool)enableMescal;
- (bool)evictRecentAssets;
- (long long)flowControlBudget;
- (long long)flowControlBudgetOverride;
- (double)flowControlRegeneration;
- (double)flowControlRegenerationOverride;
- (bool)isAppleInternalInstall;
- (bool)logTraffic;
- (bool)logTrafficToTextFile;
- (int)longlivedOperationMaxRetryCount;
- (int)longlivedOperationThrottlingRetryCount;
- (unsigned long long)maxBatchSize;
- (unsigned long long)maxPackageDownloadsPerBatchWithDefaultValue:(unsigned long long)arg1;
- (unsigned long long)maxPackageUploadsPerBatchWithDefaultValue:(unsigned long long)arg1;
- (double)maxRecentProxyAge;
- (double)maximumFetchWaitTime;
- (double)maximumThrottleSeconds;
- (double)maximumWaitAfterFetchRequest;
- (int)mcToken;
- (double)operationTimeout;
- (bool)optimisticPCS;
- (id)otherAccountsWithDefaultValue:(id)arg1;
- (double)packageGCGracePeriod;
- (double)packageGCPeriod;
- (id)primaryAccountEmailOverride;
- (id)primaryAccountPasswordOverride;
- (id)productName;
- (id)productVersion;
- (double)publicIdentitiesExpirationTimeout;
- (unsigned long long)recentProxiesToSave;
- (bool)sandboxCloudD;
- (unsigned long long)savedErrorCount;
- (bool)sendDebugHeader;
- (int)serverIDExpiryTime;
- (void)setBuildVersion:(id)arg1;
- (void)setCFNetworkLogging:(bool)arg1;
- (void)setCKCtlPrompt:(char *)arg1;
- (void)setCKTimeLogging:(bool)arg1;
- (void)setCKTimeLoggingDetailed:(bool)arg1;
- (void)setCachedPrefs:(id)arg1;
- (void)setCachedPrefsQueue:(id)arg1;
- (void)setCachedRecordExpiryTime:(int)arg1;
- (void)setCkToken:(int)arg1;
- (void)setCompressRequests:(bool)arg1;
- (void)setConfigBaseURL:(id)arg1;
- (void)setCustomCloudDBBaseURL:(id)arg1;
- (void)setCustomCodeServiceBaseURL:(id)arg1;
- (void)setCustomDeviceServiceBaseURL:(id)arg1;
- (void)setCustomShareServiceBaseURL:(id)arg1;
- (void)setDefaultRequestTimeout:(double)arg1;
- (void)setDefaultResourceTimeout:(double)arg1;
- (void)setDisableCaching:(bool)arg1;
- (void)setEnableMescal:(bool)arg1;
- (void)setLogTraffic:(bool)arg1;
- (void)setLogTrafficToTextFile:(bool)arg1;
- (void)setMcToken:(int)arg1;
- (void)setModTimeInAssetCacheEviction:(bool)arg1;
- (void)setOperationTimeout:(double)arg1;
- (void)setOptimisticPCS:(bool)arg1;
- (void)setPrimaryAccountEmailOverride:(id)arg1;
- (void)setPrimaryAccountPasswordOverride:(id)arg1;
- (void)setProductName:(id)arg1;
- (void)setProductVersion:(id)arg1;
- (void)setSendDebugHeader:(bool)arg1;
- (void)setServerIDExpiryTime:(int)arg1;
- (void)setSetupBaseURL:(id)arg1;
- (void)setShouldProfileSQL:(bool)arg1;
- (void)setSqlBatchCount:(long long)arg1;
- (void)setSqlBatchTime:(double)arg1;
- (void)setTestRunIDHeader:(id)arg1;
- (void)setTrafficLogMaximumDataSize:(int)arg1;
- (void)setUseBackgroundSessions:(bool)arg1;
- (void)setUseEncryption:(bool)arg1;
- (void)setUsePreauth:(bool)arg1;
- (void)setUseStingray:(bool)arg1;
- (id)setupBaseURL;
- (double)shareAcceptorRetrievingDialogDelay;
- (bool)shouldDecryptRecordsBeforeSave;
- (bool)shouldLogProtobufBinary;
- (bool)shouldProfileSQL;
- (long long)sqlBatchCount;
- (double)sqlBatchTime;
- (id)testRunIDHeader;
- (int)trafficLogMaximumDataSize;
- (int)trafficLogQueueWidth;
- (bool)useBackgroundSessions;
- (bool)useEncryption;
- (bool)useModTimeInAssetCacheEviction;
- (bool)usePreauth;
- (bool)useStingray;
- (bool)validateMescalResponses;
- (id)vettedEmailsTestFormat;

@end
