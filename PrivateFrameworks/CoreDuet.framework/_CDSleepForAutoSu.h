/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDSleepForAutoSu : NSObject {
    _CDAutoSuConfig *_autoSuConfig;
}

@property (retain) _CDAutoSuConfig *autoSuConfig;

- (void).cxx_destruct;
- (id)autoSuConfig;
- (id)defaultTimesWhenPredictionUnavailable:(id)arg1;
- (id)getUnlockAndSoftwareUpdateTimes;
- (id)makeDictionaryForEventStreamWhenPredictionTemporarilyUnavailable:(id)arg1;
- (id)predictForDate:(id)arg1 fromState:(id)arg2;
- (id)proposeTimesFromRelativeOffsetsForDate:(id)arg1 lastUnlock:(int)arg2 suStart:(int)arg3 suEnd:(int)arg4;
- (id)retrieveSleepProbabilities:(id)arg1;
- (void)setAutoSuConfig:(id)arg1;

@end