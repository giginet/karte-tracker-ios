//
//  KarteTrackerUtil.h
//  Pods
//

#ifndef KarteTrackerUtil_h
#define KarteTrackerUtil_h

#import <Foundation/Foundation.h>

void KarteTrackerShowLog(BOOL showLog);
void KarteTrackerLog(NSString *format, ...);
void KarteTrackerExceptionHandler(NSException *exception);

NSString* GetTrackerSerializeFilePath(NSString *filename);
NSString* GetDeviceName();

#endif /* KarteTrackerUtil_h */
