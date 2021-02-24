//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>
#define _Bool BOOL

@class BSTimer;
@protocol OS_dispatch_queue;

@interface BKUserEventTimer : NSObject
{
    double _currentTimeout;
    double _lastUserEvent;
    double _lastResetTimerRequest;
    BSTimer *_timer;
    _Bool _isIdle;
    int _currentMode;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _shouldNotify;
    _Bool _safeToResetIdleTimer;
}

+ (id)sharedInstance;
- (void)_queue_clearTimer;
- (void)_queue_scheduleTimerWithTimeInterval:(double)arg1;
- (void)_queue_userEventOccurredInPresenceMode;
- (void)_queue_userEventOccurredInIdleMode;
- (_Bool)isSafeToResetIdleTimer;
- (void)notifyOnNextUserEvent;
- (void)userEventOccurredOnDisplay:(id)arg1;
- (void)resetTimer:(double)arg1 mode:(int)arg2;
- (double)lastUserEventTime;
- (void)dealloc;
- (id)init;

@end

