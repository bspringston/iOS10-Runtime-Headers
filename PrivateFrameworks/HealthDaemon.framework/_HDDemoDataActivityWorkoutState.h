/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDDemoDataActivityWorkoutState : NSObject <NSSecureCoding> {
    NSMutableData * _associatedObjectUUIDs;
    HKQuantity * _goal;
    unsigned long long  _goalType;
    NSDate * _startDate;
    double  _totalDistanceCyclingInMeters;
    double  _totalDistanceWalkingInMeters;
    double  _totalEnergyBurnedInKilocalories;
    unsigned long long  _workoutActivityType;
}

@property (nonatomic, retain) NSMutableData *associatedObjectUUIDs;
@property (nonatomic, retain) HKQuantity *goal;
@property (nonatomic) unsigned long long goalType;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic) double totalDistanceCyclingInMeters;
@property (nonatomic) double totalDistanceWalkingInMeters;
@property (nonatomic) double totalEnergyBurnedInKilocalories;
@property (nonatomic) unsigned long long workoutActivityType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addAssociatedObjectUUID:(id)arg1;
- (id)associatedObjectUUIDs;
- (void)encodeWithCoder:(id)arg1;
- (id)generateWorkoutWithEndDate:(id)arg1;
- (id)goal;
- (unsigned long long)goalType;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setAssociatedObjectUUIDs:(id)arg1;
- (void)setGoal:(id)arg1;
- (void)setGoalType:(unsigned long long)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTotalDistanceCyclingInMeters:(double)arg1;
- (void)setTotalDistanceWalkingInMeters:(double)arg1;
- (void)setTotalEnergyBurnedInKilocalories:(double)arg1;
- (void)setWorkoutActivityType:(unsigned long long)arg1;
- (id)startDate;
- (double)totalDistanceCyclingInMeters;
- (double)totalDistanceWalkingInMeters;
- (double)totalEnergyBurnedInKilocalories;
- (unsigned long long)workoutActivityType;

@end
