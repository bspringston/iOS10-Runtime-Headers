/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPRecentlySeenPairedBTLEPeripheralTuple : NSObject {
    unsigned long long  _advertisementFormat;
    NSMapTable * _cachedCharacteristicSignatures;
    NSMutableDictionary * _cachedDescriptors;
    NSMapTable * _cachedServiceSignatures;
    NSNumber * _categoryIdentifier;
    NSNumber * _configNumber;
    unsigned long long  _connectionPriority;
    NSString * _identifier;
    double  _lastSeen;
    bool  _monitorState;
    bool  _notifyingCharacteristicUpdated;
    CBPeripheral * _peripheral;
    NSNumber * _stateNumber;
    NSNumber * _statusFlags;
}

@property (nonatomic, readonly) unsigned long long advertisementFormat;
@property (nonatomic, readonly) NSMapTable *cachedCharacteristicSignatures;
@property (nonatomic, readonly) NSMutableDictionary *cachedDescriptors;
@property (nonatomic, readonly) NSMapTable *cachedServiceSignatures;
@property (nonatomic, retain) NSNumber *categoryIdentifier;
@property (nonatomic, retain) NSNumber *configNumber;
@property (nonatomic) unsigned long long connectionPriority;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) double lastSeen;
@property (nonatomic) bool monitorState;
@property (nonatomic) bool notifyingCharacteristicUpdated;
@property (nonatomic, readonly) CBPeripheral *peripheral;
@property (nonatomic, retain) NSNumber *stateNumber;
@property (nonatomic, retain) NSNumber *statusFlags;

- (void).cxx_destruct;
- (unsigned long long)advertisementFormat;
- (id)cachedCharacteristicSignatures;
- (id)cachedDescriptors;
- (id)cachedServiceSignatures;
- (id)categoryIdentifier;
- (id)configNumber;
- (unsigned long long)connectionPriority;
- (id)identifier;
- (id)initRecentlySeenPairedBTLEPeripheral:(id)arg1 statusFlags:(id)arg2 stateNumber:(id)arg3 category:(id)arg4 configNumber:(id)arg5 identifier:(id)arg6 advertisementFormat:(unsigned long long)arg7;
- (double)lastSeen;
- (bool)monitorState;
- (bool)notifyingCharacteristicUpdated;
- (id)peripheral;
- (void)setCategoryIdentifier:(id)arg1;
- (void)setConfigNumber:(id)arg1;
- (void)setConnectionPriority:(unsigned long long)arg1;
- (void)setMonitorState:(bool)arg1;
- (void)setNotifyingCharacteristicUpdated:(bool)arg1;
- (void)setStateNumber:(id)arg1;
- (void)setStatusFlags:(id)arg1;
- (id)stateNumber;
- (id)statusFlags;
- (void)updatePairedPeripheralConfiguration:(bool)arg1 connectionPriority:(unsigned long long)arg2;

@end