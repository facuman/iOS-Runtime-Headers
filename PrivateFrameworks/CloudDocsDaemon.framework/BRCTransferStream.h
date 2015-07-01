/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCTransferStream : NSObject <BRCLifeCycle> {
    id /* block */ _getNextJob;
    BOOL _hasReachedCap;
    NSMutableDictionary *_inFlightOpByID;
    BOOL _isCancelled;
    long long _nextFire;
    BRCDeadlineToken *_schedulingToken;
    BRCAccountSession *_session;
    BRCSyncContext *_syncContext;
    NSObject<OS_dispatch_queue> *_transferQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ getNextJob;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isCancelled;
@property (readonly) NSArray *operations;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addOperation:(id)arg1;
- (void)_close;
- (void)_evaluateCap;
- (void)_schedule;
- (void)_setReachedCap:(BOOL)arg1;
- (void)addAliasItem:(id)arg1 toTransferWithID:(id)arg2 operationID:(id)arg3;
- (void)addOperation:(id)arg1;
- (void)cancel;
- (void)cancelTransferID:(id)arg1 operationID:(id)arg2;
- (void)close;
- (id /* block */)getNextJob;
- (id)initWithSyncContext:(id)arg1 name:(id)arg2 scheduler:(id)arg3;
- (BOOL)isCancelled;
- (id)operations;
- (double)progressForTransferID:(id)arg1 operationID:(id)arg2;
- (void)resume;
- (void)setGetNextJob:(id /* block */)arg1;
- (void)setIsCancelled:(BOOL)arg1;
- (void)suspend;
- (void)wakeUpForNextWorkAt:(long long)arg1;

@end